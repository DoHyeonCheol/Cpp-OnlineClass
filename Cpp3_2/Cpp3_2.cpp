// 3-2 scanf
// C������ ��ɾ����� C++������ ����

// scanf�� vs���� �������� ������ ���Ƴ��� 

#pragma warning(disable: 4996) //�������� ������ ���Ƴ��� ���� Ǫ�� ���

#include <cstdio>

//1��
/*
int main()
{
	int num;
	char ch;

	//int n = scanf("%d", &num); // �Լ� ������ �ִ� ������ �ܺ��� �ִ� ���� ����ϱ� ���ؼ� &�����
	if (scanf("%d", &num)
		)
		printf("%d", num);

}
*/

//2��
/*
int main()
{
	int num0, num1, num2;
	scanf("%d + %d = %d", &num0, &num1, &num2);
	printf("%d, %d, %d", num0, num1, num2);
}
*/

// Ʋ���κ��� ���̰����� ���� (Ʋ�� �κ� ���Ŀ� �´� �κ��� �ִ��� Ʋ�� �κк��� ���̰� ���)

//3��
/*
int main()
{
	int num0;
	
	scanf("%i", &num0);
	
	printf("%i", num0);
}
*/

// i�� ���� ��� 0x, 010 �� ���� ���ڸ� ������ ������ ���缭 ��°����ϴ�

//4��
/*
int main()
{
	char ch;
	scanf("%c", &ch);
	printf("%c\n", ch);
	printf("%i\n", ch);
}
*/

//5��
/*
int main()
{
	float f0;
	double d0, d1;
	scanf("%lf %lf %f", &d0, &d1, &f0);
	printf("%lf %lf %f", d0, d1, f0);
}
*/
// lf�� f�� �����ϴ� ������ ���� ����Ʈ�� �ٸ��� ������
// %o�� 8���� x�� 16����

//6��
/*
int main()
{
	char ch;
	scanf("%c", &ch);
	printf("1, %c\n", ch);

	//fflush(stdin); // �Ʒ��� ���� ��Ȳ�� �ذ��ϴ� ��� -> ������ ������ 
	//getchar(); // ��¥ �����ذ� ���

	while (getchar() != '\n'); //�ݺ������� �̷��� ��뵵 �����ϴٴ� �� �ݺ����� ���Ŀ� ������ ����

	scanf("%c", &ch);
	printf("2, %c\n", ch);

// 2���� ���ڿ��� �ȳ��� ������ ���ڸ��� �Է��ϸ� ����
}
*/

//7��
int main()
{
	freopen("input.txt", "r", stdin); //r�� �д´ٴ� ��

	int num;
	scanf("%d", &num);
	printf("%d", num);

}

//txt���� �ҷ�����