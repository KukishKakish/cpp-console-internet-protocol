#include "file_reader.h"
#include "constants.h"

#include <fstream>
#include <cstring>
timer convert(char* str) {
	timer result;
	char* context = NULL;
	char* str_number = strtok_s(str, ":", &context);
	result.hours = atoi(str_number);
	str_number = strtok_s(NULL, ":", &context);
	result.minutes = atoi(str_number);
	str_number = strtok_s(NULL, ":", &context);
	result.seconds = atoi(str_number);
	return result;
}
path converts(const std::string& str) {
	path result;
	const std::string delimiter = "\\";
	size_t pos_disk = str.find(delimiter);
	size_t pos_users = str.find(delimiter, pos_disk + 1);
	size_t pos_username = str.find(delimiter, pos_users + 1);
	size_t pos_program = str.find(delimiter, pos_username + 1);

	strncpy(result.disk, str.substr(0, pos_disk).c_str(), MAX_STRING_SIZE - 1);
	strncpy(result.users, str.substr(pos_disk + 1, pos_users - pos_disk - 1).c_str(), MAX_STRING_SIZE - 1);
	strncpy(result.user1, str.substr(pos_users + 1, pos_username - pos_users - 1).c_str(), MAX_STRING_SIZE - 1);
	strncpy(result.programm, str.substr(pos_username + 1, pos_program - pos_username - 1).c_str(), MAX_STRING_SIZE - 1);

	result.disk[MAX_STRING_SIZE - 1] = '\0';
	result.users[MAX_STRING_SIZE - 1] = '\0';
	result.user1[MAX_STRING_SIZE - 1] = '\0';
	result.programm[MAX_STRING_SIZE - 1] = '\0';

	return result;
};
void read(const char* file_name, internet_usage* array[], int& size) {
	std::ifstream file(file_name);
	if (file.is_open())
	{
		size = 0;
		char tmp_buffer[MAX_STRING_SIZE];
		while (!file.eof()) {
			internet_usage* item = new internet_usage;
			file >> item->program.disk;
			file >> item->program.users;
			file >> item->program.user1;
			file >> item->program.programm;
			file >> tmp_buffer;
			item->start = convert(tmp_buffer);
			file >> tmp_buffer;
			item->finish = convert(tmp_buffer);
			file >> item->sent.number;
			file >> item->recieved.number;
			array[size++] = item;
		}
		file.close();
	}
		else{
		throw "Ошибка открытия файла";
}

