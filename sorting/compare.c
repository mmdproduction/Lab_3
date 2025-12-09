#include"compare.h"

int mtcmp(META* left, META* right){
    int result = EQUAL;
    if((result = (get_name_builder(left), get_name_builder(right))) == 0){
        if(result = strcmp(get_name_district(left), get_name_district(right)) == 0){
            if(get_type(left) == get_type(right)){ //create tupe_t compare
        
        }
            else return (get_type(left) > get_type(right) ? -1 : 1); //change to defines
        }
        else return result;
    }
    else return result;
    
}