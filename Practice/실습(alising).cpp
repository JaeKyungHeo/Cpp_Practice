#include <iostream>
using namespace std;
/*
//(int a, int b)- pass by value: 함수 입력 인자에 복사를 통해 값을 전달
//(int& a, int&b)- pass by reference: 함수 입력 인자에 참조를 통해 값을 전달(동기화) &붙이기
// - 함수가 다양한 변수를 출력할 수 있게 해준다.
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 10, y = 1000;
	cout << x << '\t' << y << endl;
	swap(x, y);
	cout << x << '\t' << y << endl;//x = 10, y = 1000 변경x 
	
	return 0;
}
*/





/*
// alising: x와 r을 동기화 (r은 x의 reference variable)

int main() {
	int x = 10;
	int& r = x;//단순 복사
	cout << x << '\t' << r << endl;//x = 10, r = 10
	x = 1000;
	cout << x << '\t' << r << endl;//x = 1000, r = 1000

	return 0;
}
*/





/*
// 재귀함수: 함수가 함수 자시자신을 반환에 사용
// - 5! = 5x4x3x2x1x0x-1x-2.....(끝)
// - 2가지 조건 포함: base/ termination conditions
int factorial(int n) {
	//termination condition
	if (n == 0)
		return 1;
	//base condition
	return n * factorial(n - 1);
}

int main() {
	cout << factorial(5) << endl;
	return 0;
}
*/





/*
// global variable: 함수 외부에서 선언, 전역에서 사용가능(공유 변수)
// -유의사항: global, local variable이 우선됨.
int gX;

void print() {//입출력이 없기 때문에 void사용
	gX = 1000;
	cout << "gX in print(): " << gX << endl; //gX =1000
}


int main() {
	int gX;//local variable 이렇게 되면 local variable이 우선시됨.
	gX = 10;
	cout << gX << endl;//gX = 10
	print();
	cout << gX << endl;//gX = 1000
}
*/






/*
//local variable: 함수 안에서 선언, 존재- 함수가 종료되면 사라짐
void increase(int x) {
	x++;
	cout << "x in increase(): " << x << endl;//x = 11
}

int main() {
	int x = 10;
	cout << x << endl;//x = 10
	increase(x);
	cout << x << endl;//x = 11
	return 0;
}
*/






/*
void print(int n = 10) {
	cout << "print(): " << n << endl;//정의랑 선언 동시에 수행
}

int main() {
	print();
	print();
	print();
	print(11);

	return 0;// 나중에 오류 찾는 과정에서 사용할 수도 있음.
}//main함수는 프로그램의 시작과 끝이다. 
*/