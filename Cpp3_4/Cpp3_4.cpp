// 3-4 cin

#pragma warning(disable: 4996) //7������ ��� 
#include <iostream>
#include <limits>  // 2������ ���

using namespace std;

// 1��
/*
int main()
{
	int a;
	cin >> a; //cin�� scanf�� �޸� &�� ������� �ʾƵ� �ȴ� = scanf("%d", &a);
	//�߸��� ���� ������ scanf�� ���� �� cin�� 0�� ����
	cout << a << endl;
	
}
*/

//2��
/*
int main()
{
	char ch;
	cin >> ch;
	cout << ch << endl;

	//cin.ignore(); // �̰� ���� ��� ab�� �Է��ϸ� 0�� ��µ�
	//������ �̰��� ��������ν� b�� �����ϰ� a���� ��µǰ� �� �� ����
	//������ 3���� �Է��ص� �Ѱ��� ������ �� ����
	//ignore(����); ���ڴ� ������ ������ ���� �Է��� �� ����

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//�ִ��� �Է��ϸ� �տ����� �� �����Ѵٴ� �� (������ �����Ѵٴ� ��)
	//\n�� � ���ڰ� ������ �����Ѵٴ� ���� �ǹ���


	cin >> ch;
	cout << ch << endl;
}
*/

//3��
/*
int main()
{
	int num;
	cin >> num;
	cout << num << endl;

	//cout << cin.fail() << endl;
	//������ 0�� ���� (���п� ���� false)
	//���н� 1�� ���� (���п� ���� true)
 	
	if (cin.fail())
		cin.clear();

	//cin���� �߻��ϴ� ���� �ذ� ���
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin >> num;
	cout << num << endl;

	//���ڰ� ���� 0�̶�� ����Ʈ���� ����
}
*/

//4��
/*
int main()
{
	bool b;

	cin.setf(ios_base::boolalpha)
	cin >> b;
	cout << b;

}
*/

//5��
/*
int main()
{
	int num;
	cin.setf(ios_base::hex, ios_base::basefield);
	cin >> num;
	cout << num;

}
*/

//6��
/*
int main()
{
	int num;
	cin >> hex >> num;
	cout << num << endl;
}
*/

//7��

int main()
{
	freopen("input.txt", "r", stdin);

	int num;
	cin >> num;
	cout << num;

	//cin�� stdio�� ������ �ȴٴ� ���� �ǹ�
}