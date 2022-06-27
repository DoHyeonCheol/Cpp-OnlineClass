// 3-2 scanf
// C언어에서의 명령어지만 C++에서도 유용

// scanf는 vs에서 보안적인 이유로 막아놓음 

#pragma warning(disable: 4996) //보안적인 이유로 막아놓은 것을 푸는 방법

#include <cstdio>

//1번
/*
int main()
{
	int num;
	char ch;

	//int n = scanf("%d", &num); // 함수 내부의 있는 값에서 외부의 있는 값을 사용하기 위해서 &사용함
	if (scanf("%d", &num)
		)
		printf("%d", num);

}
*/

//2번
/*
int main()
{
	int num0, num1, num2;
	scanf("%d + %d = %d", &num0, &num1, &num2);
	printf("%d, %d, %d", num0, num1, num2);
}
*/

// 틀린부분은 더미값으로 나옴 (틀린 부분 이후에 맞는 부분이 있더라도 틀린 부분부터 더미값 출력)

//3번
/*
int main()
{
	int num0;
	
	scanf("%i", &num0);
	
	printf("%i", num0);
}
*/

// i로 넣을 경우 0x, 010 과 같은 숫자를 넣으면 진법에 맞춰서 출력가능하다

//4번
/*
int main()
{
	char ch;
	scanf("%c", &ch);
	printf("%c\n", ch);
	printf("%i\n", ch);
}
*/

//5번
/*
int main()
{
	float f0;
	double d0, d1;
	scanf("%lf %lf %f", &d0, &d1, &f0);
	printf("%lf %lf %f", d0, d1, f0);
}
*/
// lf와 f를 구분하는 이유는 서로 바이트가 다르기 떄문임
// %o는 8진수 x는 16진법

//6번
/*
int main()
{
	char ch;
	scanf("%c", &ch);
	printf("1, %c\n", ch);

	//fflush(stdin); // 아래의 문제 상황을 해결하는 방법 -> 하지만 실패함 
	//getchar(); // 진짜 문제해결 방법

	while (getchar() != '\n'); //반복문으로 이렇게 사용도 가능하다는 것 반복문은 향후에 수업할 예정

	scanf("%c", &ch);
	printf("2, %c\n", ch);

// 2에는 문자열이 안나옴 하지만 두자리로 입력하면 나옴
}
*/

//7번
int main()
{
	freopen("input.txt", "r", stdin); //r은 읽는다는 것

	int num;
	scanf("%d", &num);
	printf("%d", num);

}

//txt파일 불러오기