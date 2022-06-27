#include <iostream>

using namespace std;

//1번
/*
int main()
{
	for (; ;)
	{
		cout << "Food" << endl;
		cout << "1) Kimch" << endl;
		cout << "2) BBQ" << endl;
		cout << "3) Chichen" << endl;
		bool needToBreak = false;
		int num;

		cin >> num;

		switch (num)
		{
		case 1:
			cout << "Kimch" << endl;
			needToBreak = true;
			break;

		case 2:
			cout << "BBQ" << endl;
			needToBreak = true;
			break;

		case 3:
			cout << "Chichen" << endl;
			needToBreak = true;
			break;
		}
		if (needToBreak)
			break;
		//switch문 밖에서 입력할 것
	}
}
*/

//2번
/*
int main()
{
	for (; ;)
	{
		cout << "Food" << endl;
		cout << "1) Kimch" << endl;
		cout << "2) BBQ" << endl;
		cout << "3) Chichen" << endl;
		cout << ">" << endl;
		
		int num;
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "Kimch" << endl;
			break;

		case 2:
			cout << "BBQ" << endl;
			break;

		case 3:
			cout << "Chichen" << endl;
			break;

		default:
			continue;
		}
		break;
	}
}
*/

//3번 (팩토리얼 구하기)
/*
int main()
{
	int num;
	cin >> num;

	int total = 1;
	for (; num; num--)
	{
		total *= num;
	}
	cout << total << endl;
}
*/

//4번 (알파벳)
/*
int main()
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		cout << ch << endl;
	}
}
*/

//5번 (피보나치 수열)

// 0, 1, 1, 2, 3, 5, 8, 13, 21
// a(0) = 0, a(1) = 1
// a(n) = a(n - 1) + a(n - 2)

int main()
{
	int num;
	cin >> num;

	if (num == 0)
	{
		cout << 0 << endl;
	}
	else if (num == 1)
	{
		cout << 1 << endl;
	}
	else
	{
		int prevValue = 0;
		int currValue = 1;

		for (int i = 0; i < num - 1; ++i)
		{
			int nextValue = prevValue + currValue;
			prevValue = currValue;
			currValue = nextValue;
		}
		cout << currValue << endl;
	
	}
}