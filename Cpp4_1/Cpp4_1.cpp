#include<iostream>

using namespace std;

//1��
/*
int main()
{
	cout << 1 + 2 << endl;
	cout << 40 - 32 / 2 << "==" << 24 << endl;
	cout << 4 - 6 + 2 + 8 / 2 / 2 * 2 << "==" << 4;
	//�����ڸ� ����� �� �켱���� �� ���� �ؾ��Ѵ�!
}
*/

//2��
/*
int main()
{
	int a, b, c;
	a = b = c = 10;
	// ���ٰ� �ƴ϶� �Ҵ��Ѵ��� ������
	// ���ٴ� "==" ��ȣ�� ������ָ� �ȴ�

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
*/

//3��
/*
int main()
{
	int a = 10;
	//�Ҵ��� �ƴ϶� �������� �ϳ��� ���� �ϸ�ȴ�(�ʱ�ȭ)
	cout << -1 << endl;
	//���׿����ڷ� �ǿ����ڸ� 2���� ���ϴ� ���� �ƴ� �Ѱ��� ���
	cout << -+-+1; // 1�̳���
	// -- ++�� ����ϴ��� ������ ����

}
*/

//4��
/*
int main()
{
	int num = 10;
	num += 5;
	cout << num << endl;

	num -= 5;
	cout << num << endl;

	num *= 5;
	cout << num << endl;

	num /= 5;
	cout << num << endl;

	num %= 5;
	cout << num << endl;
}
*/

//5��

int main()
{
	int num = 10;
	cout << ++num + num++ << endl; //22
	cout << num << endl;  //12

	printf("%d %d\n", ++num, -+num); // 13,14
	//����� 14, 14 ��?
	//C++�� �������� �ʾ�����, �� �����Ϸ����� ������� �޶���
	printf("% d\n", num);   //14
}