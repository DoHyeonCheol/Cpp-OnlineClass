/*
(���伳��)

Pointer
 - ������ ����Ű�� ����
 - �޸� �ּҸ� ����Ű�� ����
 - �޸� �ּҸ� �����ϰ� �ִ� ���� (���� �߿�)

*/


#include <iostream>

using namespace std;


//1��

/*
int main()
{
	int num = 147;
	int* pointer = &num;

	cout << num << endl;
	cout << pointer << endl; //num�� �ּҸ� ��Ÿ���� ����
}
*/


//2�� (������)
/*
int main()
{
	int num = 147;
	int* pointer = &num;

	cout << num << endl;  // �ּҸ� ������ ���� ������ &num�Է��ϱ�
	cout << *pointer << endl; //pointer �ּҿ� ����� �ּ��� ���� ���� 
}
*/

//3��
/*
int main()
{
	int num = 147;
	int* pointer = &num;

	
	cout << *pointer << endl; 

	*pointer = 100;
	cout << num << endl;
	cout << *pointer << endl;
}
*/

//4��
/*
int main()
{
	int num = 147;
	int* pNum0 = &num;
	int* pNum1 = &num;
	int* pNum2 = pNum0;

	cout << &num << endl;
	cout << pNum0 << endl;
	cout << pNum1 << endl;
	cout << pNum2 << endl;
	cout << endl;

	cout << num << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;
	cout << endl;

	num = 100;

	cout << num << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;
	cout << endl;
}
*/

//5�� (�����ؾ��ϴ� ��)
/*
int main()
{
	int* pNum0 = 0;
	cout << pNum0 << endl;
	cout << *pNum0 << endl;
}

*/

//6��
/*
union Union
{
	int i;
	float f;
	double d;
};


int main()
{
	Union u;

	int* ip = (int*)&u;
	float* fp = (float*)&u;
	double* dp = (double*)&u;

	u.i = 1;

	cout << *ip << endl;
	cout << *fp << endl;
	cout << *dp << endl; // double �� 1�� �Է��ϸ� ���δ� 0�� ���� (��? ���� 8����Ʈ ������ 4����Ʈ��)


}
*/

//7�� (�����Ϳ� ���)

int main()
{
	int num = 10;
	const int* pNum = &num;   // int const *pNum = ~~~ �̷��� �Ǹ� �ּҰ� ������ �Ұ��� ���� (����� ����)

	int num0 = 20;
	pNum = &num0;

	//*pNum = 10; // const ������ �Ұ��� �Ѱ��� (����� ���� �Ұ���)
}