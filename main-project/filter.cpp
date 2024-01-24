#include "filter.h"
#include <cstring>
#include <iostream>

internet_usage** filter(internet_usage* array[], int size, bool (*check)(internet_usage* element), int& result_size)
{
	internet_usage** result = new internet_usage * [size];
	result_size = 0;
	for (int i = 0; i < size; i++)
	{
		if (check(array[i]))
		{
			result[result_size++] = array[i];
		}
	}
	return result;
}

bool check_internet_usage_by_program_name(internet_usage* element)
{
	return strcmp(element->program.programm, "") == 0;
}
 
bool check_internet_usage_by_time(internet_usage* element)
{
	return element->start.hours>8;
}

