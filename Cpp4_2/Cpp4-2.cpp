// 4-2 비교&관계연산자

#include <iostream>
#include <compare> //2번부터 사용

using namespace std;

// 1번
/*
int main()
{
	int num0 = 10, num1(10);
	if (num0 == num1)
		cout << "num0 == num1" << endl;
}
*/
// "=="과 "="의 차이점을 유의할 것

//2번

int main()
{
	cout.setf(ios_base::boolalpha);
	cout << ((1 <=> 1) == 0);  // <=> 특징 : 0과만 비교가 가능함
	//cout <<is_eq(1 <=> 1); eq 혹은 neq (같다 아님 같지않다)
	//lt왼쪽이 더 작다 lteq 작거나 같다 gt 더 크다 gteq 크거나 같다
	//cout << typeid(1<=>).name(); 타입의 이름을 나타내는 것
	//결과값 : string ordering 완전히 같다 / partial ordering 같은 것이 아닌 동등한 값을 의미
	//cout << ((1<=>1.0) == partial_ordering::equibalent);
	//cout << ((1 <=> 1) == strong_ordering::equal);
	
}
// <=> 연산자는 what or how로 물어본 것
// 일반 연산자는 yes or no로 물어본 것
// 왼쪽에 있는 숫자를 오른쪽 숫자로 뺀다라고 생각할 것

