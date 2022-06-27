#include <iostream>

using namespace std;


//1번
/*
int main()
{
	int num = 0;
	if (num == 0)
		cout << "Executed 0" << endl;

	if (num != 0)     //!는 같지 않다를 나타낼때 사용
		cout << "Executed 1" << endl;
}
*/

//참고
/*
int main()
{
	if (condition)            //condition은 표현식(불리언어)
		statement             //statement는 문장 cout << ------이런 느낌 (""사용) 위에꺼 참고할것

	int num;
	1;
}

if (num !=0); 여기에 ";"를 사용하면 안된다 (뒤에 문장 무조건 성립되게 되어있음)

*/

//2번
/*
int main()
{
	int num = 0;
	if (num == 0)   // "="가아니라 "=="를 꼭 사용할 것 (0과 num의 순서를 바꾸는 것도 안됨)
	{
		cout << "wow" << endl;
		cout << "WOW123" << endl;     // if문 한개에 statement를 2개 이상을 묶을 수 있는 방법 (복합문)
	}
}
*/


//3번
/*
int main()
{
	int num0 = 0;
	int num1 = 1;

	if (num0 == 0)
		if (num1 == 1)
			cout << "wow" << endl;
}
*/

//4번 (3번과 같지만 복합구문으로 만드는 방법)
/*
int main()
{
	int num0 = 0;
	int num1 = 1;
	if (num0 == 0)
	{
		cout << "wow0" << endl;    //이렇게 만드는 것의 장점으로는 이것과 같이 중간에 코드를 넣어줄 수 있음
		if (num1 == 1)
			cout << "wow1" << endl;
	}
}
*/

//5번 (&&연산자로 3,4와 같은 값 도출하는 방법)
/*
int main()
{
	int num0 = 0;
	int num1 = 1;

	if (num0 == 0 && num1 == 1)
	{
		cout << "wow1" << endl;
	}
}
//한개만 쓸때도 복합문가능~
*/


//6번

int main()
{
	int num0 = 1;
	bool result = num0 == 0;
	if (result)
		cout << "num0 ==0" << endl;
	else
	{
		cout << "!(num0 == 0)" << endl;
	}

	num0 == 0 ? cout << "num0 == 0" << endl : cout << "!(num0 == 0)" << endl;
	cout << (num0 == 0 ? "num0 == 0" : "!(num0 == 0)") << endl; // 위의 문장과 같은 문장임

	//if 문과의 차이점은 반환한다는 것 
}
