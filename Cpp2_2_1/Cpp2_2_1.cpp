// 16���� (0/1/2/3/4/5/6/7/8/9/a/b/c/d/e/f)


//numeric = �ִ�, �ּڰ� Ȯ��

#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	cout << (int)numeric_limits<uint8_t>::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;
	cout << numeric_limits<uint32_t>::max() << endl;
	cout << numeric_limits<uint64_t>::max() << endl;

	//������ �ִ��� �� �� ���� (8�� ���������� �νĵǼ� �ȳ���) �տ� (int)�� ���̸� ����
}
/*
msb = Most Significant Bit = Sign Bit
�� �� ���ڷ� 1�̸� - 0�̸� ��� ��> ������ �̷��� -0�� ���� �̻��� ���� ź����
�׷��⿡ 1, 0 ���� �ľ��ϴ� ���� �ƴ� 2�� ������ �Է� (�� �ڸ��� +1�� ���ָ� �ȴ�)
sign�� �ִ��� �˱� ���ؼ��� "cout << numeric_limits<int64_t>::max() << endl;" �� �Է����ָ� �ȴ�
�ּڰ��� max ��� min�� �Է��ϸ� �� �� ����
overflow : ǥ���� �� �ִ� �ִ밪���� �� Ŀ���� ���¸� ����

<overflow �ľ��ϱ� ���� �ڵ�>

int32_t num32 = numeric_limits<int32_t>::max;
int32_t num32_ = num32 + 1;

cout << num32 << endl;
cout << num32_ << endl;

num32_�� ���� 0�� ����
*/