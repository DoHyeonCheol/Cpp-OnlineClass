#include <iostream>

using namespace std;

//1번 (공용체 사용 X)
/*
int main()
{
	struct Product
	{
		int idType;
		int idInteger;
		int idchars[10];
	};

	Product product = { 0,12 };

	if (product.idType == 0)
		cout << product.idInteger << endl;
	else
		cout << product.idchars << endl;
}
*/

//2번 공용체

int main()
{
	
	struct Product0
	{
		int idType;
		int idInteger;
		int idchars[10];
	};

	union ID
	{
		int integer;
		char chars[10];
	};

	struct Product1
	{
		int idType;
		ID id;
	};

	Product0 product0 = { 0,12 };

	if (product0.idType == 0)
		cout << product0.idInteger << endl;
	else
		cout << product0.idchars << endl;

	Product1 product1 = { 0,{12} };

	if (product1.idType == 0)
		cout << product1.id.integer << endl;
	else
		cout << product1.id.chars << endl;

	cout << sizeof(product0) << endl;
	cout << sizeof(product1) << endl;

}