#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
/*
//중요: Obj는 반드시 x, y 맴버 변수를 가지고 있어야 하며,
//      operator<<를 friend 선언해야 함
//잘 사용하지 않음
template <class Obj>
ostream& operator<<(ostream& cout, const Obj& pt) {
	cout << pt.x << ", " << pt.y;
	return cout;
}
*/


/*
// Iterator: Pointer-like 'object'(container의 element 위치)
// - 주요 함수: begin(v), end(v)
// - 주요 연산자: iter++, *iter1, iter1 != iter2 //웬만하면 이것 3가지만 사용권장
// - 추가 연산자: iter--, iter +=5, iter -=5 등
//                (container 따라 존재유무가 다름)

template <class Iter>
void print(Iter iter_begin, Iter iter_end) {
	for (auto iter = iter_begin; iter != iter_end; iter++)
		cout << *iter << '\t';
	cout << endl;
}

template <class Iter, class T >
int count_value(Iter iter_begin, Iter iter_end, T key_value) {
	int count = 0;
	for (Iter iter = iter_begin; iter != iter_end; iter++)
		if (*iter == key_value) count++;
	return count;
}

int main() {
	// iterator와 template을 합치면: container-generic function
	vector<int> v{ 1,2,3,2,2,2 };
	list<double> l{ 1.1,2.2,3.3,1.1 };
	string sAry[] = { "Apple","Bear","Carror","Apple", "Apple" };

	print(begin(v), end(v));
	print(begin(l), end(l));
	print(begin(sAry), end(sAry));

	cout << count_value(begin(v), end(v), 2) << endl;
	cout << count_value(begin(l), end(l), 1.1) << endl;
	cout << count_value(begin(sAry), end(sAry), "Apple") << endl;

	return 0;
}
*/

//모든 container는 iterator를 가지고 있다.
/*
int main() {
	vector<int> v{ 1,2,3 };

	auto iter_begin = v.begin(); //begin(v) = v.begin() 같음
	auto iter_end = v.end();//마지막 다음 객체를 가르킴
	for (auto iter = iter_begin; iter != iter_end; iter++)
		cout << *iter << '\t';
	cout << endl;

	return 0;
}
*/


/*
int main() {
	int ary[] = { 1,2,3 };
	int* begin = ary;//ary 시작 주소값
	int* end = ary + 3;//끝 주소값

	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';
	cout << endl;

	return 0;
}
*/


/*
// CPoint.h에 선언, 정의 모두 넣어줘야함 cpp랑 구분하면 오류발생
template <class T>
class Point {
private:
	T x;
	T y;
public:
	Point(T _x, T _y);
	void setXY(T _x, T _y);
	T getX() const;
	T getY() const;
	void print() const;
};

//정의부분의 각각의 함수에 모두 template을 선언해줘야함.
template <class T>
Point<T>::Point(T _x, T _y) : x(_x), y(_y) {}

template <class T>
void Point<T>::setXY(T _x, T _y) {
	x = _x;
	y = _y;
}
template <class T>
T Point<T>::getX() const { return x; }
template <class T>
T Point<T>::getY() const { return y; }
template <class T>
void Point<T>::print() const { cout << x << '\t' << y << endl; }



int main() {
	Point<int> pt1(1, 2);//템플릿으로 클라스 만들면 데이터 타입 명시필요
	Point<double> pt2(1.1, 2.2);//vector도 템플릿 객체이다.
	Point<string> pt3("ABC", "XYZ");
	pt1.print();
	pt2.print();
	pt3.print();

	return 0;
}
*/


/*
template <typename T, class U> //T가 변수 ->함수에 대해 generic함
//함수 오버로딩을 간편하게함 //typename = class같은 기능을 함
bool less_than(T x, U y) { return x < y; }

template <class T>
T sum(const vector<T>& v) {
	T result = 0;
	for (T elem : v)
		result += elem;
	return result;
}

int main() {
	cout << less_than(2, 3) << endl;
	cout << less_than(2.2, 2.7) << endl;

	string s1 = "ABC";
	string s2 = "X";
	cout << less_than(s1, s2) << endl;
	cout << less_than(2, 2.7) << endl;

	vector<int> v1{ 1,2,3 };
	vector<double> v2{ 1.1,2.2,3.3 };

	cout << sum(v1) << endl;
	cout << sum(v2) << endl;
	
	return 0;
}
*/