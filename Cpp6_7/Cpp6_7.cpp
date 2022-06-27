#include <iostream>

using namespace std;




//1번

/*
int main()
{
	// 0 : red, 1 : green, 2 : blue

	int colors[3] = { 255,128,64 };

	const int red = 0;
	const int green = 1;
	const int blue = 2;

	cout << "Red : " << colors[red] << endl;
	cout << "Green : " << colors[green] << endl;
	cout << "Blue : " << colors[blue] << endl;
}
*/

//2번
/*
enum Color
{
	Red, Green, Blue
};

int main()
{
	int colors[3] = { 255,128,64 };

	cout << "Red : " << colors[Red] << endl;
	cout << "Green : " << colors[Green] << endl;
	cout << "Blue : " << colors[Blue] << endl;
}

//1번과 2번 동일한 값이 나옴
*/


//3번
/*
enum Color
{
	Red, Green, Blue
};

struct ColorStruct
{
	int red;
	int green;
	int blue;
};

int main()
{
	int colors[3] = { 255,128,64 };

	cout << "Red : " << colors[Red] << endl;
	cout << "Green : " << colors[Green] << endl;
	cout << "Blue : " << colors[Blue] << endl;

	int avg0 = (colors[Red] + colors[Green] + colors[Blue]) / 3;

	cout << avg0 << endl;

	ColorStruct cs = { 255, 128, 64 };
	int avg1 = (cs.red + cs.green + cs.blue) / 3;

	cout << avg1 << endl;
}
*/


//4번
/*
enum Color
{
	Red, Green, Blue
};

struct ColorStruct
{
	int red;
	int green;
	int blue;
};

int main()
{
	int colors[3] = { 255,128,64 };

	cout << "Red : " << colors[Red] << endl;
	cout << "Green : " << colors[Green] << endl;
	cout << "Blue : " << colors[Blue] << endl;

	int total = 0;
	for (int i = 0; i < 3; ++i)
	{
		total += colors[i];
	}

	int avg0 = (colors[Red] + colors[Green] + colors[Blue]) / 3;
	cout << avg0 << endl;

	ColorStruct cs = { 255, 128, 64 };
	int avg1 = (cs.red + cs.green + cs.blue) / 3;
	cout << avg1 << endl;
}
*/


//5번
/*
enum Color
{
	Red, Green, Blue, Alpha, SIZE
};

struct ColorStruct
{
	int red;
	int green;
	int blue;
	int alpha;
};

int main()
{
	int colors[SIZE] = { 255,128,64 };

	cout << "Red : " << colors[Red] << endl;
	cout << "Green : " << colors[Green] << endl;
	cout << "Blue : " << colors[Blue] << endl;

	int total = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		total += colors[i];
	}

	int avg0 = total / SIZE;
	cout << avg0 << endl;

	ColorStruct cs = { 255, 128, 64 };
	int avg1 = (cs.red + cs.green + cs.blue + cs.alpha) / SIZE;
	cout << avg1 << endl;
}
*/


//6번
/*
enum Color
{
	Red, Green, Blue, Alpha, SIZE
};

struct ColorStruct
{
	int red;
	int green;
	int blue;
	int alpha;
};

int main()
{
	int colors[SIZE] = { 255,128,64 };

	int total = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		total += colors[i];
	}

	int avg0 = total / SIZE;
	cout << avg0 << endl;

	ColorStruct cs = { 255, 128, 64 };
	int avg1 = (cs.red + cs.green + cs.blue + cs.alpha) / SIZE;  // 변수 추가할 때 넣어줘야함
	cout << avg1 << endl;
}
*/

//7번 (범위가 없는 열거형)
/*
enum TextAttribute
{
	Bold = 1,
	Underline = 2,
	Italic = 4,
	strikethrough = 8

};

int main()
{
	int textAttrs = 0;
	textAttrs |= Bold;
	textAttrs |= Underline;

	cout << textAttrs << endl;
	
	if (textAttrs & Italic)
		cout << "Italic" << endl;
}

textAttrs |= TextAttribute::Bold;   (범위지정연산자로 이렇게도 사용가능)

*/

//8번 (범위있는 열거형)
/*
enum struct TextAttribute
{
	Bold = 1,
	Underline = 2,
	Italic = 4,
	strikethrough = 8

};

enum class CircleAttribute
{
	Bold = 1,
};

enum RectAttribute
{
	Bold = 1,
	Underline =2
};

int main()
{
	int sum = Bold + RectAttribute::Underline;
	cout << sum << endl;

	sum = (int)TextAttribute::Bold + (int)TextAttribute::Italic;
	cout << sum << endl;

}
*/

//9번
/*
enum struct TextAttribute
{
	Bold = 1,
	Underline = 2,
	Italic = 4,
	strikethrough = 8

};

enum class CircleAttribute
{
	Bold = 1,
};

enum RectAttribute
{
	Bold = 1,
	Underline = 2
};

int main()
{
	int textAttrs = 0;
	textAttrs |= (int)TextAttribute::Bold;
	textAttrs |= (int)TextAttribute::Underline;

	cout << textAttrs << endl;

	if (textAttrs & (int)TextAttribute::Bold)
		cout << "Bold" << endl;
}
*/

//10번
/*
enum struct Color
{
	Red, Green, Blue, SIZE
};

int main()
{
	int colors[(int)Color::SIZE] = { 255,128,64 };

	colors[(int)Color::Red];
}
*/
//귀찮다고 생각할 수 도 있지만 겹치는 경우가 없기 때문에 더 좋은 결과값을 도출해낼 수 있음


//11번

enum struct Color
{
	Red, Green, Blue, SIZE
};

int main()
{
	Color color = Color::Red;
	if (color == Color::Red)
	{
		cout << "Red" << endl;
	}
	if (color == Color:: Green)
	{
		cout << "Green" << endl;
	}
}