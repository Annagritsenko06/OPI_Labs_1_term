#include<iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x = 1, minus = 0, chislo = 0, min = 0, plus = 0, number, vse = 0;//������������ ���������� �������������� ����
	cout << "����� �������� ��������� ������� ����� 0 " << endl;//�������, ��� ������� ��������� �������������
	while (x != 0)//���� �������� �� ��� ���, ���� �� �� ����� ��� ��������
	{
		cout << "������� �= " << endl;//���� �������� ��������� �
		cin >> x;
		if (x < 0)//���� ����� �������������
		{
			chislo = x;//����������� ���������� �������� �
			min++;//������������ ���������� ������������� ���������
		}
		if (x > 0)//���� ����� �������������
		{
			plus++;//������������ ���������� ������������� ����������
		}
		vse++;//������������ ���������� ���� ��������� �����
	}
	number = vse - (plus - min);//������������ ���������� ����� ���������� �������������� �����
	cout << "��������� ������������� ����� - " << chislo << endl;
	cout << "��� ���������� �����- " << number;
}
