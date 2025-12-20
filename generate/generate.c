#include"generate.h"


META* generate(){
    srand(time(NULL));
    
    
    char* name_builder = builders[rand() % (sizeof(builders) / sizeof(builders[0]))];
    char* name_district = districts[rand() % (sizeof(districts) / sizeof(districts[0]))];
    type_t type = (type_t)(rand() % 3);
    u_int year_of_build = 1500 +  rand() % (2026 - 1500 + 1);
    bool is_lift = (bool)(rand() % 2); 
    u_int num_floars = 1 + rand() % 100;
    u_int num_flat = num_floars * (1 + rand() % 25);
    float average_area = (float)((600 + rand() % 1000) / 100.f);

    META* meta = create_META(name_builder, name_district,
            type, year_of_build,
            is_lift, num_flat,num_floars,
            average_area);
    return meta;
}
vector* generator(u_int num){
    srand(time(NULL));

    vector* vec = create_vector();
    for(u_int i = 0; i < num; ++i){
        META* meta = generate();
        push_back(vec, meta);
    }
    return vec;
}