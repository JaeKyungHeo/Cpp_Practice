#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <functional>
using namespace std;

/*
// []  : closure �ܺ� ������ lambda �Լ� ���η� ����
// [a] : ���� a�� pass by value�� lambda�Լ� ���ο� ����
// [&a]: ���� a�� pass by reference�� lambda�Լ� ���ο� ���� 
// [=] : ��� �ܺκ����� pass by value�� ����
// [&] : ��� �ܺκ����� pass by reference�� ����
// - ���� ��������: �Լ��� �Է����� lambda �Լ��� ����� ��� �ݵ�� �Է� type�� function���� 

// function<string(int, int), double)> f: f�� �Է���(int, int, double)�̰� ��� type�� (string)��
//                           ��� callable target�� ���� �� �ִ�

int evaluate2(function<int(int, int)> f, int x, int y) { // closure�� �ᵵ �Ƚᵵ �Է¹ޱ� ����
	return f(x, y);
}

int main() {
	int a = 10, b = 20;

	[&a, b](int x) {//[��] �ȿ� ������ ������ �ܺ� ���� ����� �� �ִ�.
		cout << "x= " << x << endl;
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
		a = 1000;
	}(10);//lambda�Լ� ȣ��
	cout << "main::a= " << a << endl; 
	// &�� ����ϸ� pass by reference�� �����ϸ� �ܺη� ��ȯ�Ȱ� ����

	cout << evaluate2([a](int x, int y) {return a + x + y; }, 2, 3) << endl;
	//�⺻������ closure�� �������� ����� �ƴϴ�.
	//�Լ��� closure��  ���� ���x
	//closure�� �Լ����� ����ϰԵǸ� �Լ��� ��üȭ�Ǿ� ��������.

	return 0;
}
*/

/*
int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
int abcd(int a, int b, int c) { return a + b + c; }
int evaluate(int(*f)(int, int), int x, int y) {
	return f(x, y);
}


int main() {
	cout << evaluate(&sum, 2, 3) << endl;
	cout << evaluate(&mult, 2, 3) << endl;

	// lamda�Լ�: �̸����� ��ȸ������ ���Ǵ� �Լ�
	// - form: [](�Էº���)->����Ÿ�� {����}
	// ex) sum: [](int x, int y)-> int {return x+y;}
	cout << evaluate([](int x, int y)->int {return x + y; }, 2, 3) << endl;

	// simplified lambda �Լ�: [](�Էº���) {����}
	// mult(): [](int x, int y) { return x * y; }
	cout << evaluate([](int x, int y) {return x * y; }, 20, 30) << endl;
	
	// lambda �Լ� ����-ȣ���� ���ÿ�
	[](int x, int y) {cout << x << ", " << y << endl; }(20, 30);

	// lambda�Լ��� local function 
	//int(*f)(int, int) = [](int x, int y) {return x - y; };
	auto f = [](int x, int y) {return x - y; };
	cout << f(1000, 2000) << endl;

	return 0;
}
*/


/*
template <class Iter>
void print(Iter iter_begin, Iter iter_end) {
	Iter iter = iter_begin;
	while (iter != iter_end) {
		cout << *iter << '\t';
		iter++;
	}
	cout << endl;
}

template<class Iter, typename T>
int count_value(Iter iter_begin, Iter iter_end, T key_value) {
	int count = 0;
	for (Iter iter = iter_begin; iter != iter_end; iter++)
		if (*iter == key_value) count++;
	
		return count;
}

int main() {
	vector<int> v{ 1,2,3,1,2,2 };
	list<double> l{ 1.1,2.2,3.3,1.1,1.1 };
	string sAry[] = { "Apple","Bear", "Carrot","Apple","Apple" };

	//��ü���� �����͸� �����°��� ����
	print(begin(v), end(v));
	print(begin(l), end(l));
	print(begin(sAry), end(sAry));

	cout << count_value(begin(v), end(v), 2) << endl;
	cout << count_value(begin(l), end(l), 2.2) << endl;
	cout << count_value(begin(sAry), end(sAry), "Apple") << endl;

	struct Point {//����ü�� ������ ��Ƶα������ ���/Ŭ������ ����
	//����Ʈ���� public�̴�./���� ����ü - �����Լ� �ȿ� ����
		int x;
		int y;
		bool operator == (const Point& pt) {//�׵�� ������ ���� �ʿ�
			return (this->x == pt.x) && ((this->y == pt.y));
		}
	};
	//             pts[0],pts[1],pts[2]
	Point pts[] = { {1,2},{3,4},{5,6} };
	cout << count_value(begin(pts), end(pts), Point{ 1,2 }) << endl;

	return 0;
}
*/
