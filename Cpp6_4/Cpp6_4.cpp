//6_3�� ���ؼ� �� �� 6_3�� C��� 6_4�� C++���� ����ϰ� �� ��!

#include <iostream>
#include <string>  // ���ڿ��� �� ���� �ѳ��� ����

using namespace std;


//1��
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


//2��
/*
int main()
{
	string str;
	cin >> str;
	cout << str;
}
*/


//3��
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

//4��
/*
int main()
{
	string str0("abc");
	string str1("abc");

	str0 += str1;   //str0 = str0 + str1; (�� �� �����ؼ� ����ص� ������)
	cout << str0 << endl;
}
*/

//5��
/*
int main()
{
	string str0("abc");
	string str1("abc");

	cout << str0.size() << endl;
	cout << str1.length() << endl;


}
//size�� length�� ����

*/


//6��

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

//7��
/*
int main()
{
	int num = stoi("1");
	cout << num << endl;

	float num0 = stof("1.1");
	cout << num0 << endl;

}
*/

//8��

int main()
{
	string str;
	getline(cin, str);

	cout << str << endl;
}
