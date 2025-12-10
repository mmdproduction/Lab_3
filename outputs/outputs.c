#include"outputs.h"

 char* bool_output(META* meta){
    bool res = get_is_lift(meta);
    if(res) return "YES";
    return "NO";
}
char* type_t_output(META* meta){
    type_t res = get_type(meta);
    switch (res)
    {
    case _BRICKS:
        return "BRICKS";
    case _PANEL:
        return "PANEL";
    case _MONOLITE:
        return "MONOLITE";
    } 
}

void output(vector* vec){
    fprintf(stdout, "BUILDER,DISTRICT,TYPE,YEAR,LIFT,NUM_FLAT,NUM_FLOARS,AVERAGE_AREA\n");
    for(u_int index = 0; index < size(vec); index++){
        META* meta = get_by_index(vec, index);
        fprintf(stdout, "%s,%s,%s,%u,%s,%u,%u,%.2f\n",
            get_name_builder(meta),
            get_name_district(meta),
            type_t_output(meta),
            get_year(meta),
            bool_output(meta),
            get_num_flat(meta),
            get_num_floars(meta),
            get_average_area(meta)
        );
    }
}

void output_in_csv(vector* vec, const char* file_name){
    FILE* fp = fopen(file_name, "w");
    fprintf(fp, "BUILDER,DISTRICT,TYPE,YEAR,LIFT,NUM_FLAT,NUM_FLOARS,AVERAGE_AREA\n");
    for(u_int index = 0; index < size(vec); index++){
        META* meta = get_by_index(vec, index);
        fprintf(fp, "%s,%s,%s,%u,%s,%u,%u,%.2f\n",
            get_name_builder(meta),
            get_name_district(meta),
            type_t_output(meta),
            get_year(meta),
            bool_output(meta),
            get_num_flat(meta),
            get_num_floars(meta),
            get_average_area(meta)
        );
    }
    fclose(fp);
}



void print(vector* vec){
    fprintf(stdout, "|==========BUILDER==========|=========DISTRICT=========|=====TYPE=====|=====YEAR=====|=====LIFT=====|====NUM_FLAT====|====NUM_FLOARS====|=====AVERAGE_AREA=====|\n");
    for(u_int index = 0; index < size(vec); index++){
        META* meta = get_by_index(vec, index);
        fprintf(stdout, "|%-27.27s|%-26.26s|%-14.14s|%-14u|%-14.14s|%-16u|%-18u|%-22.2f|\n",
            get_name_builder(meta), 
            get_name_district(meta), 
            type_t_output(meta), 
            get_year(meta), 
            bool_output(meta), 
            get_num_flat(meta), 
            get_num_floars(meta), 
            get_average_area(meta)
        );
    }
}
