#include <iostream>
#include <array>

using namespace std;


//1번
/*
int main()
{
	array<int, 1000> arr{1,2,3};  // <형태, 사이즈>
	
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[100] << endl;

}

*/


//2번
/*
int main()
{
	array<int, 5> arr{ 1,2,3 };  

	cout << arr.at(0) << endl;
	cout << arr.at(1) << endl;


	cout << "Finish" << endl;
}

//범위가 넘어가면 실행이 되지 않는다. (릴리즈모드에서는 가능)
*/


//3번

/*
int main()
{
	array<int, 5> arr{ 1,2,3 };

	cout << arr.size() << endl;

	int arr0[5] = { 1,2,3 };
	cout << sizeof(arr0) / sizeof(int) << endl;
}

*/

//4번
/*
int main()
{
	array<int, 5> arr{ 1,2,3,4,5 };

	cout << arr.size() << endl;

	cout << arr.front() << endl;
	cout << arr[0] << endl;   // 서로 같은값임 (아래것도 동일)

	cout << arr.back() << endl;
	cout << arr[arr.size() - 1] << endl;

}
//arr의 시작 값과 끝값을 출력해주는 방법
*/

//5번

/*
int main()
{
	array<int, 5> arr0{ 1,2,3,4,5 };
	array<int, 5> arr1{ 5,4,3,2,1 };

	arr0.swap(arr1);   // arr0과 arr1을 바꿀 수 있음
	//arr0 = arr1; 도 가능함

	for (int i = 0; i < arr0.size(); ++i)
		cout << arr0[i];
	cout << endl;

	for (int i = 0; i < arr1.size(); ++i)
		cout << arr1[i];
	cout << endl;
}

*/


//6번

/*
int main()
{
	array<int, 5> arr0{ 1,2,3,4,5 };
	array<int, 5> arr1{ 5,4,3,2,1 };

	
	if (arr0 == arr1)
	{
		cout << "Equal" << endl;
	}

	if (arr0 > arr1)
	{
		cout << ">" << endl;
	}
	if (arr0 < arr1)
	{
		cout << "<" << endl;
	}
}
//arr의 사이즈가 같아야지만 비교 연산자 사용가능
//arr의 첫번째 숫자로 비교함
*/


//7번

/*
int main()
{
	array<int, 5> arr0{ 6,2,3,4,5 };
	array<int, 5> arr1{ 5,4,3,2,1 };

	cout << arr0.data()[0] << endl;
}
*/

//8번

int main()
{
	array<char, 6> arr0{ "abcde" };

}

//f는 넣으면 안됨 (null문자)