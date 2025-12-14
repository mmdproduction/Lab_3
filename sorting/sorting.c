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


int partition(vector* vec, int low,  int high, int(*comp)(META* , META* )){
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(comp(get_by_index(vec, j), get_by_index(vec, high)) < 0){
            i++;
            swap(vec, j, i);
        }
    }

    swap(vec, i + 1, high);
    return i + 1;

}
void quick_sort(vector* vec, int low, int high, int(*compare)(META* , META* )){
    if(low < high){

        int ind = partition(vec, low, high, compare);

        quick_sort(vec, low, ind - 1, compare);
        quick_sort(vec, ind + 1, high, compare);
    }
}
