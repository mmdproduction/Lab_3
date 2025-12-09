#pragma once
#include"define.h"
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include"META.h"

typedef struct _vector vector;



vector* create_vector();
void push_back(vector* vec, META* value);
META* get_by_index(vector* vec, u_int index);
void pop_back(vector* vec);
void resize(vector* vec);
size_t size(vector* vec);
int is_empty(vector* vec);
