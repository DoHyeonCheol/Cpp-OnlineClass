#include <iostream>

using namespace std;

//1��
/*
int main()
{
	
	//while��
	int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}

	// do while��
	i = 0;
	do
	{
		cout << i << endl;
		i++;
	} 
	while (i < 10);
}
*/
//2���� ������ �Ȱ��� �ʴ� i < 0 ���� �Ѵٸ� �޶��� ���� Ȯ���� �� ����
// 0�� ������ while���� ������ ���� ������, do while ���� ��� ���ǿ� �ʿ� ���� �ѹ��� ��°���

//2��
/*
int main()
{
	
	int num;
	cin >> num;
	do
	{
		if (num % 3 == 0)
			break;
		if (num % 5 == 0)
			break;
		cout << "wow" << endl;
	} 
	while (false);

	cout << "abcd" << endl;
}
*/

//3�� (���丮��)
/*
int main()
{
	int num;
	cin >> num;
	
	int total = 1;

	do
	{
		total *= num;
	} 
	while (--num);
	cout << total << endl;
}
*/

//4�� (���ĺ�)
/*
int main()
{
	char ch = 'a';
	do
	{
		cout << ch << endl;
		ch++;
	} 
	while (ch <= 'z');
}
*/

//5�� (�Ǻ���ġ ����)

// 0, 1, 1, 2, 3, 5, 8, 13, 21

int main()
{
	int num;
	cin >> num;

	if (num <= 1)
	{
		cout << num << endl;
	}

	else
	{
		int prevValue = 0;
		int currValue = 1;
		do {
			int nextValue = prevValue + currValue;
			prevValue = currValue;
			currValue = nextValue;
		} while (--num - 1);

		cout << currValue << endl;
	}
}

// 0�� 1�� ����� �ȵȴ� �ذ�����?