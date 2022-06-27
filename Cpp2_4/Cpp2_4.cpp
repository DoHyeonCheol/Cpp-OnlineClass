#include <iostream>
#include <cfloat>

using namespace std;

int main()

// 1번

/*
{
	float num0 = 1.0f;
	float num1 = 0.0f;
	for (int i = 0; i < 1000; i++)
		num1 = num1 + 0.001;
	if (num0 == num1)
		cout << "Equal 0" << endl;
	if (fabsf(num0 - num1) <= FLT_EPSILON)
		cout << "Equal 1" << endl;

}
*/

// 아무것도 실행되지 않음
// 엡실론 값 보다 차가 더 작으면 된다? 이런 식으로 하면 오류가 누적이 된다 (1000번 누적)
// 1000을 10으로 고치면 값이 나옴 (10번 누적)

// 2번

/*
{
	unsigned int num0 = 0b00111111100000000000000000000000; // 바로 2진법으로 나타내기 위한 방법 (저 숫자가 1을 의미함)
	float num1;
	memcpy(&num1, &num0, sizeof(num0));

	cout.precision(64);  //정확도를 높이는 방법임
	cout << "num1 " << num1 << endl;


	unsigned int num2 = 0b00111111100000000000000000000001; // 1보다 크지만 가장 작은 숫자임
	float num3;
	memcpy(&num3, &num2, sizeof(num2));

	cout.precision(64);
	cout << "num3 " << num3 << endl;

	cout << num3 - num1 << endl;
	cout << FLT_EPSILON << endl;


}
*/


// 비교연산도 위험하지만 플러스 마이너스에서 인식을 못하는 경우도 존재 이것도 위험함!!!
// 3번 (플, 마 인식못하는 경우)

// 0011,1111,1000,0000,0000,0000,0000,0000 = 1.0(2)
// 0011,0100,0000,0000,0000,0000,0000,0000 = 1.0(2) * 10^23(2)
// 0011,0011,1000,0000,0000,0000,0000,0000 = 1.0(2) * 10^24(2)

/*
{
	float num0 = 1.0f;

	unsigned int num1 = 0b00110011100000000000000000000000;  //결과값 1나옴
	float num2;
	memcpy(&num2, &num1, sizeof(num1));

	cout.precision(64);
	cout << num0 + num2;

}
//최소가 ^-23이지만 그것보다 작은 값을 넣으면 무시됨

*/

// 4번 (부동소수점의 최댓값)

/*
{
	
	float num0 = FLT_MAX;

	cout.precision(64);
	cout << num0 << endl;

	float num1;
	unsigned int num2 = 0b01111111111111111111111111111111;  //(지수부가 다 켜져있고, 가수부 비트가 하나라도 켜져있다면 nan)
	memcpy(&num1, &num2, sizeof(num2));         //(지수부가 하나라도 꺼진다면 숫자 도출)
	                                                         //(지수부가 모두 1, 가수부가 모두 0이라면 무한대)
	cout << num1 << endl;

}

*/

//5번 (부동소수의 최솟값)

{

	float fltMin = FLT_MIN;
	unsigned int ifltMin;
	memcpy(&ifltMin, &fltMin, sizeof(fltMin));


	float fltTrueMin = FLT_TRUE_MIN;
	unsigned int ifltTrueMin;
	memcpy(&ifltTrueMin, &fltTrueMin, sizeof(fltTrueMin));
	

	cout << ifltMin << endl;
	cout << ifltTrueMin << endl;

	cout << fltMin << endl;
	cout << fltTrueMin << endl; 
	

	//지수부 부분이 전부 0인경우 
	//0000,0000,1000,0000,0000,0000,0000,0000 (지수부의 최솟값을 나타낸거임) = 1.0 = 10^-126(2)
    //0000,0000,0000,0000,0000,0000,0000,0001 (1을 나타냄)  = 1 = 10^-126(2)*10^-23(23) = 10^-149(2) float의 최솟값임  (원래 127이지만 예외임)
	

}
