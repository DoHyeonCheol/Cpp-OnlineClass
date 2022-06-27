#include <iostream>

using namespace std;


//1번
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
//두개가 같은 것을 나타냄 goto는 일반적인 상황에서는 사용하지 않기

//2번
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

//3번(팩토리얼)
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

//4번 (알파벳)
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

//5번 (피보나치 수열)

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

// 다른 반복문으로 해결할 수 있으면 goto는 안하는 것을 추천한다