#include<iostream>

using namespace std;

int main()
{
	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	cout << "num0 " << num0 << endl; // ���� ���� 1
	cout << "num1 " << num1 << endl; // ���� ���� 1.5
	cout << "num2 " << num2 << endl; // ���� ���� 0.5
	cout << "num3 " << num3 << endl; // ���� ���� 2.5

	//���� ����� �ٸ� ������ int�� ������ ��Ÿ���⿡ �Ҽ����� ����
}

/* 
num0 = 11; ��> 11
num1 = 011; ��> 9 (8����) >>> 8+1
num2 = 0b11; ��> 3 (2����) >>> 2+1
num3 = 0x11; ��> 17 (16����) >>> 16+1
*/

/*
short = short int = signed short = signed short int => short int�� 16bit
(sined�� ��ȣ�� ��Ÿ�� �� ������ �ǹ�)
unsigned short = unsigned short int => unsigned short int�� 16bit ǥ��
(unsigned�� ��ȣ�� ��Ÿ�� �� ������ �ǹ�)

�⺻ int ���� ��� 32bit ��
long ���� ��� 64bit ��
*/