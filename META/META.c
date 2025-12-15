#include"META.h"

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

META* create_META(const char* name_builder,
    const char* name_district,
    type_t type,
    u_int year_of_build,
    bool is_lift, 
    u_int num_flat,
    u_int num_floars,
    float average_area){
        META* meta = (META*)malloc(sizeof(META));
        meta->name_builder = strdup(name_builder);
        meta->name_district = strdup(name_district);
        meta->type = type;
        meta->year_of_build = year_of_build;
        meta->is_lift = is_lift;
        meta->num_flat = num_flat;
        meta->num_floars = num_floars;
        meta->average_area = average_area;
    }

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


void delete_META(META** meta){
    free((*meta));
    meta = NULL;
}