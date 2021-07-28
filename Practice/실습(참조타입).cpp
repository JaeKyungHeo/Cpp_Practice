#include <iostream>

using namespace std;
/*
int sum(int a, int b) {return a + b;}
int mult(int a, int b) { return a * b;}//(함수도 주소값을가지고 있다.->시작 주소값)
//int* px
int evaluate(int(*f)(int, int), int a, int b) {
	return f(a, b);
}

int main() {
	int(*func)(int, int);//함수 포인터 입력 정수 2개 출력 정수1개를 의미 위에 정의함 함수와 형태를 동일시 해줘야함
	//이점 
	func = &sum;//위에 evaluate과 동형이다.
	cout << func(10, 20) << endl;

	func = &mult;
	cout << func(10, 20) << endl;

	cout << evaluate(&sum, 10, 20) << endl;
	cout << evaluate(&mult, 10, 20) << endl;
	return 0;
}
*/




/*
// pass by value: int a = x;int b = y;
// pass by ref. : int& a = x;int& b = y;(a=x,b=y)
// pass by addr.: int* a = &x; int* b = &y;
void swap(int* a, int* b) {//&를 안붙이면 연결이 안됨
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;//격을 맞춰주기
}

int main() {
	int x = 10, y = 20;

	cout << x << '\t' << y << endl;
	swap(&x, &y); //swap(x,y) ->이렇게해도 작동 smart compiler로 인해 가능
	cout << x << '\t' << y << endl;
	
	return 0;
}
*/

/*
// &x: x의 주소값을 반환
// int* px: (int*)는 정수형 변수의 메모리 주소값을 저장하는 data type (px는 주소값을 저장하는 변수)
// -> 포인터형 변수(주소값을 저장하는 변수)
// *px: px에 저장된 주소값으로 jump
int main() {
	int x = 10;
	int* px = &x;//px라는 포인터형 변수에 x의 주소값을 할당


	cout << &x << '\t' << endl;//&를 붙이면 16진수로 저장된 주소값이 나옴
	//x의 주소값이 나온다
	cout << px << '\t' << *px << endl;
	//*를 붙여주면 주소값이 가지고 있는 변수를 반환해줌
	cout << &px << endl;//px의 저장 주소
		return 0;
}
*/
