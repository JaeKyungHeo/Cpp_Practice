#include <iostream>
#include <iomanip>//setw(4)깔끔한 오른쪽 정렬가능
using namespace std;

/*
// switch문: if-else문과 유사하지만 변수의 값- 과 동일한 case가 실행됨
//	- if-else와 비교: 가독성이 더 좋다
//	- case문 뒤에는 break;
//	- default: 모든 case가 거짓일 경우 수행(else)
int main() {
	char input;
	cin >> input;

	//if else문이 좀 더 일반적이다.
	//but switch문은 가독성이 좋다 파악이 쉽다!
	//알아야하는 이유 다른 사람이 사용한것을 이해하기 위해
	//주의 하나의 참이나오면 그 밑부분도 모두 실행됨. (케스케이드)
	switch (input) {
	case 'P':
	case 'p':
		cout << "Pause" << endl;
		break;
	case 'Q':
	case 'q':
		cout << "Quit" << endl;
		break;
	default://단독사용도 가능
		cout << "Default" << endl;
	}

	return 0;
}
*/

/*
//while(){}: 조건식->block->조건식
//do{}while; block->조건식->block
//for(초기화; 반복조건; 업데이트){bock}
//while문보다 훨씬 더 깔끔하다!
int main() {
	int size;
	cout << "Enter a size: ";
	cin >> size;
		
	for (int row = 1; row <= size; row++) {
		for (int col = 1; col <= size; col++) {
//			int val = row * col;
			//int val = (row > col ? row : col);
		//	if (row > col)
		//		val = row;
		//	else
		//		val = col;
		//	cout << setw(4) << val;
			int val = 0;
			if (row == col)
				val = 1;
				cout << setw(4) << val;
		}
		cout << endl;
	}
	return 0;
}
*/


/*
int main() {
	int sum = 0;

	for (int i = 1; i <= 100; i++)
		sum += i;
		cout << sum << endl;

//	int i = 1;//초기화(initialization)
//while (i <= 100) {//반복조건(condition)
//		sum += i;// main body, block, statement
//		i++;//업데이트(modification)
//	}
}
*/



/*
int main() {
	int input;
	do {
		cout << "Enter a number [0, 10]: ";
		cin >> input;

	} while (!(input >= 0 && input <= 10));//세미콜론 필수!! / input <0 || input > 10 by드모르간 법칙
	cout << "Output: " << input << endl;


	return 0;
}
*/



/*
int main() {
	int sum = 0;
	int input;
	while (true) {//무한 반복문
		cout << "Enter a number: ";
		cin >> input;
		if (input < 0)
			//break;
			continue;//아랫 부분을 실행하지 않고 while문 첫 줄로 돌아감

		sum += input;//sum = sum + input
		cout << "Sum: " << sum << endl;

	}
}
*/