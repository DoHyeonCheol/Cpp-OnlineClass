#include <iostream>

using namespace std;

//1번
/*
int main()
{
	int num0 = 1;
	if (num0 == 0)
	{
		cout << "num0 == 0" << endl;
	}
	else if (num0 == 1)
	{
		cout << "num0 == 1" << endl;
	}
}
*/

/*
if (condition)
   statement
else if (condition)
   statement         이것을 위에것 처럼 쓴거
*/

//2번
/*
int main()
{
	int score;
	cin >> score;
	char grade;
	if (score == 100)
	{
		grade = 'A';
	}
	else if (90 <= score && score < 100)
	{
		grade = 'B';
	}
	else if (80 <= score && score < 90)
	{
		grade = 'C';
	}
	else if (70 <= score && score < 80)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	cout << grade << endl;
}
*/

//3번
/*
int main()
{
	int score0 = 90;
	int score1 = 80;

	if (score0 >= 90 && score1 >= 90)
		cout << "pass" << endl;
	else
		cout << "fail0" << endl;
	if (!(score0 >= 90 && score1 >= 90))
		cout << "fail1" << endl;
	if (!(score0 >= 90) || !(score1 >= 90))
		cout << "fail2" << endl;
	if (score0 < 90 || score1 < 90)
		cout << "fail3" << endl;
}
*/

//4번

#pragma warning(disable: 4996)

int main()
{
	int num0, num1;
	if (int count = scanf("%d %d", &num0, &num1))
		printf("count:%d", count);
	else
		printf("fail count:%d", count);
}


//5번 int num0, num1; 을 if문 안에 넣는 방법
/*
#pragma warning(disable: 4996)

int main()
{
	if (int num0, num1; int count = scanf("%d %d", &num0, &num1))
		printf("count:%d", count);

}
//된다는데 나는 버전이 달라서 불가능
*/