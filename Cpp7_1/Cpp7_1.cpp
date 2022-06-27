/*
(개념설명)

Pointer
 - 변수를 가르키는 변수
 - 메모리 주소를 가리키는 변수
 - 메모리 주소를 저장하고 있는 변수 (가장 중요)

*/


#include <iostream>

using namespace std;


//1번

/*
int main()
{
	int num = 147;
	int* pointer = &num;

	cout << num << endl;
	cout << pointer << endl; //num의 주소를 나타내는 것임
}
*/


//2번 (역참조)
/*
int main()
{
	int num = 147;
	int* pointer = &num;

	cout << num << endl;  // 주소를 가지고 오고 싶으면 &num입력하기
	cout << *pointer << endl; //pointer 주소에 저장된 주소의 값을 들고옴 
}
*/

//3번
/*
int main()
{
	int num = 147;
	int* pointer = &num;

	
	cout << *pointer << endl; 

	*pointer = 100;
	cout << num << endl;
	cout << *pointer << endl;
}
*/

//4번
/*
int main()
{
	int num = 147;
	int* pNum0 = &num;
	int* pNum1 = &num;
	int* pNum2 = pNum0;

	cout << &num << endl;
	cout << pNum0 << endl;
	cout << pNum1 << endl;
	cout << pNum2 << endl;
	cout << endl;

	cout << num << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;
	cout << endl;

	num = 100;

	cout << num << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;
	cout << endl;
}
*/

//5번 (주의해야하는 것)
/*
int main()
{
	int* pNum0 = 0;
	cout << pNum0 << endl;
	cout << *pNum0 << endl;
}

*/

//6번
/*
union Union
{
	int i;
	float f;
	double d;
};


int main()
{
	Union u;

	int* ip = (int*)&u;
	float* fp = (float*)&u;
	double* dp = (double*)&u;

	u.i = 1;

	cout << *ip << endl;
	cout << *fp << endl;
	cout << *dp << endl; // double 에 1을 입력하면 전부다 0이 나옴 (왜? 더블 8바이트 나머진 4바이트임)


}
*/

//7번 (포인터에 상수)

int main()
{
	int num = 10;
	const int* pNum = &num;   // int const *pNum = ~~~ 이렇게 되면 주소값 변경이 불가능 해짐 (상수는 가능)

	int num0 = 20;
	pNum = &num0;

	//*pNum = 10; // const 때문에 불가능 한거임 (상수값 변경 불가능)
}