// 3-1 입출력 (printf)
// C++가 아닌 c언어에서 출력언어지만 알아두면 좋기에 수업
// 구글에 C++ printf를 검색해서 위키피디아를 보면서 공부하면 도움될 듯?


//#include <cstdio>  //stdio.h 대신 cstdio를 사용함 (앞에는 C언어 뒤에꺼는 C++)
//std : standard io : input, output의 약자


//1번
/*
int main()
{
	printf("Hello %d\n", 10);   //%d, %o 형식지정자임 (뒤에 있는 인자(10)을 출력하게 만든다)
	printf("%d + %d = %i\n", -1, 3, -1 + 3);
	printf("%u + %u = %u\n", -1, 3, -1 + 3);  //u는 unsigned이기에 음수를 나타낼 수 없어서 출력이 될 수 없는 것 (unsigned의 최댓값이 나옴)
	printf("%hhu\n", -1); //hh는 2^8-1를 나옴 unsigned charancter로 만든 것
	
	
	char ch = 'b';
	printf("%c%c\n", 'a', ch);
	
}
*/

//2번
/*
int main()
{
	printf("%f -%f = %lf\n", 2.0, 3.0f, -1.0f); //printf는 소숫점 6자리까지 나옴

	printf("%x + %x = %X\n", 10, 10, 20);  //16진법을 이용한 것으로 나타낸것 (x는 16진법)

	printf("%o + %x = %X\n", 10, 10, 20);  //o는 8진법을 나타냄

	printf("%hhx\n", 255);  //hh를 이용하면 1byte로 바뀜 16진법으로 1byte는 255 만약 256을 넣으면 overflow라서 0이 나옴

	printf("%010d\n", 1);
	printf("%010d\n", -1);
	printf("%010f\n", 1.1);
	printf("%010f\n", -1.1); //전체 자리수를 10자리로 만들어주는 역할

	printf("%010.1f\n", 1.1);  //소숫점 아래 한자리만 나타낸다는 뜻 (소숫점 아래 한자를 나타내지만, 10자리는 맞춤)


	printf("%10d\n", 1); // 여백 포함 10자리로 만드는 법 (오른쪽에 붙어있음)
	printf("%-10d\n", 1); // 여백 포함 10자리로 만드는 법 (왼쪽에 붙어있음), 일반적으로 출력한거랑 차이를 둘 수 없음
	printf("%-10da\n", 1);  // 여백 포함 10자리로 만드는 법 (왼쪽에 붙어있음), 그렇기에 a를 둠으로 여백이 존재한다는 것을 정의

	printf("%%\n");  //  %를 출력하는 방법

}
//printf는 float과 double을 구분하지 않음 (가변인자 같은 경우 printf로 할 때 형변환이 일어나있기 때문에 그런 것)
*/

//3번

#pragma warning(disable: 4996) // 원래 아래에 있는 것이 출력이 안되지만 이를 통해서 출력이 가능해짐
#include <cstdio>
int main()
{
	freopen("output.txt", "w", stdout); //w는 쓰기모드로 열겠다라는 것이며, txt파일로 내보낸다는 뜻
	printf("Hello World!");
}

//콘솔 화면에 출력이 되지 않지만 파일 탐색기를 이용해서 폴더 확인하면 txt파일로 만들어짐