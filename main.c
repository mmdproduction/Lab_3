#include"vector/vector.h"
#include<stdio.h>
#include"sorting/sorting.h"
#include"outputs/outputs.h"
#include"inputs/inputs.h"
#include"flag/flag.h"
#include"generate/generate.h"


void processing_input(vector** vec, Args** args){
    if((*args)->gen){
            printf("%u",(*args)->num);
            *vec = generator((*args)->num);
        }
        else if((*args)->input_csv){
            *vec = input_out_csv((*args)->input_file);
        }
        else{
            *vec = input();
        }
}
void processing_sort(vector** vec, Args** args){
    if((*args)->sort){
            if(strcmp((*args)->flag, "desc") == 0 || strcmp((*args)->flag, "D") == 0){
                buble_sort_down(*vec, mtcmp);
            }
            else{
                buble_sort_up(*vec, mtcmp);
            }
        }
    else if((*args)->quick){
            quick_sort(*vec, 0, size(*vec) - 1, mtcmp);
        }
    
}

void processing_output(vector** vec, Args** args){
    if((*args)->output_csv){
            output_in_csv(*vec, (*args)->out_file);
        }
        else if((*args)->print){
            print(*vec);
        }
        else{
            output(*vec);
        }
}

int main(int argc, char* argv[]){
    FILE*  graf_f = fopen("bublesort.txt", "a+");
    Args* args = (Args*)malloc(sizeof(Args));
    parse_args(argc, argv, args);
    vector* vec;

    if(args->help){
        print_help();
    }
    else{
        processing_input(&vec, &args);
        processing_sort(&vec, &args);
        processing_output(&vec, &args);
    }
    delete_vector(&vec);
}