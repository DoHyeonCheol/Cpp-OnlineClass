//불리언형
//true와 false를 표현하면 1byte임

#include <iostream>

using namespace std;


//1번

/*
int main()
{
	bool b0 = 0 == 0;  //true
	bool b1 = 0 < 1;   //true
	bool b2 = 0 > 1;   //false

	cout.setf(ios_base::boolalpha);   // 1,0 대신 true, false로 나타내기 위해 사용한 것
	cout << "b0 : " << b0 << endl;
	cout << "b1 : " << b1 << endl;
	cout << "b2 : " << b2 << endl;

	if (b0)
		cout << "b0" << endl;
	if (b1)
		cout << "b1" << endl;
	if (b2)
		cout << "b2" << endl;   //이때 false면 출력이 되지 않고 true일때만 출력

}
*/

//결과값이 1이면 true , 0이면 false

//2번

int main()
{
	/*
	int itrue = true;
	int ifalse = false;

	cout << itrue << endl;
	cout << ifalse << endl;
	*/

	bool btrue = 100;
	bool bfalse = 0;

	cout << btrue << endl;
	cout << bfalse << endl;
}

// 정수형이 불리언형으로 형 변환이 일어날 때 법칙이 존재
// (정수가 0인지 아닌지를 구분하여 0이면 false 나머지 모든 정수는 true로 출력)
