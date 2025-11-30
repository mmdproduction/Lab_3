#include"vector/vector.h"
#include<stdio.h>


int main(){
    vector* vec;
    vec = create_vector();
    printf("%u", get(vec));
}