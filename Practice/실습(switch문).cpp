#include <iostream>
#include <iomanip>//setw(4)����� ������ ���İ���
using namespace std;

/*
// switch��: if-else���� ���������� ������ ��- �� ������ case�� �����
//	- if-else�� ��: �������� �� ����
//	- case�� �ڿ��� break;
//	- default: ��� case�� ������ ��� ����(else)
int main() {
	char input;
	cin >> input;

	//if else���� �� �� �Ϲ����̴�.
	//but switch���� �������� ���� �ľ��� ����!
	//�˾ƾ��ϴ� ���� �ٸ� ����� ����Ѱ��� �����ϱ� ����
	//���� �ϳ��� ���̳����� �� �غκе� ��� �����. (�ɽ����̵�)
	switch (input) {
	case 'P':
	case 'p':
		cout << "Pause" << endl;
		break;
	case 'Q':
	case 'q':
		cout << "Quit" << endl;
		break;
	default://�ܵ���뵵 ����
		cout << "Default" << endl;
	}

	return 0;
}
*/

/*
//while(){}: ���ǽ�->block->���ǽ�
//do{}while; block->���ǽ�->block
//for(�ʱ�ȭ; �ݺ�����; ������Ʈ){bock}
//while������ �ξ� �� ����ϴ�!
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

//	int i = 1;//�ʱ�ȭ(initialization)
//while (i <= 100) {//�ݺ�����(condition)
//		sum += i;// main body, block, statement
//		i++;//������Ʈ(modification)
//	}
}
*/



/*
int main() {
	int input;
	do {
		cout << "Enter a number [0, 10]: ";
		cin >> input;

	} while (!(input >= 0 && input <= 10));//�����ݷ� �ʼ�!! / input <0 || input > 10 by��𸣰� ��Ģ
	cout << "Output: " << input << endl;


	return 0;
}
*/



/*
int main() {
	int sum = 0;
	int input;
	while (true) {//���� �ݺ���
		cout << "Enter a number: ";
		cin >> input;
		if (input < 0)
			//break;
			continue;//�Ʒ� �κ��� �������� �ʰ� while�� ù �ٷ� ���ư�

		sum += input;//sum = sum + input
		cout << "Sum: " << sum << endl;

	}
}
*/