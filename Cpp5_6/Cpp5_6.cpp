#include <iostream>

using namespace std;


//1��
/*
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i % 3 == 0)
			continue;
		cout << i << endl;
	}

	int i = 0;
	while (i < 10)       // ��ȣ �ȿ� ���ǹۿ� �ȵ�
	{
		if (i % 3 == 0)
		{
			++i;
			continue;  
		}
		cout << i << endl;
		++i;
	}
}
*/
// continue�� while�� for�� ���� ���� �ٸ��� �������� break���� ���� �Ѵ� ���� ����ص� �ȴ�.

//2�� (���丮��)
/*
int main()
{
	int num;
	cin >> num;
	int total = 1;

	while (num)
	{
		total *= num--;
	}
	cout << total << endl;
}
*/

//3�� (���� ���)
/*
int main()
{
	char ch = 'a';
	while (ch <= 'z')
	{
		cout << ch << endl;
		++ch;
	}
}
*/

//4�� (�Ǻ���ġ ����)

int main()
{
	int num;
	cin >> num;

	if (0 == num)
		cout << 0 << endl;  // �Ʒ� ��ɾ� �����δ� 0�� ����� �ȵǱ⶧���� ������ �޾������
	else
	{
		int prevValue = 0;
		int currValue = 1;
		while (--num)
		{
			int nextValue = prevValue + currValue;
			prevValue = currValue;
			currValue = nextValue;
		}
		cout << currValue << endl;
	}
}