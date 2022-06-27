#include<iostream>
#include <array>


using namespace std;

//1번
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
// 위 아래 같은 방식임
*/

//2번

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

//3번
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

//4번
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

//5번
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
//&를 사용해야지 같은 주소가 나오고 사용하지 않으면 복사된 주소만 나옴


//6번

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