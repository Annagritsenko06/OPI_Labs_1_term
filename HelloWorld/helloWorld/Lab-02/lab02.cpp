#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char number;
    setlocale(LC_ALL, "rus");
    do {
        cout << "Выберите вариант использования:" << endl;
        cout << "1 - определение разницы значений кодов в ASCII буквы в прописном и строчном написании" << endl;
        cout << "2 - определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании" << endl;
        cout << "3 - вывод в консоль кода символа, соответствующего введенной цифре" << endl;
        cout << "4 - выход из программы" << endl;
        cout << "Выберите number= ";
        cin >> number;

        switch (number) {
        case '1': {
            char symbol;
            cout << "Введите символ латинского алфавита: ";
            cin >> symbol;

            if (symbol >= 'a' && symbol <= 'z') {
                int uppercaseCode = symbol - 32;
                int lowercaseCode = symbol;
                int diff = uppercaseCode - lowercaseCode;
                cout << "Разница значений кодов: " << diff << endl;
            }
            else if (symbol >= 'A' && symbol <= 'Z') {
                int uppercaseCode = symbol;
                int lowercaseCode = symbol + 32;
                int diff = uppercaseCode - lowercaseCode;
                cout << "Разница значений кодов: " << diff << endl;
            }
            else {
                cout << "Введенный символ не является латинской буквой" << endl;
            }

            break;
        }
        case '2': {
            char symbol;
            cout << "Введите символ русского алфавита: ";
            cin >> symbol;

            if (symbol >= static_cast<int>('А') && symbol <= static_cast <int>('я')) {
                int uppercaseCode = toupper(symbol);
                int lowercaseCode = tolower(symbol);
                int difference = abs(uppercaseCode - lowercaseCode);
                cout << "Разница между кодами символов в прописном и строчном написании: " << difference << endl;
            }
            else {
                cout << "Ошибка: Введен символ, не являющийся русской буквой Windows-1251." << endl;
            }
            break;
        }
        case '3': {
            char digit;
            cout << "Введите цифру: ";
            cin >> digit;

            if (digit >= '0' && digit <= '9') {
                int code = static_cast<int>(digit);
                cout << "Код символа: " << code << endl;
            }
            else {
                cout << "Введенный символ не является цифрой" << endl;
            }

            break;
        }
        case '4': {
            cout << "Программа завершена" << endl; }
                break;
        default:
            cout << "Ошибка: неверный выбор";
        }
        cout << endl;
    } while (number != '4');

    return 0;
}
