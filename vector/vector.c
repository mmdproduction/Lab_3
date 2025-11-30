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


META* get(vector* vec, meta_type type){
    META* meta = vec->meta;
    switch (type)
    {
    case _NAME_BUILDER:
        return meta->name_builder;
    case _NAME_DISTRICT:
        return meta->name_district;
    case _TYPE:
        return meta->type;
    case _YEAR:
        return meta->year_of_build;
    case _LIFT:
        return meta->is_lift;
    case _NUM_FLAT:
        return meta->num_flat;
    case _NUM_FLOARS:
        return meta->num_floars;
    default:
        return NULL;
    }
}