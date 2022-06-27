// 16진수 (0/1/2/3/4/5/6/7/8/9/a/b/c/d/e/f)


//numeric = 최댓값, 최솟값 확인

#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	cout << (int)numeric_limits<uint8_t>::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;
	cout << numeric_limits<uint32_t>::max() << endl;
	cout << numeric_limits<uint64_t>::max() << endl;

	//각각의 최댓값을 알 수 있음 (8은 문자형으로 인식되서 안나옴) 앞에 (int)를 붙이면 나옴
}
/*
msb = Most Significant Bit = Sign Bit
맨 앞 숫자로 1이면 - 0이면 양수 ㅡ> 하지만 이러면 -0과 같이 이상한 것이 탄생함
그렇기에 1, 0 으로 파악하는 것이 아닌 2의 보수를 입력 (각 자리에 +1씩 해주면 된다)
sign의 최댓값을 알기 위해서는 "cout << numeric_limits<int64_t>::max() << endl;" 를 입력해주면 된다
최솟값은 max 대신 min을 입력하면 알 수 있음
overflow : 표현할 수 있는 최대값보다 더 커지는 상태를 말함

<overflow 파악하기 위한 코딩>

int32_t num32 = numeric_limits<int32_t>::max;
int32_t num32_ = num32 + 1;

cout << num32 << endl;
cout << num32_ << endl;

num32_의 값은 0이 나옴
*/