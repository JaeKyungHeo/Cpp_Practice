#include <iostream>
using namespace std;
// class 만드는 법
// 1) class name{ };
// 2) private:, public: 영역 분할
// 3) member data 만들기 in private:
// 4) method      만들기 in public:
// 5) 초기화 함수(constructor, 생성자)
//   - 생성자 이름은 class 이름과 동일->public
//   - 만약 내가 생성를 만들지 않으면, default 생성자(Point(){})가 자동으로 생성
//   - 만약 내가 생성자를 만들면, default 생성자 자동 생성 안됨
//   - 장점 초기값과 형식을 지정할 수 있다.
//   - default arguement 사용하면 default 생성자 굳이 필요 x

/*
class Point {//클라스 이름 설정
//2가지로 구성 -> 데이터와 함수
private: // 외부(main)에서 접근 불가능, member data
	int x;
	int y;
public:// 외부(main)에서 접근 가능, member function (method)
	Point(int _x, int _y) {//생성자 - 클라스 이름과 동일/ 반환값이 없다. 초기에만 사용됨.
		x = _x;
		y = _y;
	}
	Point() {}//생성자를 만들면 디폴트 생성자도 같이 있어야함.
	//생성자가 아예없으면 자동으로 디폴트 생성자가 만들어지지만 만들면 나머지에 디폴트 생성자 만들어 줘야함.
	int getX() { return x; }//외부로 반환해주는 함수
	int getY() { return y; }
	void setXY(int _x, int _y) {//개체 안에 데이터 설정
		x = _x;//'_' 붙이는 이유 위에 member data와 구분을 주기위함.
		y = _y;
	}
	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};//세미콜론 필수
//장점
//프로그램에게 직관적임
//예외처리가능
//안전장치기능(무결성)

int main() {
	Point pt1,pt2(10,20);//객체 정의되자마자 초기화->생성자의 역할
	//pt1.x = 1;이렇게하면 오류 감추어진 정복 때문에 문제가됨.
	pt1.setXY(1, 2);//'.'은 앞에 이름이 붙은 객체에 속한 method사용
	cout << pt1.getX() << endl;
	cout << pt1.getY() << endl;

	pt1.print();
	pt2.print();

	return 0;
}
*/