#include"vector/vector.h"
#include<stdio.h>
#include"sorting/sorting.h"
#include"outputs/outputs.h"
#include"inputs/inputs.h"

int main(){
    vector* vec;
    META* q = create_META("brih_prom", "altushkovo", 1, 2007, true, 66, 55, 12.43f);
    META* r = create_META("drih_prom", "altushkovo", 2, 2008, false, 66, 55, 12.43f);
    int res = mtcmp(q, r);
    vec = create_vector();
    push_back(vec, q);
    push_back(vec, r);
    push_back(vec, q);
    push_back(vec, r);
    push_back(vec, q);
    push_back(vec, r);
    output(vec);
    //output_in_csv(vec, "output.csv");

    print(vec);

    vector* vec_2 = input_out_csv("output.csv");
    print(vec_2);

}