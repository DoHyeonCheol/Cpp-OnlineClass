#include <iostream>

using namespace std;


//1��
/*
int main()

#include <cstring>

{
	char str[] = "abc";
	cout << str << endl;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << sizeof(str) << endl;

	cout << int(str[0]) << endl;
	cout << int(str[1]) << endl;
	cout << int(str[2]) << endl;
	cout << int(str[3]) << endl;
	cout << strlen(str) << endl;
}
//�������� null���� (0)�� �����ؾ��� ���ڿ��� ������
//strlen �� ���ڿ��� ���� (���ۺ��� ����� ���߿� ���� ��� ����� �������� �����ȴ�)

*/

//2��
/*
int main()
{
	char str[] = "abc";
	str[3] = 'd';

	cout << str << endl;

	str[3] = '\0';
	cout << str << endl;
}

//[3]�� ���� null���������� �װ��� ���ݱ⿡ '�쿬��' null���ڸ� ���� ������ ����� �Ǽ� �̻��� ���ڰ� ���Ե� ��
//�Ʒ� ���� ��� ������µǰ� �ϴ� �����

*/

//3��
/*
int main()
{
	char str0[] = "hello";
	char str1[] = "hello";

	if (str0 == str1)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	int result = strcmp(str0, str1);
	cout << result << endl;
}

//�ΰ��� ���� �ٸ� ( ��? �ּҰ��� ������ ������ ��� ���� �������� �ּҰ� �ٸ��� ������)
//strcmp �� ���� ���̸� 0, �ٸ� ���� ��� 0���� �۰ų� ū ���� ����

*/

//4��
/*
#pragma warning(disable: 4996 )  //strcpy�� �����ϱ� ���� �ʿ��� ��

int main()
{
	char str0[100];
	char str1[] = "hell";

	strcpy(str0, str1);

	cout << str0 << endl;
}

//VS������ �ٷ� ������ �Ұ���

*/

//5��
/*

#pragma warning(disable: 4996 )  //strcat�� �����ϱ� ���� �ʿ��� ��

int main()
{
	char str0[100] = "hello";
	char str1[] = "world";

	strcat(str0, str1);

	cout << str0 << endl;
}

*/

//6��
/*
int main()
{
	char str0[] = "1";
	int num = atoi(str0);   // atoi�� �ƽ�Ű�ڵ带 �ǹ�

	cout << num << endl;

	char str1[] = "1.1";
	float Num = atof(str1);   // atof�� �ƽ�Ű�ڵ带 �ǹ�

	cout << Num << endl;
}

//���ڿ��� ������ �Ǽ��� �ٲٴ� ���

*/


//7��
/*
#pragma warning(disable: 4996 )  //printf�� scanf�� ������ �����ϱ� ���� �ʿ���

int main()
{
	int num = 100;
	char str0[100];

	sprintf(str0, "%d" "%d", num, num);
	cout << str0 << endl;
}

*/

//8��
/*
int main()
{
	char str[6];
	cin >> str;
	cout << str << endl;
}

//null���ڸ� �����ؼ� 6�ڸ��� �Ѿ�� ������ ���� 
//������ �ԷµǸ� �����ٰ� �����ϸ� �ȴ� �׷��⿡ a b���� b�� ����ϰ� ������ �ؿ� cin cout�� �ѹ��� �� �Է�

*/

//9��

int main()
{
	char str[6];

	cin.getline(str, 6);

	cout << str << endl;
}

// �� ������� �ϸ� 6�ڸ����� ���� �Է��ص� null���ڸ� ������ 6�ڸ����� ��µǸ�, ���鿡�� ������ �͵� ����

