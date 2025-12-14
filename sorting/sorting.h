#pragma once
#include"../include/define.h"
#include"vector.h"
#include"compare.h"

void buble_sort_up(vector* vec, int(*compare)(META* , META*));
void buble_sort_down(vector* vec, int(*compare)(META* , META* ));