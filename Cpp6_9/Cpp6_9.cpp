#include<iostream>
#include <array>


using namespace std;

//1��
/*
int main()
{
	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	for (int num : arr)
	{
		cout << num << endl;
	}
}
// �� �Ʒ� ���� �����
*/

//2��

/*
int main()
{
	array<int, 5>arr = { 1,2,3,4,5 };

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	for (int num : arr)
	{
		cout << num << endl;
	}
}
*/

//3��
/*
struct Person
{
	float weight;
	float height;
};

int main()
{
	Person persons[] =
	{
		Person{70.f,181.f },
		Person{56.5f,167.3f }
	};

	for (int i = 0; i < 2; ++i)
	{
		cout << persons[i].weight << " " << persons[i].height << endl;
	}

	for (Person person : persons)
	{
		cout << person.weight << " " << person.height << endl;
	}
}
*/

//4��
/*
struct Person
{
	float weight;
	float height;
};

int main()
{
	Person persons[] =
	{
		Person{70.f,181.f },
		Person{56.5f,167.3f }
	};

	for (Person& person : persons)
	{
		person.weight = 0.0f;
	}

	for (Person person : persons)
	{
		cout << person.weight << " " << person.height << endl;
	}
}
*/

//5��
/*
struct Person
{
	float weight;
	float height;
};

int main()
{
	Person persons[] =
	{
		Person{70.f,181.f },
		Person{56.5f,167.3f }
	};

	for (int i = 0; i < 2; ++i)
	{
		cout << &persons[i] << endl;
	}
	cout << endl;

	for (Person& person : persons)
	{
		cout << &person << endl;
	}


}
*/
//&�� ����ؾ��� ���� �ּҰ� ������ ������� ������ ����� �ּҸ� ����


//6��

int main()
{
	int nums[3] = { 1,2,3 };
	for (int i = 0; i < 3; ++i)
	{
		nums[i] = 0;
	}
	for (int num : nums)
	{
		cout << num << endl;
	}
}