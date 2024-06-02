#include <iostream>

using namespace std;

//구조체
struct People {
	int age;
	int height;
	char name[256];
};

//클래스
class cPeople {
	// 접근제한 지정자(private)가 들어있기때문에, 구조체와 같이 .으로 접근하려면 public을 사용해야함.
	void addAge(/* People* this 포인터 생략..*/) {
		age += 1;
		// (*this).age += 1; this 포인터가 앞에서 생략된 것.

	}
public:
	int age;
	int height;
	char name[256];
};

// 구조체와 클래스의 차이는...
// 구조체는 디폴트 접근제한 지정자가 public:
// 클래스는 디폴트 접근제한 지정자가 private:
// 중요한 데이터는 주로 private로 감춰둠.
// 객체지향의 5대 원칙을 따라 .. 가릴건 가리는 것.


// 다른 함수에서 어떤 변수의 값을 변경하려면, 그 함수에 그 변수의 주솟값을 보내줘야함.
// ex)
// void addAge(People* p1) {
//	(*p1).age += 1;
// {
// 
// addAge(&yongjun); => 이런식. ㅇㅇㅇ(주소값을 나타낼때는 변수명 앞에 and 연산자 활용.)
// 하지만 ? 이 방식은 매우 불편하므로.. 클래스 내부함수로 짜버린다면 ... ? 
// ㄴ 13번째줄 클래스 참고.

// 클래스 내부의 함수에서 어떤 변수의 값을 변경시킬땐, this포인터가 생략된 것.....
// this 포인터는 불변해야하므로 const this로 설정되어있다 .. 

// int* const p = &num2; => 초기화된 주소를 바꿀 수 없다.. 
// const int* p = &num2; => 초기화된 값을 바꿀 수 없다.. 

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