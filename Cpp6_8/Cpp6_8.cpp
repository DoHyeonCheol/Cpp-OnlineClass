#include <iostream>
#include <array>

using namespace std;


//1��
/*
int main()
{
	array<int, 1000> arr{1,2,3};  // <����, ������>
	
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[100] << endl;

}

*/


//2��
/*
int main()
{
	array<int, 5> arr{ 1,2,3 };  

	cout << arr.at(0) << endl;
	cout << arr.at(1) << endl;


	cout << "Finish" << endl;
}

//������ �Ѿ�� ������ ���� �ʴ´�. (�������忡���� ����)
*/


//3��

/*
int main()
{
	array<int, 5> arr{ 1,2,3 };

	cout << arr.size() << endl;

	int arr0[5] = { 1,2,3 };
	cout << sizeof(arr0) / sizeof(int) << endl;
}

*/

//4��
/*
int main()
{
	array<int, 5> arr{ 1,2,3,4,5 };

	cout << arr.size() << endl;

	cout << arr.front() << endl;
	cout << arr[0] << endl;   // ���� �������� (�Ʒ��͵� ����)

	cout << arr.back() << endl;
	cout << arr[arr.size() - 1] << endl;

}
//arr�� ���� ���� ������ ������ִ� ���
*/

//5��

/*
int main()
{
	array<int, 5> arr0{ 1,2,3,4,5 };
	array<int, 5> arr1{ 5,4,3,2,1 };

	arr0.swap(arr1);   // arr0�� arr1�� �ٲ� �� ����
	//arr0 = arr1; �� ������

	for (int i = 0; i < arr0.size(); ++i)
		cout << arr0[i];
	cout << endl;

	for (int i = 0; i < arr1.size(); ++i)
		cout << arr1[i];
	cout << endl;
}

*/


//6��

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
//arr�� ����� ���ƾ����� �� ������ ��밡��
//arr�� ù��° ���ڷ� ����
*/


//7��

/*
int main()
{
	array<int, 5> arr0{ 6,2,3,4,5 };
	array<int, 5> arr1{ 5,4,3,2,1 };

	cout << arr0.data()[0] << endl;
}
*/

//8��

int main()
{
	array<char, 6> arr0{ "abcde" };

}

//f�� ������ �ȵ� (null����)