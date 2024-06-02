
class Test
{
public:
	int a;
	int b;

	// 객체를 생성할대 자동으로 호출되는 함수를 생성자 함수라고 한다. 방식이 총 2개가 있음.
	// 1. int a;
	//    a=0;
	// 선언 먼저 한 뒤에, 초기화해주는 방식
	/* Test()
	{
		a = 0;
		b = 0;
	}*/

	// 2. int a = 0; 
	// 선언과 동시에 초기화하는 방식
	/*Test()
		: a(0)
		, b(0)
	{
	}*/

	// 메모리에서 해제될때 호출되는 함수를 소멸자 함수라고 한다. 
	/*~Test()
	{
		a = 0;
		b = 0;
	}*/
};

int main() {
	Test test;
	test.a = 0;
	test.b = 0;
	return 0;
}