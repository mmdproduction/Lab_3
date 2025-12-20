#include"flag.h"

void print_help(){
    puts("\t-h, --help  Show this info");
    puts("\t-g, --generate=N  Generate N lines random Data");
    puts("\t-s, --sort  Sort data");
    puts("\t-p, --print  Print table of DATA");
    puts("\t-o, --output=FILENAME  output DATA in FILENAME");
    puts("\t-i, --in=FILENAME take DATA from FILENAME");
    puts("\t-t, --type=TYPE  Change TYPE of sort");
}

int parse_args(int argc, char* argv[], Args* args){
    args->out_file = "";
    args->input_file = "";
    args->flag = "asc";
    args->sort = false;
    args->gen = false;
    args->help = false;
    args->input_csv = false;
    args->output_csv = false;
    args->print = false;
    args->num = 0;
    args->quick = false;

    for(u_int i = 1; i < argc; ++i){
        char* arg = argv[i];
        if(strcmp(arg, "-h") == 0 || strcmp(arg, "--help") == 0){
            args->help = true;
        }
        else if(strcmp(arg, "-q") == 0 || strcmp(arg, "--quick") == 0){
            args->quick = true;
        }
        else if(strcmp(arg, "-s") == 0 || strcmp(arg, "--sort") == 0){
            args->sort = true;
        }
        else if(strcmp(arg, "-p") == 0 || strcmp(arg, "--print") == 0){
            args->print = true;
        }
        else if(strncmp(arg, "-o", 2) == 0 || strncmp(arg, "--out", 5) == 0){
            args->output_csv = true;
            char* value = NULL;
            if(strncmp(arg, "--out=", 6) == 0){
                value = arg + 6;
            }
            else if(strncmp(arg, "-o", 2) == 0 && i+1 < argc){
                value = argv[++i];
            }
            else{
                fprintf(stderr, "INVALID FLAG");
                return 0;
            }
            args->out_file = value;
        }
        else if(strncmp(arg, "-t", 2) == 0 || strncmp(arg, "--type", 6) == 0){
            char* value = NULL;
            if(strncmp(arg, "--type=", 7) == 0){
                value = arg + 7;
            }
            else if(strncmp(arg, "-t", 2) == 0 && i+1 < argc){
                value = argv[++i];
            }
            else{
                fprintf(stderr, "INVALID FLAG");
                return 0;
            }
            args->flag = strdup(value);
        }
        else if(strncmp(arg, "-i", 2) == 0 || strncmp(arg, "--in", 4) == 0){
            args->input_csv = true;
            char* value = NULL;
            if(strncmp(arg, "--in=", 5) == 0){
                value = arg + 5;
            }
            else if(strncmp(arg, "-i", 2) == 0 && i+1 < argc){
                value = argv[++i];
            }
            else{
                fprintf(stderr, "INVALID FLAG");
                return 0;

                
            }
            args->input_file = strdup(value);
        }
        else if(strncmp(arg, "-g", 2) == 0 || strncmp(arg, "--generate", 10) == 0){
            args->gen = true;
            char* value = NULL;
            if(strncmp(arg, "--generate=", 11) == 0){
                value = arg + 11;
            }
            else if(strncmp(arg, "-g", 2) == 0 && i+1 < argc){
                value = argv[++i];
            }
            else{
                fprintf(stderr, "INVALID FLAG");
                return 0;
            }
            args->num = strtoul(value, NULL, 10);
        }
        
    }
    return 1;
}

