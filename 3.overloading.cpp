#include <iostream>

// 연산자 오버로딩
// 함수 이름 대신 여러가지 기호를 사용할 수 있다.
struct Vector2 
{
	int x;
	int y;
	Vector2(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	void operator+(Vector2 other)
	{
		return Vector2(x + other.x, y + other.y);
	}
};



int main() {
	Vector2 pos1(2,1);
	Vector2 pos2(2,2);

	ret = pos1.operator+(pos2)
}