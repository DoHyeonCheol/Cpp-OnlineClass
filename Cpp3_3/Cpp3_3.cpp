// 3-3 cout

#pragma warning(disable: 4996)  //7������ �ʿ�

#include<iostream>
#include<iomanip>  //7������ �ʿ�
using namespace std;


// 1��
/*
int main()
{
	cout << 'a' << endl;
	cout << char(97) << endl;  //char(97)�� �ƽ�Ű�ڵ�� a

}
*/

// 2��
/*
int main()
{
	cout.put('a');
	cout.put('\n');
	cout.write("hello world", 7); //���ڴ� ����ڸ� ����Ұ����� �Է��Ѱ�
	cout.put('\n');
	cout.width(10); //�� �� ������ �󸶳� ���� �����ϴ� ��
	cout.fill('#'); //������ ���� Ȥ�� ����, ��ȣ�� �ִ� ���
	cout << 1;
	cout.put('\n');
	float num = 0.1234567f;
	cout << num << endl;  //7�� �ݿø��Ǽ� 0.123457
	cout.precision(3); // ���е��� ��°�ڸ����� ������ ����
	cout << num << endl;


}
*/

//3��
/*
int main()
{
	cout.setf(ios_base::showpos);   //ios_base�� ����������
	//��µǴ� ���� �տ� +
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	cout << 4 << endl;
	cout.unsetf(ios_base::showpos);
	//��µǴ� ���� �տ� + ��� ����
	cout << 2 << endl;
	cout << 3 << endl;
}
*/

//4��
/*
int main()
{
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::boolalpha); // 0,1�� �ƴ� true, false�� ���
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::left, ios_base::adjustfield);
	//left�� ���� ����, right�� ������ ����, internal�� ��ȣ�� ���ڰ� �� ������ ��
	//adjustfield�� left, right, internal ����
	cout.width(10);
	cout << -10 << 20;
}
*/

//5��
/*
int main()
{
	cout.setf(ios_base::hex, ios_base::basefield);
	//hex�� 16����, dec�� 10����, oct�� 8����
	//basefield�� 8���� 10���� 16���� ��밡��
	cout << 16;
}
*/

//6��
/*
int main()
{
	cout << hex << 16 << endl;
	hex(cout);
	cout << 16 << endl;
}
*/

//7��

int main()
{
	freopen("output.txt", "w", stdout);
	cout << setw(10) << setfill('#') << setprecision(10) << showpos << 1.1f;
}