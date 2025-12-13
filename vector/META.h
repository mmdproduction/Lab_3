#pragma once
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include"define.h"

typedef struct _META META;
typedef enum _type{
        _PANEL,
        _BRICKS,
        _MONOLITE
} type_t;


META* create_META(const char* name_builder,
    const char* name_district,
    type_t type,
    u_int year_of_build,
    bool is_lift, 
    u_int num_flat,
    u_int num_floars,
    float average_area);

char* get_name_builder(META* meta);
char* get_name_district(META* meta);
type_t get_type(META* meta);
u_int get_year(META* meta);
bool get_is_lift(META* meta);
u_int get_num_flat(META* meta);
u_int get_num_floars(META* meta);
float get_average_area(META* meta);

void delete_META(META** meta);


