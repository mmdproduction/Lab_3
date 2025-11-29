#include"vector.h"

typedef struct _META
{
    int num;
} META;


typedef struct _vector{
    META* meta;
    size_t capacity;
    size_t size;
} vector;


vector* create_vector(){
    vector* vec = (vector*) malloc(sizeof(vector));
    if(!vec){
        return NULL;
    }
    vec->meta = (META*) malloc(sizeof(META));
    if(!vec->meta){
        free(vec);
        return NULL;
    }
    vec->capacity = 1;
    vec->size = 1;

    return vec;
}

size_t size(vector* vec){
    return vec->size;
}

int is_empty(vector* vec){
    return vec->size == 0;
}