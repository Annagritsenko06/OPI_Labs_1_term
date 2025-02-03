#include <iostream>
#include <cctype>
#include <string>
#include<Windows.h>
#include <cwctype>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "Russian");
   
    const wstring polybiusSquareRU = L"��������������������������������";

    
    const wstring polybiusSquareEN = L"abcdefghiklmnopqrstuvwxyz";

    wchar_t language;
   wcout << L"�������� ���� (r - �������, e - ����������): ";
    wcin >> language;

    language = towlower(language);

    const wstring& polybiusSquare = (language == L'r') ? polybiusSquareRU : polybiusSquareEN;

    wcin.ignore(); // ���������� ������ ����� ������ ����� ����� ������ �����

    wcout << L"������� ����� ��� ������������: ";
    wstring inputText;
    getline(wcin, inputText);

    // ������������ ������
    wcout << L"�������������� �����: ";
    size_t len = inputText.length();
    for (size_t i = 0; i < len; i += 3) {
        if (iswxdigit(inputText[i]) && iswxdigit(inputText[i + 1])) {
            int row = inputText[i] - L'0' - 1;
            int col = inputText[i + 1] - L'0' - 1;
            if (row >= 0 && row < 6 && col >= 0 && col < 6) {
                wcout << polybiusSquare[row * 6 + col];
            }
            else {
                wcout << inputText[i]<< inputText[i + 1];
            }
        }
        else {
            wcout << inputText[i];
        }
    }

    wcout << L'\n';

    return 0;
}
