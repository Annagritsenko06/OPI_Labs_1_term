#include <iostream>
#include <cctype>  
#include <string>
#include<Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "Russian");
        const string polybiusSquareRU = "�������������������������������� ";

        const string polybiusSquareEN = "abcdefghiklmnopqrstuvwxyz ";

        char language;
        cout << "�������� ���� (r - �������, e - ����������): ";
        cin >> language;

        language = tolower(language);

        const string& polybiusSquare = (language == 'r') ? polybiusSquareRU : polybiusSquareEN;

        cin.ignore(); 

        cout << "������� ����� ��� ����������: ";
        string inputText;
        getline(std::cin, inputText);

        
        cout << "������������� �����: ";
        for (char ch : inputText) {
            ch = tolower(ch);  
            size_t index = polybiusSquare.find(ch);
            if (index != std::string::npos) {
                cout  << (index / 6) + 1 << (index % 6) + 1 << ' ';
            }
            else {
                cout << ch;  
            }
        }

        cout << '\n';

        return 0;
    }
