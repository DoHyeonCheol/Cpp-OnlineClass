#include <iostream>

using namespace std;


//1번
/*
#include <cstring>  //name을 소환하기 위해 필요

int main()
{
	struct Person
	{
		float height;
		float weight;
		char name[10];
		short grade;
	};
	
	Person person;
	person.height = 181.5;
	person.weight = 79.6;
	person.grade = 1;
	strcpy_s(person.name, 10, "DoHC");

	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.name << endl;
	cout << person.grade << endl;
}
*/


//2번 ( 1번 방법이 번거로울 때 쓰는 방법 )
/*
#include <cstring>  

int main()
{
	struct Person
	{
		float height;
		float weight;
		char name[10];
		short grade;
	};

	Person person = { 181.5, 79.6, "DoHC", 1 };

	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.name << endl;
	cout << person.grade << endl;
}
*/

//3번
/*
#include <cstring>  

int main()
{
	struct Eyesight
	{
		float left;
		float right;
	};
	struct Person
	{
		float height;
		float weight;
		char name[10];
		short grade;
		Eyesight eyesight;
	};

	Person person = { 181.5f, 79.6f, "DoHC", 1,{1.0f, 1.2f} };

	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.name << endl;
	cout << person.grade << endl;
	cout << person.eyesight.left << endl;
	cout << person.eyesight.right << endl;
}
*/

//4번
/*
#include <cstring>  

int main()
{
	struct Eyesight
	{
		float left;
		float right;
	};
	struct Person
	{
		float height;
		float weight;
		char name[10];
		short grade;
		Eyesight eyesight;
	};

	Person person0 = { 181.5f, 79.6f, "DoHC", 1,{1.2f, 1.1f} };
	Person person1 = person0;

	cout << person1.height << endl;
	cout << person1.weight << endl;
	cout << person1.name << endl;
	cout << person1.grade << endl;
	cout << person1.eyesight.left << endl;
	cout << person1.eyesight.right << endl;
}
*/
//배열에서는 불가능 하지만 struct (구조체)에서는 가능하다


//5번
/*
#include <cstring>  

int main()
{
	struct Eyesight
	{
		float left;
		float right;
	};
	struct Person
	{
		float height;
		float weight;
		char name[10];
		short grade;
		Eyesight eyesight;
	};

	Person persons[5];
	persons[0].grade = 1;  //1

	cout << persons[0].grade << endl;

	Person person = persons[1];
	person.grade = 5;  

	cout << person.grade << endl;  //5
	cout << persons[1].grade << endl;   //5 (예상과 다르게 더미값이 나옴)

	//이유는 &를 사용해서 주소를 파악하면 복사본이기에 다른 값이 나옴
}

*/

//6번

#include <cstring>  

int main()
{
	struct Person
	{
		float height; //4
		float weight; //4
		char name[10]; //10
		short grade; //2
		//20으로 예상

		// 하지만 순서가 바뀌면 size가 달라짐 (아래의 설명)
	};

	cout << sizeof(Person) << endl;

	Person person = { 181.5f, 79.6f, "DoHC", 1 };
}

/*
height, weight, name, grade
  4       4      10      2    = 20
height, grade, weight, name
  4       2  (2)  4     10  (2)    = 24
*/

// struct alignas(16) Person 같은 것도 있다는 것을 알아야함 (sizeof대신 alignof를 사용할 것)