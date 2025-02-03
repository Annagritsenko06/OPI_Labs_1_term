#include "functions.h"

void DifferenceOfRussianLetters() {

    string symbols;
    cout << "Введите символы: ";
    cin >> symbols;

    for (char symbol : symbols) {
        if (symbol >= static_cast<char>('А') && symbol <= static_cast <char>('я')) {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = lowercaseCode - uppercaseCode;
            std::cout << "Разница между кодами символов в прописном и строчном написании для символа '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "Ошибка: Введен символ, не являющийся русской буквой Windows-1251: '" << symbol << "'" << std::endl;
        }
    }
}