// 4-2 ��&���迬����

#include <iostream>
#include <compare> //2������ ���

using namespace std;

// 1��
/*
int main()
{
	int num0 = 10, num1(10);
	if (num0 == num1)
		cout << "num0 == num1" << endl;
}
*/
// "=="�� "="�� �������� ������ ��

//2��

int main()
{
	cout.setf(ios_base::boolalpha);
	cout << ((1 <=> 1) == 0);  // <=> Ư¡ : 0���� �񱳰� ������
	//cout <<is_eq(1 <=> 1); eq Ȥ�� neq (���� �ƴ� �����ʴ�)
	//lt������ �� �۴� lteq �۰ų� ���� gt �� ũ�� gteq ũ�ų� ����
	//cout << typeid(1<=>).name(); Ÿ���� �̸��� ��Ÿ���� ��
	//����� : string ordering ������ ���� / partial ordering ���� ���� �ƴ� ������ ���� �ǹ�
	//cout << ((1<=>1.0) == partial_ordering::equibalent);
	//cout << ((1 <=> 1) == strong_ordering::equal);
	
}
// <=> �����ڴ� what or how�� ��� ��
// �Ϲ� �����ڴ� yes or no�� ��� ��
// ���ʿ� �ִ� ���ڸ� ������ ���ڷ� ���ٶ�� ������ ��

