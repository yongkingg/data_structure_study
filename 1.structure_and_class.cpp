#include <iostream>

using namespace std;

//����ü
struct People {
	int age;
	int height;
	char name[256];
};

//Ŭ����
class cPeople {
	// �������� ������(private)�� ����ֱ⶧����, ����ü�� ���� .���� �����Ϸ��� public�� ����ؾ���.
	void addAge(/* People* this ������ ����..*/) {
		age += 1;
		// (*this).age += 1; this �����Ͱ� �տ��� ������ ��.

	}
public:
	int age;
	int height;
	char name[256];
};

// ����ü�� Ŭ������ ���̴�...
// ����ü�� ����Ʈ �������� �����ڰ� public:
// Ŭ������ ����Ʈ �������� �����ڰ� private:
// �߿��� �����ʹ� �ַ� private�� �����.
// ��ü������ 5�� ��Ģ�� ���� .. ������ ������ ��.


// �ٸ� �Լ����� � ������ ���� �����Ϸ���, �� �Լ��� �� ������ �ּڰ��� ���������.
// ex)
// void addAge(People* p1) {
//	(*p1).age += 1;
// {
// 
// addAge(&yongjun); => �̷���. ������(�ּҰ��� ��Ÿ������ ������ �տ� and ������ Ȱ��.)
// ������ ? �� ����� �ſ� �����ϹǷ�.. Ŭ���� �����Լ��� ¥�����ٸ� ... ? 
// �� 13��°�� Ŭ���� ����.

// Ŭ���� ������ �Լ����� � ������ ���� �����ų��, this�����Ͱ� ������ ��.....
// this �����ʹ� �Һ��ؾ��ϹǷ� const this�� �����Ǿ��ִ� .. 

// int* const p = &num2; => �ʱ�ȭ�� �ּҸ� �ٲ� �� ����.. 
// const int* p = &num2; => �ʱ�ȭ�� ���� �ٲ� �� ����.. 

int main() {
	cPeople yongjun;
	yongjun.age = 23;
	yongjun.height = 181;
	strcpy_s(yongjun.name, "yongjun");

	cPeople nana;
	nana.age = 23;
	nana.height = 163;
	strcpy_s(nana.name, "nana");
	return 0;
}