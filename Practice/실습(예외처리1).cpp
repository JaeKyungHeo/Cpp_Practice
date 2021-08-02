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
// 예외처리: try/catch 구문
// 1. try: 예외가 발생할 수 있는 문장을 넣는다
// 2. catch: 예외가 발생할 경우에 수행
//  - 장점1: 프로그램이 죽지 않고 계속 동작
//  - 장점2: 오류 tracking 가능(종류, 위치)

int main() {
	vector<int> v{ 1, 2, 3, 4 };
	int index;
	cin >> index;

	try {
//		cout << v.at(index) << endl; //catch구문을 발동시키는 예외처리 부분이 존재//method안에 존재//안전성높음
		cout << v[index] << endl; //장점은 빠르나 안전성낮음
	}
	catch (exception& e) {// exception class: 예외처리를 다루는 base class
		cout << e.what() << endl; // what() 예외에대한 정보를 출력
		cout << "12번쨰 줄에서 오류났음" << endl;
	}

	cout << v.at(index) << endl;

	cout << "Program is still running" << endl;

	return 0;
}
*/