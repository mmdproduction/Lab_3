#include"sorting.h"


void buble_sort_up(vector* vec, int(*compare)(META* , META* )){
    u_int size_v = size(vec);
    for(u_int j = 1; j < size_v - 1; j++){
        for(u_int i = 0; i < size_v - j; i++){
            if(compare(get_by_index(vec, i), get_by_index(vec, i+1)) < 0){
                swap(vec, i, i+1);
            }
        }
    }
}

void buble_sort_down(vector* vec, int(*compare)(META* , META* )){
    u_int size_v = size(vec);
    for(u_int j = 1; j < size_v - 1; j++){
        for(u_int i = 0; i < size_v - j; i++){
            if(compare(get_by_index(vec, i), get_by_index(vec, i+1)) > 0){
                swap(vec, i, i+1);
            }
        }
    }
}