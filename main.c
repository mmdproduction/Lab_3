#include"vector/vector.h"
#include<stdio.h>
#include"sorting/sorting.h"
#include"outputs/outputs.h"
#include"inputs/inputs.h"
#include"flag/flag.h"
#include"generate/generate.h"

int main(int argc, char* argv[]){
    Args* args = (Args*)malloc(sizeof(Args));
    parse_args(argc, argv, args);
    vector* vec;

    if(args->help){
        print_help();
    }
    else{
        if(args->gen){
            printf("%u",args->num);
            vec = generate(args->num);
        }
        else if(args->input_csv){
            vec = input_out_csv(args->input_file);
        }
        else{
            vec = input();
        }

        if(args->sort){
            if(strcmp(args->flag, "desc") == 0 || strcmp(args->flag, "D") == 0){
                buble_sort_down(vec, mtcmp);
            }
            else{
                buble_sort_up(vec, mtcmp);
            }
        }

        if(args->output_csv){
            output_in_csv(vec, args->out_file);
        }
        else if(args->print){
            print(vec);
        }
        else{
            output(vec);
        }
    }
}