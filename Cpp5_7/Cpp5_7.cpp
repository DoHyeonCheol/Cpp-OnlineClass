#include <iostream>

using namespace std;

//1번
/*
int main()
{
	
	//while문
	int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}

	// do while문
	i = 0;
	do
	{
		cout << i << endl;
		i++;
	} 
	while (i < 10);
}
*/
//2개가 완전히 똑같지 않다 i < 0 으로 한다면 달라진 것을 확인할 수 있음
// 0을 넣으면 while문은 실행이 되지 않지만, do while 같은 경우 조건에 필요 없이 한번은 출력가능

//2번
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

//3번 (팩토리얼)
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

//4번 (알파벳)
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

//5번 (피보나치 수열)

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

// 0과 1이 출력이 안된다 해결방법은?