#include <iostream>

using namespace std;


//1번
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
	while (i < 10)       // 괄호 안에 조건밖에 안들어감
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
// continue는 while과 for이 위와 같이 다르게 사용되지만 break같은 경우는 둘다 같게 사용해도 된다.

//2번 (팩토리얼)
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

//3번 (문자 출력)
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

//4번 (피보나치 수열)

int main()
{
	int num;
	cin >> num;

	if (0 == num)
		cout << 0 << endl;  // 아래 명령어 만으로는 0이 출력이 안되기때문에 조건을 달아줘야함
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