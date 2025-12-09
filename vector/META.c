#include"META.h"

typedef enum _type{
        _PANEL,
        _BRICKS,
        _MONOLITE
} type_t;
typedef struct _META
{
    char* name_builder;
    char* name_district;
    type_t type;
    u_int year_of_build;
    bool is_lift; 
    u_int num_flat;
    u_int num_floars;
    float average_area;
} META;

char* get_name_builder(META* meta){
    return meta->name_builder;
}
char* get_name_district(META* meta){
    return meta->name_district;
}
type_t get_type(META* meta){
    return meta->type;
}
u_int get_year(META* meta){
    return meta->year_of_build;
}
bool get_is_lift(META* meta){
    return meta->is_lift;
}
u_int get_num_flat(META* meta){
    return meta->num_flat;
}
u_int get_num_floars(META* meta){
    return meta->num_floars;
}
float get_average_area(META* meta){
    return meta->average_area;
}


