#include <iostream>
#include <cfloat>

using namespace std;

int main()

// 1��

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

// �ƹ��͵� ������� ����
// ���Ƿ� �� ���� ���� �� ������ �ȴ�? �̷� ������ �ϸ� ������ ������ �ȴ� (1000�� ����)
// 1000�� 10���� ��ġ�� ���� ���� (10�� ����)

// 2��

/*
{
	unsigned int num0 = 0b00111111100000000000000000000000; // �ٷ� 2�������� ��Ÿ���� ���� ��� (�� ���ڰ� 1�� �ǹ���)
	float num1;
	memcpy(&num1, &num0, sizeof(num0));

	cout.precision(64);  //��Ȯ���� ���̴� �����
	cout << "num1 " << num1 << endl;


	unsigned int num2 = 0b00111111100000000000000000000001; // 1���� ũ���� ���� ���� ������
	float num3;
	memcpy(&num3, &num2, sizeof(num2));

	cout.precision(64);
	cout << "num3 " << num3 << endl;

	cout << num3 - num1 << endl;
	cout << FLT_EPSILON << endl;


}
*/


// �񱳿��굵 ���������� �÷��� ���̳ʽ����� �ν��� ���ϴ� ��쵵 ���� �̰͵� ������!!!
// 3�� (��, �� �νĸ��ϴ� ���)

// 0011,1111,1000,0000,0000,0000,0000,0000 = 1.0(2)
// 0011,0100,0000,0000,0000,0000,0000,0000 = 1.0(2) * 10^23(2)
// 0011,0011,1000,0000,0000,0000,0000,0000 = 1.0(2) * 10^24(2)

/*
{
	float num0 = 1.0f;

	unsigned int num1 = 0b00110011100000000000000000000000;  //����� 1����
	float num2;
	memcpy(&num2, &num1, sizeof(num1));

	cout.precision(64);
	cout << num0 + num2;

}
//�ּҰ� ^-23������ �װͺ��� ���� ���� ������ ���õ�

*/

// 4�� (�ε��Ҽ����� �ִ�)

/*
{
	
	float num0 = FLT_MAX;

	cout.precision(64);
	cout << num0 << endl;

	float num1;
	unsigned int num2 = 0b01111111111111111111111111111111;  //(�����ΰ� �� �����ְ�, ������ ��Ʈ�� �ϳ��� �����ִٸ� nan)
	memcpy(&num1, &num2, sizeof(num2));         //(�����ΰ� �ϳ��� �����ٸ� ���� ����)
	                                                         //(�����ΰ� ��� 1, �����ΰ� ��� 0�̶�� ���Ѵ�)
	cout << num1 << endl;

}

*/

//5�� (�ε��Ҽ��� �ּڰ�)

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
	

	//������ �κ��� ���� 0�ΰ�� 
	//0000,0000,1000,0000,0000,0000,0000,0000 (�������� �ּڰ��� ��Ÿ������) = 1.0 = 10^-126(2)
    //0000,0000,0000,0000,0000,0000,0000,0001 (1�� ��Ÿ��)  = 1 = 10^-126(2)*10^-23(23) = 10^-149(2) float�� �ּڰ���  (���� 127������ ������)
	

}
