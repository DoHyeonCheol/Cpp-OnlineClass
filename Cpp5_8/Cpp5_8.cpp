#include <iostream>

using namespace std;


//1��
/*
int main()
{
	do
	{
		cout << 1 << endl;
	} while (true);

go:
	cout << 1 << endl;
	goto go;
}
*/
//�ΰ��� ���� ���� ��Ÿ�� goto�� �Ϲ����� ��Ȳ������ ������� �ʱ�

//2��
/*
int main()
{
	int num = 1;
	
	do
	{
		if (num % 3 == 0)
			break;
		if (num % 5 == 0)
			break;
		cout << "Can't divide 3 and 5" << endl;
	} while (false);

	cout << "abcdefg";
	
	
	if (num % 3 == 0)
		goto go;
	if (num % 5 == 0)
		goto go;
	cout << "Can't divide 3 and 5" << endl;
go:
	cout << "abcdefg";

}
*/

//3��(���丮��)
/*
int main()
{
	int num;
	cin >> num;

	int total = 1;
multiply:
	total *= num;
	if (--num >= 1)
		goto multiply;

	cout << total << endl;
}
*/

//4�� (���ĺ�)
/*
int main()
{
	char ch = 'a';

go:
	cout << ch << endl;
	if (++ch <= 'z')
		goto go;
}
*/

//5�� (�Ǻ���ġ ����)

int main()
{
	int num;
	cin >> num;
	
	if (num <= 1)
		cout << num << endl;

	else
	{
		int prevValue = 0;
		int currValue = 1;

	add:
		int nextValue = prevValue + currValue;
		prevValue = currValue;
		currValue = nextValue;

		if (--num - 1)
			goto add;
		cout << currValue << endl;
	}
}

// �ٸ� �ݺ������� �ذ��� �� ������ goto�� ���ϴ� ���� ��õ�Ѵ�