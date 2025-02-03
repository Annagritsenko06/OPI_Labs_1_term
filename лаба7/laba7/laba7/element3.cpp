#include "functions.h"

void OutputDigitCode() {

    string symbols;
    cout << "������� �������: ";
    cin >> symbols;

    for (char symbol : symbols) {
        if (isdigit(symbol)) {
            int code = static_cast<int>(symbol);
            std::cout << "��� ������� ��� ����� '" << symbol << "': " << code << std::endl;
        }
        else {
            std::cout << "������ ������ �� �������� ������: '" << symbol << "'" << std::endl;
        }
    }
}