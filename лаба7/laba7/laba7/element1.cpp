#include "functions.h"
using namespace std;

void DifferenceOfLatinLetters() {

    string symbols;
    cout << "������� �������: ";
    cin >> symbols;

    for (char symbol : symbols) {
        if (isalpha(symbol) && isascii(symbol)) {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = lowercaseCode - uppercaseCode;
            std::cout << "������� �������� ����� � ASCII ��� ������� '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "������ ������ �� ���������� ��������: '" << symbol << "'" << std::endl;
        }
    }
}