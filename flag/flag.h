#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"define.h"

typedef struct _Args{
    bool help;
    bool gen;
    bool input_csv;
    bool output_csv;
    bool print;
    bool sort;
    char* flag;
    char* out_file;
    char* input_file;
    u_int num;
    bool quick;
} Args;


void print_help();
int parse_args(int argc, char* argv[], Args* args);