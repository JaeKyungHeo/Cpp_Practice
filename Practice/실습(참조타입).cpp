#include <iostream>

using namespace std;
/*
int sum(int a, int b) {return a + b;}
int mult(int a, int b) { return a * b;}//(�Լ��� �ּҰ��������� �ִ�.->���� �ּҰ�)
//int* px
int evaluate(int(*f)(int, int), int a, int b) {
	return f(a, b);
}

int main() {
	int(*func)(int, int);//�Լ� ������ �Է� ���� 2�� ��� ����1���� �ǹ� ���� ������ �Լ��� ���¸� ���Ͻ� �������
	//���� 
	func = &sum;//���� evaluate�� �����̴�.
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
void swap(int* a, int* b) {//&�� �Ⱥ��̸� ������ �ȵ�
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;//���� �����ֱ�
}

int main() {
	int x = 10, y = 20;

	cout << x << '\t' << y << endl;
	swap(&x, &y); //swap(x,y) ->�̷����ص� �۵� smart compiler�� ���� ����
	cout << x << '\t' << y << endl;
	
	return 0;
}
*/

/*
// &x: x�� �ּҰ��� ��ȯ
// int* px: (int*)�� ������ ������ �޸� �ּҰ��� �����ϴ� data type (px�� �ּҰ��� �����ϴ� ����)
// -> �������� ����(�ּҰ��� �����ϴ� ����)
// *px: px�� ����� �ּҰ����� jump
int main() {
	int x = 10;
	int* px = &x;//px��� �������� ������ x�� �ּҰ��� �Ҵ�


	cout << &x << '\t' << endl;//&�� ���̸� 16������ ����� �ּҰ��� ����
	//x�� �ּҰ��� ���´�
	cout << px << '\t' << *px << endl;
	//*�� �ٿ��ָ� �ּҰ��� ������ �ִ� ������ ��ȯ����
	cout << &px << endl;//px�� ���� �ּ�
		return 0;
}
*/
