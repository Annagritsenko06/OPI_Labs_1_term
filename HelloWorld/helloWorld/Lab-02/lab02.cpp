#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char number;
    setlocale(LC_ALL, "rus");
    do {
        cout << "�������� ������� �������������:" << endl;
        cout << "1 - ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������" << endl;
        cout << "2 - ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������" << endl;
        cout << "3 - ����� � ������� ���� �������, ���������������� ��������� �����" << endl;
        cout << "4 - ����� �� ���������" << endl;
        cout << "�������� number= ";
        cin >> number;

        switch (number) {
        case '1': {
            char symbol;
            cout << "������� ������ ���������� ��������: ";
            cin >> symbol;

            if (symbol >= 'a' && symbol <= 'z') {
                int uppercaseCode = symbol - 32;
                int lowercaseCode = symbol;
                int diff = uppercaseCode - lowercaseCode;
                cout << "������� �������� �����: " << diff << endl;
            }
            else if (symbol >= 'A' && symbol <= 'Z') {
                int uppercaseCode = symbol;
                int lowercaseCode = symbol + 32;
                int diff = uppercaseCode - lowercaseCode;
                cout << "������� �������� �����: " << diff << endl;
            }
            else {
                cout << "��������� ������ �� �������� ��������� ������" << endl;
            }

            break;
        }
        case '2': {
            char symbol;
            cout << "������� ������ �������� ��������: ";
            cin >> symbol;

            if (symbol >= static_cast<int>('�') && symbol <= static_cast <int>('�')) {
                int uppercaseCode = toupper(symbol);
                int lowercaseCode = tolower(symbol);
                int difference = abs(uppercaseCode - lowercaseCode);
                cout << "������� ����� ������ �������� � ��������� � �������� ���������: " << difference << endl;
            }
            else {
                cout << "������: ������ ������, �� ���������� ������� ������ Windows-1251." << endl;
            }
            break;
        }
        case '3': {
            char digit;
            cout << "������� �����: ";
            cin >> digit;

            if (digit >= '0' && digit <= '9') {
                int code = static_cast<int>(digit);
                cout << "��� �������: " << code << endl;
            }
            else {
                cout << "��������� ������ �� �������� ������" << endl;
            }

            break;
        }
        case '4': {
            cout << "��������� ���������" << endl; }
                break;
        default:
            cout << "������: �������� �����";
        }
        cout << endl;
    } while (number != '4');

    return 0;
}
