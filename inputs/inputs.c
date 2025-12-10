#include"inputs.h"
type_t parse_type(const char* type_str){
    if(!strcmp(type_str, "PANEL")) return _PANEL;
    if(!strcmp(type_str, "BRICKS")) return _BRICKS;
    if(!strcmp(type_str, "MONOLITE")) return _MONOLITE;
}

vector* input_out_csv(char* filename) {
    FILE* fp = fopen(filename, "r");
    if (!fp) {
        return NULL;
    }

    vector* vec = create_vector();
    char line[1024];

    if (fgets(line, sizeof(line), fp) == NULL) {
        fclose(fp);
        return vec;
    }

    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n")] = 0;

        char name_builder[256] = "UNNAMED";
        char name_district[256] = "UNNAMED";
        char type_str[64] = "UNNAMED";
        char lift_str[16] = "NO";
        u_int year_of_build = 0;
        u_int num_flat = 0;
        u_int num_floors = 0;
        float average_area = 0;

        int result = sscanf(line, "%255[^,],%255[^,],%63[^,],%u,%15[^,],%u,%u,%f",
                            name_builder, name_district, type_str,
                            &year_of_build, lift_str,
                            &num_flat, &num_floors, &average_area);

        if (result != 8) {
            continue;
        }

        bool is_lift = (strcmp(lift_str, "1") == 0) ||
                       (strcasecmp(lift_str, "YES") == 0);

        type_t type = parse_type(type_str);

        META* meta = create_META(name_builder, name_district, type,
                                 year_of_build, is_lift, num_flat,
                                 num_floors, average_area);
        if (meta) {
            push_back(vec, meta);
        }
    }

    fclose(fp);
    return vec;
}

vector* input() {
    vector* vec = create_vector();
    char line[1024];

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return vec;
    }

    while (fgets(line, sizeof(line), stdin)) {
        line[strcspn(line, "\n")] = 0;

        if (line[0] == '\0') break;

        char name_builder[256] = "UNNAMED";
        char name_district[256] = "UNNAMED";
        char type_str[64] = "UNNAMED";
        char lift_str[16] = "NO";
        u_int year_of_build = 0;
        u_int num_flat = 0;
        u_int num_floors = 0;
        float average_area = 0;

        int result = sscanf(line, "%255[^,],%255[^,],%63[^,],%u,%15[^,],%u,%u,%f",
                            name_builder, name_district, type_str,
                            &year_of_build, lift_str,
                            &num_flat, &num_floors, &average_area);

        if (result != 8) {
            continue;
        }

        bool is_lift = (strcmp(lift_str, "1") == 0) ||
                       (strcasecmp(lift_str, "YES") == 0);

        type_t type = parse_type(type_str);

        META* meta = create_META(name_builder, name_district, type,
                                 year_of_build, is_lift, num_flat,
                                 num_floors, average_area);
        if (meta) {
            push_back(vec, meta);
        }
    }
    return vec;
}