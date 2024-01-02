#include <iostream>
#include <iomanip>
using namespace std;
#include "internet_usage.h"
#include "file_reader.h"
#include "constants.h"

<<<<<<< HEAD
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №9. GIT\n";
    cout << "Вариант №5. Интернет протокол\n";
    cout << "Автор: Крапивенцев Д.\n\n";
    internet_usage* usage[MAX_FILE_ROWS_COUNT];
    int size;
    try {
        read("data.txt", usage, size);
        cout << "***** Протокол работы в Интернете *****\n\n";
        for (int i = 0; i < size; i++) {
            cout << "Время начала сеанса.........: ";
            cout << setw(4) << setfill('0') << usage[i]->start.hours << ' ';
            cout << setw(2) << setfill('0') << usage[i]->start.minutes << ' ';
            cout << setw(2) << setfill('0') << usage[i]->start.seconds << '\n';

            cout << "Время завершения сеанса.....: ";
            cout << setw(4) << setfill('0') << usage[i]->finish.hours << ' ';
            cout << setw(2) << setfill('0') << usage[i]->finish.minutes << ' ';
            cout << setw(2) << setfill('0') << usage[i]->finish.seconds << '\n';

            cout << "Получено данных.............: ";
            cout << usage[i]->recieved.number << '\n';
            cout << "Отправлено данных......:";
            cout << usage[i]->sent.number << '\n';

            cout << "Программа находится на диске: ";
            cout << usage[i]->program.disk << '\n';
            cout << "в поддериктории дериктории..: ";
            cout << usage[i]->program.users << '\n';
            cout << "в директории пользователя...: ";
            cout << usage[i]->program.user1 << '\n';
            cout << "под названием...............: ";
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
=======
int main()
{
    cout << "Laboratory work #9. GIT\n";
    cout << "Variant #5. Internet Protocol\n";
    cout << "Author: Krapiventsew D.\n";
    cout << "Group: PInj1_d\n";
    return 0;
}
>>>>>>> data
