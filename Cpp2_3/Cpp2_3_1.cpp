/*
�ε� �Ҽ���
�Ǽ��� ǥ���� �� �Ҽ����� ��ġ�� ������Ű�� �ʰ� �����ο� �����θ� ��Ÿ���� ǥ��

-118.625???
=  -(2^6 + 2^5 + 2^4 + 2^2 + 2^1 + 2^-1 + 2^-3)
=  -1110110.101 (2����)
=  -1.110110101 * 10^6 (2����)


��ȣ  (1bit)  /  ������  (8bit)  /  ������  (23bit)

decimal to binary  (������ ��ȯ ���� ����Ʈ)
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

	//int�� ���� float�� �Ǽ��� ��Ÿ��

}

/*
�ε��Ҽ����� ��Ÿ���� ��
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

����� (����Ʈ�� ����)
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

�����
3270328320
-118.625

*/

//memcpy�� num1�� �ִ� ���ڸ� num0���� ī��


/*

int main()

{
float num0 = 0.1f;
float num1 = 0.02f * 5.0f;

if(num0 == num1)
cout << "Equal 1" << endl;

}


�����

���� x (num0�� num1�� �ٸ��� ������)  0.1 / 0.02 �� ���� ���ڴ� 2������ ǥ���� �� ���� (�׷��⿡ ������ ���� �ֱ⿡ ���� Ʋ����)


*/

// float�� double�� long double�� �Ȱ��� �������� ��ǻ�Ϳ����� �ٸ��� ������ �׻� ������ ��!!!!!!!!

/*
#include <cfloat>

if (fabsf(num0 - num1) <= FLT+EPSILON) �̷��� �ϸ� ������ ������ �׻� �´� ���� �ƴ϶�� ���� �˰��־�� ��
*/