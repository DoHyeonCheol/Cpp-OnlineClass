#include <iostream>

using namespace std;


//1번
/*
int main()
{
	bool attendancebook[31];   // bool, bool, .., bool (*31)이라는 뜻 (항상 상수형태로 받아야함)
	attendancebook[0];  // 배열은 독특하게 시작이 1이 아닌 0부터 시작
	attendancebook[30]; // 끝 또한 n-1을 해줘야함 (0~30)까지 총 31개
}
*/

//1번은 개념 설명임 코딩이 아님


//2번
/*
int main()
{
	int arraySize;
	cin >> arraySize;
	cout << arraySize << endl;

	bool attendancebook[arraySize];  //31에 arraySize를 넣으면 오류가 남 (왜? 상수가 아니기 때문에
}
*/

//1번과 같이 개념 설명


//3번
/*
int main()
{
	const int arraySize = 31;
	//arraySize = 1;     // 이것과 같이 선언 후에 바꾸는 것이 불가능 (왜? 상수이기때문에 변하지않는 값임)
	bool attendanceBook[arraySize];
}
*/

// C언어에서는 #define SIZE 31 를 선언하여 매크로 설정하여 가능하기도 함 


//4번
/*
int main()
{
	int nums[3];
	
	nums[0] = 10;
	nums[1] = 11;
	nums[2] = 12;

	//nums[3] = 13;  // 이것과 같이 바운더리를 넘어가면 실행에 문제가 발생함
	//cout << nums[3] << endl;  //릴리즈모드에서는 오류가 안날수도 있음, 하지만 항상 그렇다는 것은 아니다

	cout << nums[0] << endl;
	cout << nums[1] << endl;
	cout << nums[2] << endl;
}
//매 Case마다 초기화 하는 방법
*/


//5번
/*
int main()
{
	int nums[3] = { 1, 2, 3 };

	cout << nums[0] << endl;
	cout << nums[1] << endl;
	cout << nums[2] << endl;
}
*/

// int nums[3]{1,2,3}; <- 이 방법으로도 초기화 가능
// int nums[3]{};  <- 0(기본값)으로 초기화 하는 방법 (모두 다 0으로 초기화)
// int nums[3]{1};  <- 맨 앞에 값만 1로 초기화 되고 나머진 0(기본값으로 초기화)
// 시작부터 초기화 하는 방법


//6번
/*
int main()
{
	int nums[]{ 1, 2 };

	cout << sizeof(nums) << endl; // 인티저 사이즈가 4임 그렇기에 8이 나옴

	// 인티저 갯수를 파악하고 싶으면 sizeof(nums) / sizeof(int) 로 입력하면 된다

}

*/

//7번 (for문)

/*
int main()
{
	int nums[]{ 1,2 };
	int size = sizeof(nums) / sizeof(int);

	for (int i = 0; i < size; ++i)
	{
		cout << nums[i] << endl;
	}

}
*/

//8번 (while문)
/*
int main()
{
	int nums[]{ 1,2 };
	int size = sizeof(nums) / sizeof(int);

	int i = 0;
	while (i < size)
	{
		cout << nums[i] << endl;
		++i;
	}
}
*/
/*
cout << nums[0] << endl;
cout << nums[1] << endl;
cout << nums[2] << endl;
이러한 하드 코딩을 피하기 위한 방법으로 반복문 사용
*/

//9번
/*
int main()
{
	int nums[3];
	int nSize = size(nums);
	cout << nSize << endl;
}
*/
//위 방법으로도 사이즈를 구할 수 있음 std::size( )로도 사이즈를 구할 수 있지만 std는 위에 구문때문에 생략 가능

//10번 (for문)
/*
int main()
{
	int nums0[3] = { 0,1,2 };
	int nums1[3];

	for (int i = 0; i < 3; ++i)
	{
		nums1[i] = nums0[i];
	}

	for (int i = 0; i < 3; ++i)
	{
		cout << nums1[i] << endl;
	}
}
*/

//대입을 하는 방법
//간단하게 nums1 = nums0;을 하면 주소값을 입력하는 것이기 때문에 오류가 남

//11번
/*
int main()
{
	int nums0[3] = { 0,1,2 };
	int nums1[3];

	memcpy(nums1, nums0, sizeof(nums0));
	
	for (int i = 0; i < 3; ++i)
	{
		cout << nums1[i] << endl;
	}
}
*/
//이렇게 해도 대입을 할 수 있음 memcpy에 &를 넣어도 주소값 안넣어도 주소값이라서 둘 다 상관 없음

//12번

/*
int main()
{
	int nums0[3] = { 0,1,2 };
	int nums1[3];

	copy(nums0, nums0 + 3, nums1);  //std::copy임  기본적으로 +3해주기 때문에 +3만 해주는 것

	for (int i = 0; i < 3; ++i)
	{
		cout << nums1[i] << endl;
	}
}
*/


//13번
/*
int main()
{
	int nums[] = { 1,2,3,4,1,2,3,1,2,3,1,2,3 };
	int result = 0;
	
	for(int i = 0; i < size(nums); ++i)
	{
		result ^= nums[i];
	}

	cout << result << endl;
}
*/
// 수열 중 홀수개인거 찾는 방법

//14번

int main()
{
	int nums[] = { 5,4,3,1,7,4,3,5,6,1,2 };

	for (int i = 0; i < size(nums); ++i)
	{
		for (int j = 0; j < size(nums) - 1; ++j)
		{
			if (nums[j] > nums[j + 1])
			{
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size(nums); ++i)
	{
		cout << nums[i] << endl;
	}
}

//5,4,3,1,7,4,3,5,6,1,2
//버블소트란 ? 
//두수를 비교해서 오름차순으로 만드는 것 ( 완벽한 오름차순이 될 때 까지 계속 반복함)