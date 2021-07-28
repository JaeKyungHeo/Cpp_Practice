#include <iostream> // cin, cout
#include <cmath> // 함수 library
using namespace std;
/*
void appleprice(int a = 1000); //선언과 구현 합치기 but main함수 위에 적어야함
//default augment는 선언 부분에서만 작성

int main() {
	appleprice();
	appleprice(2000);
	appleprice();
	appleprice();
	appleprice();
	//아무것도 안적으면 처음 정해준값이 들어가고 입력값이 있으면 입력값이 들어감.
	return 0;

}
void appleprice(int a) {
	cout << "Price of apple: " << a << endl;
}
*/

/*
int main() {
	double value = 5.0;
	cout << sqrt(value) << endl;
	cout << exp(value) << endl;
	cout << log(value) << endl; //밑이 e인 자연로그
	cout << cos(value) << endl;
}
*/


/*
//함수만들기 3단계
// 1. 선언(declare) > main 함수 위
int square(int a); //원형(prototype) 값을 무조건적으로 정해줄 필요는 없음. 형태만 잡아주면 ok!


int main() {
	int x;//선언
	x = 5;//초기화
	cout << square(x) << endl; //3. 호출(call)
}
// 2. 정의(define, 구현)기능설정하기! > main 함수 아래(위에 해도 무관하지만 이렇게하면 장점 파악이 쉬움)
int square(int a) {
 return a*a;
 } 
 */


//선언과 정의 변수명 달라도 괜찮다. 정의 쪽은 무조건 설정!
//반복해보기
//선언
/*
int sum(int a, int b);
int subt(int a, int b);
int mult(int a, int b);
float divi(int a, int b); //다시해보기 div로 하면 오류 원래 있던 함수라!
int get_date();//변수값이 없는 함수도 선언이 가능하다.

int main() {
	int x, y;
	x = get_date();
	y = get_date();
	cout << "x = " << x << ", y = " << y << endl;
	cout << "x + y = " << sum(x, y) << endl;
	cout << "x - y = " << subt(x, y) << endl;
	cout << "x * y = " << mult(x, y) << endl;
	cout << "x / y = " << divi(x, y) << endl;

	return 0; //main함수도 함수니 반환값을 지정해줘야함. 받는 쪽은 없지만! 이게 더 명확한 코딩이다.
}

//정의
int sum(int a, int b) {
	return a + b;
}

int subt(int a, int b) {
	return a - b;
}

int mult(int a, int b) {
	return a * b;
}

float divi(int a, int b) {
	return 1.0*a / b; // float = float(??)int 형변환 >1.0곱하기 다른 자료형들을 곱하면 정밀도가 높은 쪽이 나옴
}

int get_date() {
	int a;
	cout << "Enter a number: ";
	cin >> a;//endl은 별도로 필요가 없다. 자동으로 줄바꿈 됨.
	return a;
}
*/