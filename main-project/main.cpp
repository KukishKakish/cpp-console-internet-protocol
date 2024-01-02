#include <iostream>
#include <iomanip>
using namespace std;
#include "internet_usage.h"
#include "file_reader.h"
#include "constants.h"
#include "filter.h"

void output(internet_usage* usage) {
    cout << "����� ������ ������.........: ";
    cout << setw(4) << setfill('0') << usage->start.hours << ' ';
    cout << setw(2) << setfill('0') << usage->start.minutes << ' ';
    cout << setw(2) << setfill('0') << usage->start.seconds << '\n';

    cout << "����� ���������� ������.....: ";
    cout << setw(4) << setfill('0') << usage->finish.hours << ' ';
    cout << setw(2) << setfill('0') << usage->finish.minutes << ' ';
    cout << setw(2) << setfill('0') << usage->finish.seconds << '\n';

    cout << "�������� ������.............: ";
    cout << usage->recieved.number << '\n';
    cout << "���������� ������......:";
    cout << usage->sent.number << '\n';

    cout << "��������� ��������� �� �����: ";
    cout << usage->program.disk << '\n';
    cout << "� ������������� ����������..: ";
    cout << usage->program.users << '\n';
    cout << "� ���������� ������������...: ";
    cout << usage->program.user1 << '\n';
    cout << "��� ���������...............: ";
    cout << usage->program.programm << '\n';
    cout << '\n';
}

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
            output(usage[i]);
        }
        bool (*check_function)(internet_usage*) = NULL;
        cout << "�������� ��� ����������:\n";
        cout << "1) ������������ ��������� - Skype \n";
        cout << "2) ���������� ������������ � 08:00 \n";
        int item;
        cin >> item;
        switch (item) {
        case 1:
            check_function = check_internet_usage_by_program_name;
            cout << "Skype ������������� �����";
            break;
        case 2:
            check_function = check_internet_usage_by_time;
            cout << "����� ������������ ���������� ����� 08:00";
            break;
        default: 
            throw " ";
        }
        if (check_function) {
            int new_size;
            internet_usage** filtered = filter(usage, size, check_function, new_size);
            for (int i = 0; i < new_size; i++) 
            {
                output(filtered[i]);
            }
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

