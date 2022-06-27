#include <iostream>

/*using namespace std;
std::를계속쓰기귀찮기때문에사용하는것으로
이를사용하면아래std::를빼도같은값을도출*/

int main()
{
	/*int x, y, z;
	x = 1;
	y = 2;
	z = 3;*/

	//int x = 1, y = 2, z = 3;

	int x(1), y(2), z(3);

	//3개모두같은결과를도출할수있음

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;

	//endl은줄띄우기기호임
}
