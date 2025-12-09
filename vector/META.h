#pragma once
#include"define.h"
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _META META;
typedef enum _type type_t;

char* get_name_builder(META* meta);
char* get_name_district(META* meta);
type_t get_type(META* meta);
u_int get_year(META* meta);
bool get_is_lift(META* meta);
u_int get_num_flat(META* meta);
u_int get_num_floars(META* meta);
float get_n_builder(META* meta);
