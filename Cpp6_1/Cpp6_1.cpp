#include <iostream>

using namespace std;


//1��
/*
int main()
{
	bool attendancebook[31];   // bool, bool, .., bool (*31)�̶�� �� (�׻� ������·� �޾ƾ���)
	attendancebook[0];  // �迭�� ��Ư�ϰ� ������ 1�� �ƴ� 0���� ����
	attendancebook[30]; // �� ���� n-1�� ������� (0~30)���� �� 31��
}
*/

//1���� ���� ������ �ڵ��� �ƴ�


//2��
/*
int main()
{
	int arraySize;
	cin >> arraySize;
	cout << arraySize << endl;

	bool attendancebook[arraySize];  //31�� arraySize�� ������ ������ �� (��? ����� �ƴϱ� ������
}
*/

//1���� ���� ���� ����


//3��
/*
int main()
{
	const int arraySize = 31;
	//arraySize = 1;     // �̰Ͱ� ���� ���� �Ŀ� �ٲٴ� ���� �Ұ��� (��? ����̱⶧���� �������ʴ� ����)
	bool attendanceBook[arraySize];
}
*/

// C������ #define SIZE 31 �� �����Ͽ� ��ũ�� �����Ͽ� �����ϱ⵵ �� 


//4��
/*
int main()
{
	int nums[3];
	
	nums[0] = 10;
	nums[1] = 11;
	nums[2] = 12;

	//nums[3] = 13;  // �̰Ͱ� ���� �ٿ������ �Ѿ�� ���࿡ ������ �߻���
	//cout << nums[3] << endl;  //�������忡���� ������ �ȳ����� ����, ������ �׻� �׷��ٴ� ���� �ƴϴ�

	cout << nums[0] << endl;
	cout << nums[1] << endl;
	cout << nums[2] << endl;
}
//�� Case���� �ʱ�ȭ �ϴ� ���
*/


//5��
/*
int main()
{
	int nums[3] = { 1, 2, 3 };

	cout << nums[0] << endl;
	cout << nums[1] << endl;
	cout << nums[2] << endl;
}
*/

// int nums[3]{1,2,3}; <- �� ������ε� �ʱ�ȭ ����
// int nums[3]{};  <- 0(�⺻��)���� �ʱ�ȭ �ϴ� ��� (��� �� 0���� �ʱ�ȭ)
// int nums[3]{1};  <- �� �տ� ���� 1�� �ʱ�ȭ �ǰ� ������ 0(�⺻������ �ʱ�ȭ)
// ���ۺ��� �ʱ�ȭ �ϴ� ���


//6��
/*
int main()
{
	int nums[]{ 1, 2 };

	cout << sizeof(nums) << endl; // ��Ƽ�� ����� 4�� �׷��⿡ 8�� ����

	// ��Ƽ�� ������ �ľ��ϰ� ������ sizeof(nums) / sizeof(int) �� �Է��ϸ� �ȴ�

}

*/

//7�� (for��)

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

//8�� (while��)
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
�̷��� �ϵ� �ڵ��� ���ϱ� ���� ������� �ݺ��� ���
*/

//9��
/*
int main()
{
	int nums[3];
	int nSize = size(nums);
	cout << nSize << endl;
}
*/
//�� ������ε� ����� ���� �� ���� std::size( )�ε� ����� ���� �� ������ std�� ���� ���������� ���� ����

//10�� (for��)
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

//������ �ϴ� ���
//�����ϰ� nums1 = nums0;�� �ϸ� �ּҰ��� �Է��ϴ� ���̱� ������ ������ ��

//11��
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
//�̷��� �ص� ������ �� �� ���� memcpy�� &�� �־ �ּҰ� �ȳ־ �ּҰ��̶� �� �� ��� ����

//12��

/*
int main()
{
	int nums0[3] = { 0,1,2 };
	int nums1[3];

	copy(nums0, nums0 + 3, nums1);  //std::copy��  �⺻������ +3���ֱ� ������ +3�� ���ִ� ��

	for (int i = 0; i < 3; ++i)
	{
		cout << nums1[i] << endl;
	}
}
*/


//13��
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
// ���� �� Ȧ�����ΰ� ã�� ���

//14��

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
//�����Ʈ�� ? 
//�μ��� ���ؼ� ������������ ����� �� ( �Ϻ��� ���������� �� �� ���� ��� �ݺ���)