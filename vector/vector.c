#include"vector.h"




vector* create_vector(){
    vector* vec = (vector*) malloc(sizeof(vector));
    if(!vec){
        return NULL;
    }
    vec->data = (int*) malloc(sizeof(int));
    if(!vec->data){
        free(vec);
        return NULL;
    }
    vec->capacity = 1;
    vec->size = 1;

    return vec;
}