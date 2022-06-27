// 3-3 cout

#pragma warning(disable: 4996)  //7번에서 필요

#include<iostream>
#include<iomanip>  //7번에서 필요
using namespace std;


// 1번
/*
int main()
{
	cout << 'a' << endl;
	cout << char(97) << endl;  //char(97)은 아스키코드로 a

}
*/

// 2번
/*
int main()
{
	cout.put('a');
	cout.put('\n');
	cout.write("hello world", 7); //숫자는 몇글자를 출력할것인지 입력한것
	cout.put('\n');
	cout.width(10); //폭 즉 공백을 얼마나 둘지 선택하는 것
	cout.fill('#'); //공백대신 문자 혹은 숫자, 기호를 넣는 방법
	cout << 1;
	cout.put('\n');
	float num = 0.1234567f;
	cout << num << endl;  //7이 반올림되서 0.123457
	cout.precision(3); // 정밀도로 몇째자리까지 남길지 결정
	cout << num << endl;


}
*/

//3번
/*
int main()
{
	cout.setf(ios_base::showpos);   //ios_base는 범위지정자
	//출력되는 숫자 앞에 +
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	cout << 4 << endl;
	cout.unsetf(ios_base::showpos);
	//출력되는 숫자 앞에 + 기능 끄기
	cout << 2 << endl;
	cout << 3 << endl;
}
*/

//4번
/*
int main()
{
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::boolalpha); // 0,1이 아닌 true, false로 출력
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::left, ios_base::adjustfield);
	//left는 왼쪽 정렬, right는 오른쪽 정렬, internal은 부호랑 숫자가 양 끝으로 감
	//adjustfield는 left, right, internal 존재
	cout.width(10);
	cout << -10 << 20;
}
*/

//5번
/*
int main()
{
	cout.setf(ios_base::hex, ios_base::basefield);
	//hex는 16진수, dec는 10진수, oct는 8진수
	//basefield는 8진수 10진수 16진수 사용가능
	cout << 16;
}
*/

//6번
/*
int main()
{
	cout << hex << 16 << endl;
	hex(cout);
	cout << 16 << endl;
}
*/

//7번

int main()
{
	freopen("output.txt", "w", stdout);
	cout << setw(10) << setfill('#') << setprecision(10) << showpos << 1.1f;
}