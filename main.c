#include"vector/vector.h"
#include<stdio.h>
#include"sorting/sorting.h"
#include"outputs/outputs.h"
#include"inputs/inputs.h"
#include"flag/flag.h"
#include"generate/generate.h"

int main(int argc, char* argv[]){
    Args* args = (Args*)malloc(sizeof(Args));
    vector* vec;
    vec = generate(100);
    output(vec);
    //output_in_csv(vec, "output.csv");

    print(vec);

    

}