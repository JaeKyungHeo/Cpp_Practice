#include <iostream>
#include <vector>
using namespace std;
/*
int process(const vector<int> v, int index) {
	int value = v.at(index);
	return value;
}

int main() {
	vector<int> v{ 1,2,3,4 };
	int index;
	cin >> index;
	try {
		cout << process(v, index) << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}


	cout << "Program is still running" << endl;

	return 0;
}
*/


/*
// ����ó��: try/catch ����
// 1. try: ���ܰ� �߻��� �� �ִ� ������ �ִ´�
// 2. catch: ���ܰ� �߻��� ��쿡 ����
//  - ����1: ���α׷��� ���� �ʰ� ��� ����
//  - ����2: ���� tracking ����(����, ��ġ)

int main() {
	vector<int> v{ 1, 2, 3, 4 };
	int index;
	cin >> index;

	try {
//		cout << v.at(index) << endl; //catch������ �ߵ���Ű�� ����ó�� �κ��� ����//method�ȿ� ����//����������
		cout << v[index] << endl; //������ ������ ����������
	}
	catch (exception& e) {// exception class: ����ó���� �ٷ�� base class
		cout << e.what() << endl; // what() ���ܿ����� ������ ���
		cout << "12���� �ٿ��� ��������" << endl;
	}

	cout << v.at(index) << endl;

	cout << "Program is still running" << endl;

	return 0;
}
*/