#include"vector.h"
typedef enum _type{
        _PANEL,
        _BRICKS,
        _MONOLITE
} type_t;
typedef enum _meta_type{
    _NAME_BUILDER,
    _NAME_DISTRICT,
    _TYPE,
    _YEAR,
    _LIFT,
    _NUM_FLAT,
    _NUM_FLOARS,
    _AVERAGE_AREA
} meta_type;
typedef struct _META
{
    char* name_builder;
    char* name_district;
    type_t type;
    u_int year_of_build;
    int is_lift; //change to bool
    u_int num_flat;
    u_int num_floars;
    float average_area;
} META;


typedef struct _vector{
    META* meta; //change to **META
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
void push_back(vector* vec, META value) {
    if (vec->meta == NULL) {
        vec->meta = (META*)malloc(sizeof(META));
        vec->capacity = 1;
    } 
    else if (vec->size >= vec->capacity) {
        vec->capacity *= 2;
        vec->meta = (META*)realloc(vec->meta, vec->capacity * sizeof(META));
    }
    vec->meta[vec->size] = value;
    vec->size++;
}
META get_by_index(vector* vec, u_int index){
    if (index >= vec->size) {
        return (META){};
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


// * get(vector* vec, meta_type type){
//     META* meta = vec->meta;
//     switch (type)
//     {
//     case _NAME_BUILDER:
//         return meta->name_builder;
//     case _NAME_DISTRICT:
//         return meta->name_district;
//     case _TYPE:
//         return meta->type;
//     case _YEAR:
//         return meta->year_of_build;
//     case _LIFT:
//         return meta->is_lift;
//     case _NUM_FLAT:
//         return meta->num_flat;
//     case _NUM_FLOARS:
//         return meta->num_floars;
//     case _AVERAGE_AREA:
//         return meta->average_area;
//     default:
//         return NULL;
//     }
// }