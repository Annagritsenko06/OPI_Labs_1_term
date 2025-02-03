#include "functions.h"

void DifferenceOfRussianLetters() {

    string symbols;
    cout << "������� �������: ";
    cin >> symbols;

    for (char symbol : symbols) {
        if (symbol >= static_cast<char>('�') && symbol <= static_cast <char>('�')) {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = lowercaseCode - uppercaseCode;
            std::cout << "������� ����� ������ �������� � ��������� � �������� ��������� ��� ������� '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "������: ������ ������, �� ���������� ������� ������ Windows-1251: '" << symbol << "'" << std::endl;
        }
    }
}