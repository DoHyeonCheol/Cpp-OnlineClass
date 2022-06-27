#include<iostream>

using namespace std;

int main()
{
	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	cout << "num0 " << num0 << endl; // 예상 정답 1
	cout << "num1 " << num1 << endl; // 예상 정답 1.5
	cout << "num2 " << num2 << endl; // 예상 정답 0.5
	cout << "num3 " << num3 << endl; // 예상 정답 2.5

	//예상 정답과 다른 이유는 int는 정수를 나타내기에 소수점을 버림
}

/* 
num0 = 11; ㅡ> 11
num1 = 011; ㅡ> 9 (8진법) >>> 8+1
num2 = 0b11; ㅡ> 3 (2진법) >>> 2+1
num3 = 0x11; ㅡ> 17 (16진법) >>> 16+1
*/

/*
short = short int = signed short = signed short int => short int로 16bit
(sined는 부호를 나타낼 수 있음을 의미)
unsigned short = unsigned short int => unsigned short int로 16bit 표시
(unsigned는 부호를 나타낼 수 없음을 의미)

기본 int 같은 경우 32bit 임
long 같은 경우 64bit 임
*/