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
        cout << "Выберите вариант использования:" << endl;
        cout << "1 - Определение разницы значений кодов в ASCII буквы в прописном и строчном написании" << endl;
        cout << "2 - Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании" << endl;
        cout << "3 - Вывод в консоль кода символа, соответствующего введенной цифре" << endl;
        cout << "4 - Выход из программы" << endl;
        cout << "Ваш выбор: ";
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
            cout << "Программа завершена." << endl;
            return 0;

        default:
            cout << "Неверный выбор. Пожалуйста, выберите 1, 2, 3 или 4." << endl;
            break;
        }
    }

    return 0;
}