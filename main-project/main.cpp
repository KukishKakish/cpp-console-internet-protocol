#include <iostream>

using namespace std;

#include "internet_usage.h"
#include "file_reader.h"
#include "constants.h"

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №9. GIT\n";
    cout << "Вариант №5. Интернет протокол\n";
    cout << "Автор: Крапивенцев Д.\n\n";
    internet_usage* usage[MAX_FILE_ROWS_COUNT];
    int size;
    try {
        read("data.txt", usage, size);
        for (int i = 0; i < size; i++) {

            cout << usage[i]->finish.hours << ' ';
            cout << usage[i]->finish.minutes << ' ';
            cout << usage[i]->finish.seconds << '\n';
            cout << usage[i]->start.hours << ' ';
            cout << usage[i]->start.minutes << ' ';
            cout << usage[i]->start.seconds << '\n';

            cout << usage[i]->recieved.number << '\n';
            cout << usage[i]->sent.number << '\n';

            cout << usage[i]->program.disk << '\n';
            cout << usage[i]->program.users << '\n';
            cout << usage[i]->program.user1 << '\n';
            cout << usage[i]->program.programm << '\n';
            cout << '\n';
        }

        for (int i = 0; i < size; i++)
        {
            delete usage[i];
        }
    }
        catch (const char* error)
        {
            cout << error << '\n';
        }
        return 0;
    }