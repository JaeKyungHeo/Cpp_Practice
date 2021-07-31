#include <iostream>
using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//	static int numCreatedObj;//static 맴버변수는 외부에서 초기화 해줘야한다./모든 객체가 공유
//	int* ary;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {//생성자
//		numCreatedObj++;//맴버변수 초기화시마다 횟수를 셀수있다.
//		//file open
//		//동적 할당
//		ary = new int[5];
//	}
//	//소멸자/입력파라미터 존재x
//	~Point() {
//		cout << x << ". " << y << " is destructed.." << endl;
//		//file close
//		//할당 해제
//		delete[] ary;
//	}
//	void setXY(int _x, int _y) { x = _x; y = _y; }
//	int getX() const { return x; } //const method: 맴버 변수가 바뀌지 않음
//	int getY() const { return y; }
//	static int getNumCreatedObject() { return numCreatedObj; }//외부로 보내주기 위함
//	// Point class는 operator<< 함수를 친구로 여긴다:
//	friend ostream& operator<<(ostream& cout, const Point& pt);
//	// 친구로 여기면 클래스의 모든 맴버변수, 맴버함수에 접근이 가능해진다.
//	friend class SpyPoint;
//	// A->B를 친구로 여겼음 (B는 A의 private 맴버변수를 사용할 수 있다) ->일반통행
//	// 역은 성립하지 않는다 (A는 B의 private 맴버변수를 사용할 수 있을까?) NO!
//};
//
////static 맴버 변수 최기화
//int Point::numCreatedObj = 0;//먼저 메모리공간 할당해서 대기함.
//
////객체의 입력 type이 const이면 내부에서 const method만 사용가능
////cout << 4;
////cout << 4.4;
////cout << 'a';
////cout << pt;
////오버로딩 - 연산자 이름은 같으나 기능은 제각각
//ostream& operator<<(ostream& cout, const Point& pt) {//return by ref.사용해야 pt1과 endl에 사용되는 cout이 같아진다.
//	cout << pt.getX() << ", " << pt.getY();
//	return cout;
//}
//
//class SpyPoint {
//public:
//	void hack_all_info(const Point& pt) {
//		cout << "hacked by SpyPoint" << endl;
//		cout << "x: " << pt.x << endl;
//		cout << "x: " << pt.y << endl;
//		cout << "numCreatedObj: " << pt.numCreatedObj << endl << endl;
//	}
//};
//
//int main() {
//	Point pt1(10, 20);
//	cout << pt1 << endl;// operator(operator<<(cout, pt1), endl)
//	cout << "numCreatedObj: " << pt1.getNumCreatedObject() << endl;
//
//	Point* pPt = new Point[5]; // pPt = { pPt[0],pPt[1],pPt[2],pPt[3],pPt[4]}
//	cout<< "numCreatedObj: " << pPt[2].getNumCreatedObject() << endl;
//	delete[] pPt;
//	
//	SpyPoint spy;
//	spy.hack_all_info(pt1);
//
//	return 0;
//}