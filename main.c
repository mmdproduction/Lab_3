#include"vector/vector.h"
#include<stdio.h>
#include"sorting/sorting.h"

int main(){
    vector* vec;
    META* q = create_META("brih_prom", "altushkovo", 1, 2007, true, 66, 55, 12.43f);
    META* r = create_META("drih_prom", "altushkovo", 1, 2008, false, 66, 55, 12.43f);
    int res = mtcmp(q, r);
    vec = create_vector();
    push_back(vec, q);
    push_back(vec, r);
    push_back(vec, q);
    push_back(vec, r);
    push_back(vec, q);
    push_back(vec, r);
    for(u_int i = 0; i < size(vec); i++){
        META* res = get_by_index(vec, i);
        printf("%d:\t%s\n", i, get_name_builder(res));
    }
    buble_sort_down(vec);
    for(u_int i = 0; i < size(vec); i++){
        META* res = get_by_index(vec, i);
        printf("%d:\t%s\n", i, get_name_builder(res));
    }

}