#ifndef FILTER_H
#define FILTER_H	
#include "internet_usage.h"
internet_usage** filter (
    internet_usage* array[], int size, 
bool (*check)(internet_usage* element), int& result_size);

bool check_internet_usage_by_program_name (internet_usage* element);
bool check_internet_usage_by_time(internet_usage* element);

#endif
