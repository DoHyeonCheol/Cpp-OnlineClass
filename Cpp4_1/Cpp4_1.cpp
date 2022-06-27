#include<iostream>

using namespace std;

//1번
/*
int main()
{
	cout << 1 + 2 << endl;
	cout << 40 - 32 / 2 << "==" << 24 << endl;
	cout << 4 - 6 + 2 + 8 / 2 / 2 * 2 << "==" << 4;
	//연산자를 사용할 때 우선순위 잘 보고 해야한다!
}
*/

//2번
/*
int main()
{
	int a, b, c;
	a = b = c = 10;
	// 같다가 아니라 할당한다의 개념임
	// 같다는 "==" 기호를 사용해주면 된다

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
*/

//3번
/*
int main()
{
	int a = 10;
	//할당이 아니라 생산자의 하나로 생각 하면된다(초기화)
	cout << -1 << endl;
	//단항연산자로 피연산자를 2개를 취하는 것이 아닌 한개만 사용
	cout << -+-+1; // 1이나옴
	// -- ++는 사용하더라도 오류가 나옴

}
*/

//4번
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

//5번

int main()
{
	int num = 10;
	cout << ++num + num++ << endl; //22
	cout << num << endl;  //12

	printf("%d %d\n", ++num, -+num); // 13,14
	//결과값 14, 14 왜?
	//C++에 지정되지 않았으며, 각 컨파일러마다 결과값이 달라짐
	printf("% d\n", num);   //14
}