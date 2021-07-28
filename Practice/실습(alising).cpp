#include <iostream>
using namespace std;
/*
//(int a, int b)- pass by value: �Լ� �Է� ���ڿ� ���縦 ���� ���� ����
//(int& a, int&b)- pass by reference: �Լ� �Է� ���ڿ� ������ ���� ���� ����(����ȭ) &���̱�
// - �Լ��� �پ��� ������ ����� �� �ְ� ���ش�.
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 10, y = 1000;
	cout << x << '\t' << y << endl;
	swap(x, y);
	cout << x << '\t' << y << endl;//x = 10, y = 1000 ����x 
	
	return 0;
}
*/





/*
// alising: x�� r�� ����ȭ (r�� x�� reference variable)

int main() {
	int x = 10;
	int& r = x;//�ܼ� ����
	cout << x << '\t' << r << endl;//x = 10, r = 10
	x = 1000;
	cout << x << '\t' << r << endl;//x = 1000, r = 1000

	return 0;
}
*/





/*
// ����Լ�: �Լ��� �Լ� �ڽ��ڽ��� ��ȯ�� ���
// - 5! = 5x4x3x2x1x0x-1x-2.....(��)
// - 2���� ���� ����: base/ termination conditions
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
// global variable: �Լ� �ܺο��� ����, �������� ��밡��(���� ����)
// -���ǻ���: global, local variable�� �켱��.
int gX;

void print() {//������� ���� ������ void���
	gX = 1000;
	cout << "gX in print(): " << gX << endl; //gX =1000
}


int main() {
	int gX;//local variable �̷��� �Ǹ� local variable�� �켱�õ�.
	gX = 10;
	cout << gX << endl;//gX = 10
	print();
	cout << gX << endl;//gX = 1000
}
*/






/*
//local variable: �Լ� �ȿ��� ����, ����- �Լ��� ����Ǹ� �����
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
	cout << "print(): " << n << endl;//���Ƕ� ���� ���ÿ� ����
}

int main() {
	print();
	print();
	print();
	print(11);

	return 0;// ���߿� ���� ã�� �������� ����� ���� ����.
}//main�Լ��� ���α׷��� ���۰� ���̴�. 
*/