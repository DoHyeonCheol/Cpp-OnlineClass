#include <iostream>

using namespace std;


//1번
/*
int main()

#include <cstring>

{
	char str[] = "abc";
	cout << str << endl;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << sizeof(str) << endl;

	cout << int(str[0]) << endl;
	cout << int(str[1]) << endl;
	cout << int(str[2]) << endl;
	cout << int(str[3]) << endl;
	cout << strlen(str) << endl;
}
//마지막에 null문자 (0)이 존재해야지 문자열이 가능함
//strlen 은 문자열의 갯수 (시작부터 몇개인지 도중에 끊길 경우 끊기기 전까지만 인정된다)

*/

//2번
/*
int main()
{
	char str[] = "abc";
	str[3] = 'd';

	cout << str << endl;

	str[3] = '\0';
	cout << str << endl;
}

//[3]은 원래 null문자이지만 그것을 없앴기에 '우연히' null문자를 만날 때까지 출력이 되서 이상한 문자가 포함된 것
//아래 같은 경우 정상출력되게 하는 방법임

*/

//3번
/*
int main()
{
	char str0[] = "hello";
	char str1[] = "hello";

	if (str0 == str1)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	int result = strcmp(str0, str1);
	cout << result << endl;
}

//두개의 값이 다름 ( 왜? 주소값이 나오기 때문에 출력 값은 같을지라도 주소가 다르기 떄문임)
//strcmp 가 같은 값이면 0, 다른 값일 경우 0보다 작거나 큰 값이 나옴

*/

//4번
/*
#pragma warning(disable: 4996 )  //strcpy를 실행하기 위해 필요한 것

int main()
{
	char str0[100];
	char str1[] = "hell";

	strcpy(str0, str1);

	cout << str0 << endl;
}

//VS에서는 바로 실행이 불가능

*/

//5번
/*

#pragma warning(disable: 4996 )  //strcat를 실행하기 위해 필요한 것

int main()
{
	char str0[100] = "hello";
	char str1[] = "world";

	strcat(str0, str1);

	cout << str0 << endl;
}

*/

//6번
/*
int main()
{
	char str0[] = "1";
	int num = atoi(str0);   // atoi는 아스키코드를 의미

	cout << num << endl;

	char str1[] = "1.1";
	float Num = atof(str1);   // atof는 아스키코드를 의미

	cout << Num << endl;
}

//문자열을 정수나 실수로 바꾸는 방법

*/


//7번
/*
#pragma warning(disable: 4996 )  //printf나 scanf의 종류를 실행하기 위해 필요함

int main()
{
	int num = 100;
	char str0[100];

	sprintf(str0, "%d" "%d", num, num);
	cout << str0 << endl;
}

*/

//8번
/*
int main()
{
	char str[6];
	cin >> str;
	cout << str << endl;
}

//null문자를 포함해서 6자리가 넘어가면 오류가 나옴 
//공백이 입력되면 끝난다고 생각하면 된다 그렇기에 a b에서 b를 출력하고 싶으면 밑에 cin cout을 한번씩 더 입력

*/

//9번

int main()
{
	char str[6];

	cin.getline(str, 6);

	cout << str << endl;
}

// 이 방식으로 하면 6자리보다 많이 입력해도 null문자를 포함한 6자리까지 출력되며, 공백에서 끝나는 것도 없음

