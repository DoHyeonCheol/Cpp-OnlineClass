#include <iostream>

using namespace std;


//1��
/*
#include <cstring>  //name�� ��ȯ�ϱ� ���� �ʿ�

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


//2�� ( 1�� ����� ���ŷο� �� ���� ��� )
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

//3��
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

//4��
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
//�迭������ �Ұ��� ������ struct (����ü)������ �����ϴ�


//5��
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
	cout << persons[1].grade << endl;   //5 (����� �ٸ��� ���̰��� ����)

	//������ &�� ����ؼ� �ּҸ� �ľ��ϸ� ���纻�̱⿡ �ٸ� ���� ����
}

*/

//6��

#include <cstring>  

int main()
{
	struct Person
	{
		float height; //4
		float weight; //4
		char name[10]; //10
		short grade; //2
		//20���� ����

		// ������ ������ �ٲ�� size�� �޶��� (�Ʒ��� ����)
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

// struct alignas(16) Person ���� �͵� �ִٴ� ���� �˾ƾ��� (sizeof��� alignof�� ����� ��)