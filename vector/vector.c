#include"vector.h"

typedef struct _vector{
    META** meta;
    size_t capacity;
    size_t size;
} vector;


vector* create_vector(){
    vector* vec = (vector*) malloc(sizeof(vector));
    if(!vec){
        return NULL;
    }
    vec->meta = (META**) malloc(sizeof(META*));
    if(!vec->meta){
        free(vec);
        return NULL;
    }
    vec->capacity = 1;
    vec->size = 0;

    return vec;
}
void push_back(vector* vec, META* value) {
    if (vec->meta == NULL) {
        vec->meta = (META**)malloc(sizeof(META*));
        vec->capacity = 1;
    } 
    else if (vec->size >= vec->capacity) {
        vec->capacity *= 2;
        vec->meta = (META**)realloc(vec->meta, vec->capacity * sizeof(META*));
    }
    vec->meta[vec->size] = value;
    vec->size++;
}
META* get_at(vector* vec, u_int index){
    if (index >= vec->size) {
        return NULL;
    }
    return vec->meta[index];
}

void pop_back(vector* vec) {
    if (vec->size > 0) {
        vec->size--;
    }
}
void resize(vector* vec){
    if(vec->size < vec->capacity && vec->size > 0){
        vec->capacity = vec->size;
        void* buf = realloc(vec->meta, vec->size);
        if(!buf){
            vec->meta = buf;
        }
    }

}

size_t size(vector* vec){
    return vec->size;
}

int is_empty(vector* vec){
    return vec->size == 0;
}

void swap(vector* vec, u_int first, u_int second){
    if(first <= vec->size && second <= vec->size){
        META* buf = vec->meta[first];
        vec->meta[first] = vec->meta[second];
        vec->meta[second] = buf;
    }
}

void delete_vector(vector** vec){
    for(u_int i = 0; i < size(*vec); i++){
        META* ptm = (*vec)->meta[i];
        delete_META(&ptm);
        ptm = NULL;
    }
    free(*vec);
    *vec = NULL;
}