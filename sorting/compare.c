#include"compare.h"



int mtcmp(META* left, META* right){
    if(strcmp(get_name_builder(left), get_name_builder(right)) == 0){
        if(strcmp(get_name_district(left), get_name_district(right)) == 0){
            if(get_type(left) == get_type(right)){
                if(get_is_lift(left) == get_is_lift(right)){
                    if(get_num_flat(left) == get_num_flat(right)){
                        if(get_num_floars(left) == get_num_floars(right)){
                            if(get_average_area(left) == get_average_area(right)){
                                return EQUAL;
                            }
                            else return (fabs(get_average_area(left) - get_average_area(right)) < EPS ? LEFT : RIGHT);
                            }
                        else return (get_num_floars(left) > get_num_floars(right) ? LEFT : RIGHT);
                        }
                    else return (get_num_flat(left) > get_num_flat(right) ? LEFT : RIGHT);
                    }
                else return (get_is_lift(left) > get_is_lift(right) ?  LEFT : RIGHT);
        }
            else return (get_type(left) > get_type(right) ?  LEFT : RIGHT); //change to defines
        }
        else return strcmp(get_name_district(left), get_name_district(right));
    }
    else return strcmp(get_name_builder(left), get_name_builder(right));
    
}