#include "functions.h"
using namespace std;

void DifferenceOfLatinLetters() {

    string symbols;
    cout << "Введите символы: ";
    cin >> symbols;

    for (char symbol : symbols) {
        if (isalpha(symbol) && isascii(symbol)) {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = lowercaseCode - uppercaseCode;
            std::cout << "Разница значений кодов в ASCII для символа '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "Введен символ не латинского алфавита: '" << symbol << "'" << std::endl;
        }
    }
}