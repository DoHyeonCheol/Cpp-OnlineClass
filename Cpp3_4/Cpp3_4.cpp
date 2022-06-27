// 3-4 cin

#pragma warning(disable: 4996) //7번에서 사용 
#include <iostream>
#include <limits>  // 2번부터 사용

using namespace std;

// 1번
/*
int main()
{
	int a;
	cin >> a; //cin은 scanf와 달리 &를 사용하지 않아도 된다 = scanf("%d", &a);
	//잘못된 값을 넣으면 scanf는 더미 값 cin은 0이 나옴
	cout << a << endl;
	
}
*/

//2번
/*
int main()
{
	char ch;
	cin >> ch;
	cout << ch << endl;

	//cin.ignore(); // 이게 없을 경우 ab를 입력하면 0이 출력됨
	//하지만 이것을 사용함으로써 b를 무시하고 a만을 출력되게 할 수 있음
	//하지만 3개를 입력해도 한개만 무시할 수 있음
	//ignore(숫자); 숫자는 무시할 문자의 수를 입력할 수 있음

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//최댓값을 입력하면 앞에것을 다 무시한다는 것 (무한히 무시한다는 것)
	//\n은 어떤 문자가 나오면 무시한다는 것을 의미함


	cin >> ch;
	cout << ch << endl;
}
*/

//3번
/*
int main()
{
	int num;
	cin >> num;
	cout << num << endl;

	//cout << cin.fail() << endl;
	//성공시 0이 나옴 (실패에 대한 false)
	//실패시 1이 나옴 (실패에 대한 true)
 	
	if (cin.fail())
		cin.clear();

	//cin에서 발생하는 문제 해결 방법
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin >> num;
	cout << num << endl;

	//문자가 들어가면 0이라는 디폴트값이 나옴
}
*/

//4번
/*
int main()
{
	bool b;

	cin.setf(ios_base::boolalpha)
	cin >> b;
	cout << b;

}
*/

//5번
/*
int main()
{
	int num;
	cin.setf(ios_base::hex, ios_base::basefield);
	cin >> num;
	cout << num;

}
*/

//6번
/*
int main()
{
	int num;
	cin >> hex >> num;
	cout << num << endl;
}
*/

//7번

int main()
{
	freopen("input.txt", "r", stdin);

	int num;
	cin >> num;
	cout << num;

	//cin도 stdio에 연관이 된다는 것을 의미
}