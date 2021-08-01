#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
/*
//�߿�: Obj�� �ݵ�� x, y �ɹ� ������ ������ �־�� �ϸ�,
//      operator<<�� friend �����ؾ� ��
//�� ������� ����
template <class Obj>
ostream& operator<<(ostream& cout, const Obj& pt) {
	cout << pt.x << ", " << pt.y;
	return cout;
}
*/


/*
// Iterator: Pointer-like 'object'(container�� element ��ġ)
// - �ֿ� �Լ�: begin(v), end(v)
// - �ֿ� ������: iter++, *iter1, iter1 != iter2 //�����ϸ� �̰� 3������ ������
// - �߰� ������: iter--, iter +=5, iter -=5 ��
//                (container ���� ���������� �ٸ�)

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
	// iterator�� template�� ��ġ��: container-generic function
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

//��� container�� iterator�� ������ �ִ�.
/*
int main() {
	vector<int> v{ 1,2,3 };

	auto iter_begin = v.begin(); //begin(v) = v.begin() ����
	auto iter_end = v.end();//������ ���� ��ü�� ����Ŵ
	for (auto iter = iter_begin; iter != iter_end; iter++)
		cout << *iter << '\t';
	cout << endl;

	return 0;
}
*/


/*
int main() {
	int ary[] = { 1,2,3 };
	int* begin = ary;//ary ���� �ּҰ�
	int* end = ary + 3;//�� �ּҰ�

	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';
	cout << endl;

	return 0;
}
*/


/*
// CPoint.h�� ����, ���� ��� �־������ cpp�� �����ϸ� �����߻�
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

//���Ǻκ��� ������ �Լ��� ��� template�� �����������.
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
	Point<int> pt1(1, 2);//���ø����� Ŭ�� ����� ������ Ÿ�� ����ʿ�
	Point<double> pt2(1.1, 2.2);//vector�� ���ø� ��ü�̴�.
	Point<string> pt3("ABC", "XYZ");
	pt1.print();
	pt2.print();
	pt3.print();

	return 0;
}
*/


/*
template <typename T, class U> //T�� ���� ->�Լ��� ���� generic��
//�Լ� �����ε��� �����ϰ��� //typename = class���� ����� ��
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