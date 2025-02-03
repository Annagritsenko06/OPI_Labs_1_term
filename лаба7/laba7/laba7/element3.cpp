#include "functions.h"

void OutputDigitCode() {

    string symbols;
    cout << "Введите символы: ";
    cin >> symbols;

    for (char symbol : symbols) {
        if (isdigit(symbol)) {
            int code = static_cast<int>(symbol);
            std::cout << "Код символа для цифры '" << symbol << "': " << code << std::endl;
        }
        else {
            std::cout << "Введен символ не является цифрой: '" << symbol << "'" << std::endl;
        }
    }
}