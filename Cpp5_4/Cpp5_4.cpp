/*

for (초기화; 조건; 갱신)
    반복할 구문

반복문 진행 순서
1. 초기화
2. 조건 (true -> 3, false -> 탈출)
3. 반복할 구문 수행
4. 갱신
5. 2번으로 돌아감

*/

#include <iostream>

using namespace std;


//1번
/*
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        cout << i << endl;
}
*/

//2번
/*
int main()
{
    int i;
    for (i = 0;;++i)
        cout << i << endl;
}
*/
//무한으로 생성가능


//3번
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


//4번
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

//5번
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
//6번
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

//7번

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

// 두개가 같은값이 나오기에 같다고 생각할 수도있지만 다르다는 점 유의할 것

// 차례대로 마지막 숫자를 입력하면 9, 10 이 나온다