#include <iostream>
//GritsenkoAnna2006//
// Windows-1251: 47 69 62 61 64 75 6c 69 6e 61 41 6c 69 6e 61 32 30 30 35 00//
// UTF-8: 47 69 62 61 64 75 6C 69 6E 61 41 6C 69 6E 61 32 30 30 35// 
// UTF-16: 47 00 69 00 62 00 61 00 64 00 75 00 6c 00 69 00 6e 00 61 00 41 00 6c 00 69 00 6e 00 61 00 32 00 30 00 30 00 35 00 00 00// 

//ГриценкоАннаАлександровна2006//
// Windows-1251: c3 e8 e1 e0 e4 f3 eb e8 ed e0 c0 eb e8 ed e0 d4 e0 f0 f5 e0 e4 ee e2 ed e0 32 30 30 35 00//
// UTF-8: D0 93 D0 B8 D0 B1 D0 B0 D0 B4 D1 83 D0 BB D0 B8 D0 BD D0 B0 D0 90 D0 BB D0 B8 D0 BD D0 B0 D0 A4 D0 B0 D1 80 D1 85 D0 B0 D0 B4 D0 BE D0 B2 D0 BD D0 B0 32 30 30 35//
// UTF-16: 13 04 38 04 31 04 30 04 34 04 43 04 3b 04 38 04 3d 04 30 04 10 04 3b 04 38 04 3d 04 30 04 24 04 30 04 40 04 45 04 30 04 34 04 3e 04 32 04 3d 04 30 04 32 00 30 00 30 00 35 00 00 00//

//Гриценко2006Anna//
// Windows-1251: c3 e8 e1 e0 e4 f3 eb e8 ed e0 32 30 30 35 41 6c 69 6e 61 00//
// UTF-8: D0 93 D0 B8 D0 B1 D0 B0 D0 B4 D1 83 D0 BB D0 B8 D0 BD D0 B0 32 30 30 35 41 6C 69 6E 61//
// UTF-16: 13 04 38 04 31 04 30 04 34 04 43 04 3b 04 38 04 3d 04 30 04 32 00 30 00 30 00 35 00 41 00 6c 00 69 00 6e 00 61 00 00 00//

int main()

{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "GritsenkoAnna2006";
	char rfie[] = "ГриценкоАннаАлександровна2006";
	char lr[] = "Гриценко2006Anna";

	wchar_t Lfie[] = L"GritsenkoAnna2006";
	wchar_t Rfie[] = L"ГриценкоАннаАлександровна2006";
	wchar_t LR[] = L"Гриценко2006Anna";

	std::cout << hello << lfie << std::endl;
	return 0;
}