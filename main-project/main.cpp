#include <iostream>
#include <iomanip>
using namespace std;
#include "internet_usage.h"
#include "file_reader.h"
#include "constants.h"

<<<<<<< HEAD
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "������������ ������ �9. GIT\n";
    cout << "������� �5. �������� ��������\n";
    cout << "�����: ����������� �.\n\n";
    internet_usage* usage[MAX_FILE_ROWS_COUNT];
    int size;
    try {
        read("data.txt", usage, size);
        cout << "***** �������� ������ � ��������� *****\n\n";
        for (int i = 0; i < size; i++) {
            cout << "����� ������ ������.........: ";
            cout << setw(4) << setfill('0') << usage[i]->start.hours << ' ';
            cout << setw(2) << setfill('0') << usage[i]->start.minutes << ' ';
            cout << setw(2) << setfill('0') << usage[i]->start.seconds << '\n';

            cout << "����� ���������� ������.....: ";
            cout << setw(4) << setfill('0') << usage[i]->finish.hours << ' ';
            cout << setw(2) << setfill('0') << usage[i]->finish.minutes << ' ';
            cout << setw(2) << setfill('0') << usage[i]->finish.seconds << '\n';

            cout << "�������� ������.............: ";
            cout << usage[i]->recieved.number << '\n';
            cout << "���������� ������......:";
            cout << usage[i]->sent.number << '\n';

            cout << "��������� ��������� �� �����: ";
            cout << usage[i]->program.disk << '\n';
            cout << "� ������������� ����������..: ";
            cout << usage[i]->program.users << '\n';
            cout << "� ���������� ������������...: ";
            cout << usage[i]->program.user1 << '\n';
            cout << "��� ���������...............: ";
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
