/*
부동 소수점
실수를 표현할 때 소수점의 위치를 고정시키지 않고 지수부와 가수부를 나타내어 표현

-118.625???
=  -(2^6 + 2^5 + 2^4 + 2^2 + 2^1 + 2^-1 + 2^-3)
=  -1110110.101 (2진법)
=  -1.110110101 * 10^6 (2진법)


부호  (1bit)  /  지수부  (8bit)  /  가수부  (23bit)

decimal to binary  (진법간 교환 가능 사이트)
*/

#include <iostream>

using namespace std;

int main()
{
	float num0 = 1.5;
	float num1 = num0 * 1.5;
	float num2 = num0 / 2;
	float num3 = num0 - 3;

	cout << "num0 " << num0 << endl; //1.5
	cout << "num1 " << num1 << endl; //2.25
	cout << "num2 " << num2 << endl; //0.75
	cout << "num3 " << num3 << endl; //-1.5

	//int는 정수 float은 실수를 나타냄

}

/*
부동소수점을 나타내는 것
float = 32bit  
double = 64bit
long double = 64~128bit
*/


/*
float num0 = 1.0;
double num1 = 1.0;
long double num2 = 1.0;

cout << sizeof(num0) << endl;
cout << sizeof(num1) << endl;
cout << sizeof(num2) << endl;

cout << sizeof(1.0f) << endl;
cout << sizeof(1.0) << endl;
cout << sizeof(1.0L) << endl;

결과값 (바이트로 나옴)
4
8
8

4
8
8
*/

/*

int main()
{

unsigned int num0;
float num1 = -118.625;
memcpy(&num0, &num1, sizeof(num1));

cout << num0 << endl;
cout << num1 << endl;

}

결과값
3270328320
-118.625

*/

//memcpy는 num1에 있는 숫자를 num0으로 카피


/*

int main()

{
float num0 = 0.1f;
float num1 = 0.02f * 5.0f;

if(num0 == num1)
cout << "Equal 1" << endl;

}


결과값

실행 x (num0과 num1이 다르기 때문에)  0.1 / 0.02 와 같은 숫자는 2진수로 표현할 수 없음 (그렇기에 유사한 값을 넣기에 값이 틀려짐)


*/

// float과 double과 long double은 똑같아 보이지만 컴퓨터에서는 다르기 떄문에 항상 주의할 것!!!!!!!!

/*
#include <cfloat>

if (fabsf(num0 - num1) <= FLT+EPSILON) 이렇게 하면 가능은 하지만 항상 맞는 것은 아니라는 것을 알고있어야 함
*/