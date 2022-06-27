//문자형에 대해 배움

/*
#include <iostream>

using namespace std;

int main()
*/

//1번
/*
{
	char ch0 = 'a';
	char ch1 = 97;

	cout << "ch0 " << ch0 << endl;
	cout << "ch1 " << ch1 << endl;  // 둘다 a, a로 출력된다

	cout << "ch0 : " << (int)ch0 << endl;   // C언어 형 변환
	cout << "ch0 : " << int(ch0) << endl;   // C++ 형 변환

	cout << (char)97 << endl;
	cout << 97 << endl;

	cout << sizeof(ch0) << endl;
}
*/


//한개의 문자는 ''를 사용하며 문장은 ""을 사용   '' 사이에 문자를 여러개 넣으면 문자가 짤림
//char은 문자를 표현하는 타입으로 1byte로 최대 255(unsigned)      만약 signed라면 127이 최대

//cout을 사용하고 ch를 사용하면 문자열로 생각하기 때문에 위와 같은 결과가 나옴 / int를 사용하면 정수형이 나옴

//2번 (아스키코드에 관한것)


#include <iostream>
#include <limits>

using namespace std;
int main()
/*
{
	cout << numeric_limits<uint8_t>::max() << endl;
	//uint8_t는 unsigned character임 그렇기에 아스키 코드에서 255를 찾지만 없음 (아스키코드는 7비트가 최대이기에 128까지만)
}
*/

//escape sequence : 문자 또는 문자열에 리터럴로 표현할 수 없는 것들을 정의함 (백슬래시(\) + 문자열)
// "Hello World" << endl;   =    "Hello world\n";
// n은 줄띄우기 / t는 띄어쓰기 / b은 위에 줄 맨 뒷글자 지우고 이어서 쓰기 / a는 소리남  

{
	cout << "hello world";
	cout << "\n";
	cout << "hello world";

}