#include <iostream>

// ������ �����ε�
// �Լ� �̸� ��� �������� ��ȣ�� ����� �� �ִ�.
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