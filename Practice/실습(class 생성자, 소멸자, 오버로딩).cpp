#include <iostream>
using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//	static int numCreatedObj;//static �ɹ������� �ܺο��� �ʱ�ȭ ������Ѵ�./��� ��ü�� ����
//	int* ary;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {//������
//		numCreatedObj++;//�ɹ����� �ʱ�ȭ�ø��� Ƚ���� �����ִ�.
//		//file open
//		//���� �Ҵ�
//		ary = new int[5];
//	}
//	//�Ҹ���/�Է��Ķ���� ����x
//	~Point() {
//		cout << x << ". " << y << " is destructed.." << endl;
//		//file close
//		//�Ҵ� ����
//		delete[] ary;
//	}
//	void setXY(int _x, int _y) { x = _x; y = _y; }
//	int getX() const { return x; } //const method: �ɹ� ������ �ٲ��� ����
//	int getY() const { return y; }
//	static int getNumCreatedObject() { return numCreatedObj; }//�ܺη� �����ֱ� ����
//	// Point class�� operator<< �Լ��� ģ���� �����:
//	friend ostream& operator<<(ostream& cout, const Point& pt);
//	// ģ���� ����� Ŭ������ ��� �ɹ�����, �ɹ��Լ��� ������ ����������.
//	friend class SpyPoint;
//	// A->B�� ģ���� ������ (B�� A�� private �ɹ������� ����� �� �ִ�) ->�Ϲ�����
//	// ���� �������� �ʴ´� (A�� B�� private �ɹ������� ����� �� ������?) NO!
//};
//
////static �ɹ� ���� �ֱ�ȭ
//int Point::numCreatedObj = 0;//���� �޸𸮰��� �Ҵ��ؼ� �����.
//
////��ü�� �Է� type�� const�̸� ���ο��� const method�� ��밡��
////cout << 4;
////cout << 4.4;
////cout << 'a';
////cout << pt;
////�����ε� - ������ �̸��� ������ ����� ������
//ostream& operator<<(ostream& cout, const Point& pt) {//return by ref.����ؾ� pt1�� endl�� ���Ǵ� cout�� ��������.
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