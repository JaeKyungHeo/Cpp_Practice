#include <iostream> // cin, cout
#include <cmath> // �Լ� library
using namespace std;
/*
void appleprice(int a = 1000); //����� ���� ��ġ�� but main�Լ� ���� �������
//default augment�� ���� �κп����� �ۼ�

int main() {
	appleprice();
	appleprice(2000);
	appleprice();
	appleprice();
	appleprice();
	//�ƹ��͵� �������� ó�� �����ذ��� ���� �Է°��� ������ �Է°��� ��.
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
	cout << log(value) << endl; //���� e�� �ڿ��α�
	cout << cos(value) << endl;
}
*/


/*
//�Լ������ 3�ܰ�
// 1. ����(declare) > main �Լ� ��
int square(int a); //����(prototype) ���� ������������ ������ �ʿ�� ����. ���¸� ����ָ� ok!


int main() {
	int x;//����
	x = 5;//�ʱ�ȭ
	cout << square(x) << endl; //3. ȣ��(call)
}
// 2. ����(define, ����)��ɼ����ϱ�! > main �Լ� �Ʒ�(���� �ص� ���������� �̷����ϸ� ���� �ľ��� ����)
int square(int a) {
 return a*a;
 } 
 */


//����� ���� ������ �޶� ������. ���� ���� ������ ����!
//�ݺ��غ���
//����
/*
int sum(int a, int b);
int subt(int a, int b);
int mult(int a, int b);
float divi(int a, int b); //�ٽ��غ��� div�� �ϸ� ���� ���� �ִ� �Լ���!
int get_date();//�������� ���� �Լ��� ������ �����ϴ�.

int main() {
	int x, y;
	x = get_date();
	y = get_date();
	cout << "x = " << x << ", y = " << y << endl;
	cout << "x + y = " << sum(x, y) << endl;
	cout << "x - y = " << subt(x, y) << endl;
	cout << "x * y = " << mult(x, y) << endl;
	cout << "x / y = " << divi(x, y) << endl;

	return 0; //main�Լ��� �Լ��� ��ȯ���� �����������. �޴� ���� ������! �̰� �� ��Ȯ�� �ڵ��̴�.
}

//����
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
	return 1.0*a / b; // float = float(??)int ����ȯ >1.0���ϱ� �ٸ� �ڷ������� ���ϸ� ���е��� ���� ���� ����
}

int get_date() {
	int a;
	cout << "Enter a number: ";
	cin >> a;//endl�� ������ �ʿ䰡 ����. �ڵ����� �ٹٲ� ��.
	return a;
}
*/