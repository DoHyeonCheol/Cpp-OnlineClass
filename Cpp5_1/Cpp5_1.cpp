#include <iostream>

using namespace std;


//1��
/*
int main()
{
	int num = 0;
	if (num == 0)
		cout << "Executed 0" << endl;

	if (num != 0)     //!�� ���� �ʴٸ� ��Ÿ���� ���
		cout << "Executed 1" << endl;
}
*/

//����
/*
int main()
{
	if (condition)            //condition�� ǥ����(�Ҹ����)
		statement             //statement�� ���� cout << ------�̷� ���� (""���) ������ �����Ұ�

	int num;
	1;
}

if (num !=0); ���⿡ ";"�� ����ϸ� �ȵȴ� (�ڿ� ���� ������ �����ǰ� �Ǿ�����)

*/

//2��
/*
int main()
{
	int num = 0;
	if (num == 0)   // "="���ƴ϶� "=="�� �� ����� �� (0�� num�� ������ �ٲٴ� �͵� �ȵ�)
	{
		cout << "wow" << endl;
		cout << "WOW123" << endl;     // if�� �Ѱ��� statement�� 2�� �̻��� ���� �� �ִ� ��� (���չ�)
	}
}
*/


//3��
/*
int main()
{
	int num0 = 0;
	int num1 = 1;

	if (num0 == 0)
		if (num1 == 1)
			cout << "wow" << endl;
}
*/

//4�� (3���� ������ ���ձ������� ����� ���)
/*
int main()
{
	int num0 = 0;
	int num1 = 1;
	if (num0 == 0)
	{
		cout << "wow0" << endl;    //�̷��� ����� ���� �������δ� �̰Ͱ� ���� �߰��� �ڵ带 �־��� �� ����
		if (num1 == 1)
			cout << "wow1" << endl;
	}
}
*/

//5�� (&&�����ڷ� 3,4�� ���� �� �����ϴ� ���)
/*
int main()
{
	int num0 = 0;
	int num1 = 1;

	if (num0 == 0 && num1 == 1)
	{
		cout << "wow1" << endl;
	}
}
//�Ѱ��� ������ ���չ�����~
*/


//6��

int main()
{
	int num0 = 1;
	bool result = num0 == 0;
	if (result)
		cout << "num0 ==0" << endl;
	else
	{
		cout << "!(num0 == 0)" << endl;
	}

	num0 == 0 ? cout << "num0 == 0" << endl : cout << "!(num0 == 0)" << endl;
	cout << (num0 == 0 ? "num0 == 0" : "!(num0 == 0)") << endl; // ���� ����� ���� ������

	//if ������ �������� ��ȯ�Ѵٴ� �� 
}
