#include <iostream>
using namespace std;
// class ����� ��
// 1) class name{ };
// 2) private:, public: ���� ����
// 3) member data ����� in private:
// 4) method      ����� in public:
// 5) �ʱ�ȭ �Լ�(constructor, ������)
//   - ������ �̸��� class �̸��� ����->public
//   - ���� ���� ������ ������ ������, default ������(Point(){})�� �ڵ����� ����
//   - ���� ���� �����ڸ� �����, default ������ �ڵ� ���� �ȵ�
//   - ���� �ʱⰪ�� ������ ������ �� �ִ�.
//   - default arguement ����ϸ� default ������ ���� �ʿ� x

/*
class Point {//Ŭ�� �̸� ����
//2������ ���� -> �����Ϳ� �Լ�
private: // �ܺ�(main)���� ���� �Ұ���, member data
	int x;
	int y;
public:// �ܺ�(main)���� ���� ����, member function (method)
	Point(int _x, int _y) {//������ - Ŭ�� �̸��� ����/ ��ȯ���� ����. �ʱ⿡�� ����.
		x = _x;
		y = _y;
	}
	Point() {}//�����ڸ� ����� ����Ʈ �����ڵ� ���� �־����.
	//�����ڰ� �ƿ������� �ڵ����� ����Ʈ �����ڰ� ����������� ����� �������� ����Ʈ ������ ����� �����.
	int getX() { return x; }//�ܺη� ��ȯ���ִ� �Լ�
	int getY() { return y; }
	void setXY(int _x, int _y) {//��ü �ȿ� ������ ����
		x = _x;//'_' ���̴� ���� ���� member data�� ������ �ֱ�����.
		y = _y;
	}
	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};//�����ݷ� �ʼ�
//����
//���α׷����� ��������
//����ó������
//������ġ���(���Ἲ)

int main() {
	Point pt1,pt2(10,20);//��ü ���ǵ��ڸ��� �ʱ�ȭ->�������� ����
	//pt1.x = 1;�̷����ϸ� ���� ���߾��� ���� ������ ��������.
	pt1.setXY(1, 2);//'.'�� �տ� �̸��� ���� ��ü�� ���� method���
	cout << pt1.getX() << endl;
	cout << pt1.getY() << endl;

	pt1.print();
	pt2.print();

	return 0;
}
*/