//�Ҹ�����
//true�� false�� ǥ���ϸ� 1byte��

#include <iostream>

using namespace std;


//1��

/*
int main()
{
	bool b0 = 0 == 0;  //true
	bool b1 = 0 < 1;   //true
	bool b2 = 0 > 1;   //false

	cout.setf(ios_base::boolalpha);   // 1,0 ��� true, false�� ��Ÿ���� ���� ����� ��
	cout << "b0 : " << b0 << endl;
	cout << "b1 : " << b1 << endl;
	cout << "b2 : " << b2 << endl;

	if (b0)
		cout << "b0" << endl;
	if (b1)
		cout << "b1" << endl;
	if (b2)
		cout << "b2" << endl;   //�̶� false�� ����� ���� �ʰ� true�϶��� ���

}
*/

//������� 1�̸� true , 0�̸� false

//2��

int main()
{
	/*
	int itrue = true;
	int ifalse = false;

	cout << itrue << endl;
	cout << ifalse << endl;
	*/

	bool btrue = 100;
	bool bfalse = 0;

	cout << btrue << endl;
	cout << bfalse << endl;
}

// �������� �Ҹ��������� �� ��ȯ�� �Ͼ �� ��Ģ�� ����
// (������ 0���� �ƴ����� �����Ͽ� 0�̸� false ������ ��� ������ true�� ���)
