//�������� ���� ���

/*
#include <iostream>

using namespace std;

int main()
*/

//1��
/*
{
	char ch0 = 'a';
	char ch1 = 97;

	cout << "ch0 " << ch0 << endl;
	cout << "ch1 " << ch1 << endl;  // �Ѵ� a, a�� ��µȴ�

	cout << "ch0 : " << (int)ch0 << endl;   // C��� �� ��ȯ
	cout << "ch0 : " << int(ch0) << endl;   // C++ �� ��ȯ

	cout << (char)97 << endl;
	cout << 97 << endl;

	cout << sizeof(ch0) << endl;
}
*/


//�Ѱ��� ���ڴ� ''�� ����ϸ� ������ ""�� ���   '' ���̿� ���ڸ� ������ ������ ���ڰ� ©��
//char�� ���ڸ� ǥ���ϴ� Ÿ������ 1byte�� �ִ� 255(unsigned)      ���� signed��� 127�� �ִ�

//cout�� ����ϰ� ch�� ����ϸ� ���ڿ��� �����ϱ� ������ ���� ���� ����� ���� / int�� ����ϸ� �������� ����

//2�� (�ƽ�Ű�ڵ忡 ���Ѱ�)


#include <iostream>
#include <limits>

using namespace std;
int main()
/*
{
	cout << numeric_limits<uint8_t>::max() << endl;
	//uint8_t�� unsigned character�� �׷��⿡ �ƽ�Ű �ڵ忡�� 255�� ã���� ���� (�ƽ�Ű�ڵ�� 7��Ʈ�� �ִ��̱⿡ 128������)
}
*/

//escape sequence : ���� �Ǵ� ���ڿ��� ���ͷ��� ǥ���� �� ���� �͵��� ������ (�齽����(\) + ���ڿ�)
// "Hello World" << endl;   =    "Hello world\n";
// n�� �ٶ��� / t�� ���� / b�� ���� �� �� �ޱ��� ����� �̾ ���� / a�� �Ҹ���  

{
	cout << "hello world";
	cout << "\n";
	cout << "hello world";

}