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
	�÷����� ���� ����� �ٸ��� �����ֱ� ���� �ϴ� ��
	sizeof�� ����� �� �� �ִ� ������
	����� �ΰ��� �˰��� (��ȣȭ)�� ������� ������ �޶��� ��> ����� �޶�����
    �̷���� int16_t�� ���� ���� ������ �ʿ䰡 ����
	*/

	/*
	unsined int a = 11;�� �����Ϳ� ��ȯ�� �Ͼ ���� ����
	unsined int a = 11u;�� ������ ��
    long int longNum = 0L;�� ������ �� (long�� �����ϰ� ���ָ� �ȴ�)
	L�� ����ϴ� ������ l�� 1�� �򰥸� �� �ֱ� ������
	unsined long long ulongLongNum = 0uLL or 0LLu ���� �ϳ� ���
	*/
}