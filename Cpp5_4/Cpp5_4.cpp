/*

for (�ʱ�ȭ; ����; ����)
    �ݺ��� ����

�ݺ��� ���� ����
1. �ʱ�ȭ
2. ���� (true -> 3, false -> Ż��)
3. �ݺ��� ���� ����
4. ����
5. 2������ ���ư�

*/

#include <iostream>

using namespace std;


//1��
/*
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        cout << i << endl;
}
*/

//2��
/*
int main()
{
    int i;
    for (i = 0;;++i)
        cout << i << endl;
}
*/
//�������� ��������


//3��
/*
#pragma warning(disable:4996)
int main()
{
    int i;
    int num0, num1;

    for (; int count = scanf("%d %d", &num0, &num1);)
    {
        cout << count << endl;
        while (getchar() != '\n');
    }

}
*/


//4��
/*
int main()
{
    for (int i = 0, j = 0; i < 10 && j < 10; i += 1, j += 2)
    {
        cout << i << " ";
        cout << j << endl;
    }
}
*/

//5��
/*
int main()
{
    for (int i = 0; i < 10; ++i)
    {
        cout << i << endl;
        if (i == 5)
            break;
    }
}
*/
//6��
/*
int main()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i % 3 == 0)
            continue;

        cout << i << endl;
    }
}
*/

//7��

int main()
{
    int i;
    for (int i = 0; i < 10; ++i)
    {
        cout << i << endl;
        if (i == 9)
            break;
    }


    for (i = 0; i < 10; ++i)
    {
        cout << i << endl;
    }

}

// �ΰ��� �������� �����⿡ ���ٰ� ������ ���������� �ٸ��ٴ� �� ������ ��

// ���ʴ�� ������ ���ڸ� �Է��ϸ� 9, 10 �� ���´�