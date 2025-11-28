#pragma once
#include"define.h"
#include<stdio.h>
#include <stdlib.h>


typedef struct _vector
{
    int* data;
    u_int capacity;
    u_int size;
} vector;


vector* create_vector();
