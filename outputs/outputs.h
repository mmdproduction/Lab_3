#pragma once
#include<stdio.h>
#include"vector.h"


char* type_t_output(META* meta);
char* bool_output(META* meta);
void output(vector* vec);
void output_in_csv(vector* vec, const char* file_name);
