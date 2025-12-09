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
    u_int year_of_build; //
    bool is_lift; 
    u_int num_flat;
    u_int num_floars;
    float average_area;
} META;