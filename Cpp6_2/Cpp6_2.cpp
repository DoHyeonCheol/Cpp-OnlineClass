#include <iostream>

using namespace std;

//1�� (�迭�� ������ �ִ� ��)
/*
int main()
{
	int matrix[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < 3; ++i)  // 3 ��� size(matrix) ����� �� ����
	{
		for (int j = 0; j < 3; ++j)  // 3 ��� size(matrix[i]) ��� ����
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
*/
// matrix �ڿ� [ ][ ]�� �Է����� ���� ��� �ּҰ� ���´ٴ��� ������ ��

//2�� (����� ����)
/*
int main()
{
	int matrix0[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int matrix1[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int matrix2[3][3] = {};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
				for (int k = 0; k < 3; ++k)
				{
					matrix2[i][j] += matrix0[i][k] * matrix1[k][j];
				}
		}
	}

	for (int i = 0; i < size(matrix2); ++i)  
	{
		for (int j = 0; j < size(matrix2[i]); ++j)  
		{
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}

}
*/

//3��
/*
int main()
{
	int matrix0[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int matrix1[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int matrix2[3][3] = {};

	//memcpy(matrix2, matrix0, sizeof(matrix0));
	//copy(&matrix0[0][0], &matrix0[0][0] +3*3, &matrix2[0][0]);

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			matrix2[i][j] = matrix0[i][j];
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}

}
*/
//��� �����ϴ� ��� (for �̿뵵 �����ϰ� memcpy, std::copy�� ����)


//4��

int matrix[20240][20240] = {};

int main()
{
	int sum = 0;
	for (int i = 0; i < 20240; ++i)
	{
		for (int j = 0; j < 20240; ++j)
		{
			sum += matrix[i][j];
		}
	}
	cout << sum << endl;

}

