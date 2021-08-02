#include <iostream>
#include <functional>
#include <algorithm>// for_each, copy, transform
#include <vector>
// using namespace std;
/*
int main() {
	std::vector<int> v1{ 1,2,3,4 };//container
	for (int elem : v1)
		std::cout << elem << '\t';
	std::cout << std::endl;

	// for_each(iter_begin, iter_end,lambda)
	// - Ư¡1: lambda�Լ��� �� element�� ���� ����, return type�� ����(void)
	// - Ư¡2: �ܺ� ������ for_each�� ����� ��, closure�� ���
	for_each(begin(v1), end(v1), [](int elem) {std::cout << elem << '\t'; });
	std::cout << std::endl;

	for_each(begin(v1), end(v1), [](int& elem) {elem++; });
	for_each(begin(v1), end(v1), [](int elem) {std::cout << elem << '\t'; });
	std::cout << std::endl;

	int a = 10;
	for_each(begin(v1), end(v1), [a](int& elem) {elem *= a; });
	for_each(begin(v1), end(v1), [](int elem) {std::cout << elem << '\t'; });
	std::cout << std::endl;

	std::vector<int> v2(5);
	// cout src(source, ���� �ִ� ��)�� element�� dst(destination, ������)�� ���� src(v1)->(element)->dst(v2)
	// copy( src_iter_begin, src_iter_end, dst_iter_begin)
	// v1: {20, 30, 40, 50}
	// v2: {0, 0, 0, 0, 0}
	copy(begin(v1)+1, end(v1)-1, begin(v2)+1); // 00 30 40 0 0
	for_each(begin(v2), end(v2), [](int elem) {std::cout << elem << '\t'; });
	std::cout << std::endl << std::endl;

	// transform(): src�� element�� *��ȯ�ؼ�* dst�� ���� (for_each + copy)
	// transform(src_iter_begin, src_iter_end, dst_iter_begin, lambda �Լ�)
	// - Ư¡: lambda�� return type�� ����(for_each�� lambda�� return type�� ����x)
	transform(begin(v1), end(v1), begin(v2), [](int elem) {return elem * elem; });
	for_each(begin(v2), end(v2), [](int elem) {std::cout << elem << '\t'; });
	std::cout << std::endl << std::endl;

	return 0;
}
*/

/* �����ð�
int evaluate(function<int(int, int)>f, int x, int y){//�Լ� �����͸� �Է¹���
return f(x, y);
}

int main() {
	int a = 10, b = 20;

	cout << evaluate([&a](int x, int y) {a = 100; return a + x + y; }, 2, 3) << endl;
	cout << a << endl;

	return 0;
}
*/