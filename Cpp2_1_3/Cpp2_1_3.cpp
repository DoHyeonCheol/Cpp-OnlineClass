#include<iostream>

using namespace std;

int main()
{
	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;

	cout << sizeof(intNum) << endl;
	cout << sizeof(longNum) << endl;
	cout << sizeof(intPointer) << endl;

	/*
	플랫폼에 따라 사이즈가 다름을 보여주기 위해 하는 것
	sizeof는 사이즈를 알 수 있는 연산자
	사이즈가 민감한 알고리즘 (암호화)는 결과값이 완전히 달라짐 ㅡ> 사이즈가 달라지면
    이런경우 int16_t와 같이 고정 시켜줄 필요가 있음
	*/

	/*
	unsined int a = 11;은 데이터에 변환이 일어날 수도 있음
	unsined int a = 11u;로 적어줄 것
    long int longNum = 0L;로 적어줄 것 (long도 동일하게 해주면 된다)
	L을 사용하는 이유는 l이 1과 헷갈릴 수 있기 때문임
	unsined long long ulongLongNum = 0uLL or 0LLu 둘중 하나 사용
	*/
}