#include <iostream> 
#include <Windows.h>
#include "functions.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string symbols;
    int choice;

    while (true) {
        cout << "�������� ������� �������������:" << endl;
        cout << "1 - ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������" << endl;
        cout << "2 - ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������" << endl;
        cout << "3 - ����� � ������� ���� �������, ���������������� ��������� �����" << endl;
        cout << "4 - ����� �� ���������" << endl;
        cout << "��� �����: ";
        cin >> choice;

        switch (choice) {
        case 1:
            DifferenceOfLatinLetters();
            break;

        case 2:
            DifferenceOfRussianLetters();
            break;

        case 3:
            OutputDigitCode();
            break;

        case 4:
            cout << "��������� ���������." << endl;
            return 0;

        default:
            cout << "�������� �����. ����������, �������� 1, 2, 3 ��� 4." << endl;
            break;
        }
    }

    return 0;
}