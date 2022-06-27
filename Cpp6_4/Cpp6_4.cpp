//6_3과 비교해서 볼 것 6_3은 C언어 6_4는 C++임을 명시하고 볼 것!

#include <iostream>
#include <string>  // 문자열을 할 때는 켜놓고 시작

using namespace std;


//1번
/*
int main()
{
	string str = "abcd";
	cout << str << endl;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
}
*/


//2번
/*
int main()
{
	string str;
	cin >> str;
	cout << str;
}
*/


//3번
/*
int main()
{
	string str0("abc");
	string str1("abc");

	if (str0 == str1)
		cout << "True";
	else
		cout << "False";
}
*/

//4번
/*
int main()
{
	string str0("abc");
	string str1("abc");

	str0 += str1;   //str0 = str0 + str1; (둘 중 선택해서 사용해도 괜찮음)
	cout << str0 << endl;
}
*/

//5번
/*
int main()
{
	string str0("abc");
	string str1("abc");

	cout << str0.size() << endl;
	cout << str1.length() << endl;


}
//size와 length는 같다

*/


//6번

/*
int main()
{
	string str0 = to_string(123);
	cout << str0 << endl;

	string str1 = to_string(123.3);
	cout << str1 << endl;

	string str2 = to_string(true);
	cout << str2 << endl;
}
*/

//7번
/*
int main()
{
	int num = stoi("1");
	cout << num << endl;

	float num0 = stof("1.1");
	cout << num0 << endl;

}
*/

//8번

int main()
{
	string str;
	getline(cin, str);

	cout << str << endl;
}
