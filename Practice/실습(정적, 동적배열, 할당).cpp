#include <iostream>
#include <iomanip>
using namespace std;
//������ ���͸� ���� ����Ѵ�.
/*
bool find_char(const char* s, char ch) {//s�� ��ü�� �ּҰ��� �ǹ���.
	while (*s != '\0') {//������ ��������
		if (*s == ch)
			return true;
		s++;
	}
	return false;
}

// ���ڿ�const char* s = "oop")
// s = {'o','o','p','\0'} \0 = null�ּҰ� ���� ��Ÿ����.

int main() {
	const char* phrase = "this is a phrase";//���ڿ��� ĳ������ �迭�� �ٸ���
	//���ڿ� const char* /���� int �̷������� ������Ÿ���� ������.
	// 'A': 65
	// 'a': 97 (+32)

	cout << phrase << endl;

	for (char ch = 'a'; ch <= 'z'; ch++) { //������ ���縦 �˾ƺ�(a~z���� �˻� �ƽ�Ű�ڵ��)
		cout << ch << " is ";
		if (!find_char(phrase, ch))
			cout << "NOT";
		cout << " in (" << phrase << ")" << endl;
		// a is in (this is a phrase)
		// b is NOT in (this is a phrase)
	}

	return 0;
}
*/

/*
void print(int** m, int nRow, int nCol) {//*�� ������ ������ �ǹ���.
	for (int row = 0; row < nRow; row++) {
		for (int col = 0; col < nCol; col++) {
			cout << setw(4) << m[row][col];
		}
		cout << endl;
	}
}

int main() {
//	vector<vector<int>> m(2, vector<int>(3));
	int matrix[2][3]; // 2x3 matrix

	int nRow = 2, nCol = 3;
	int** matrix2 = new int* [nRow];//2���� matrix ((int*)* = int**)
	for (int row = 0; row < nRow; row++)
		matrix2[row] = new int[nCol];

	matrix2[0][0] = 1; matrix2[0][1] = 2; matrix2[0][2] = 3;
	matrix2[1][0] = 4; matrix2[1][1] = 5; matrix2[1][2] = 6;

	print(matrix2, nRow, nCol);


//�ȿ� �͵� ���� �Ҵ������� �ٱ��� �Ҵ����� (�Ҵ��� ��������)
	for (int row = 0; row < nRow; row++)
		delete[] matrix2[row];
	delete[] matrix2;
	
	return 0;
}
*/



/*
// ���� �迭(static array): ���α׷� ������(run-time) ũ�Ⱑ ����
// ���� �迭(daynamic array): ���α׷��� ������ �Ҵ�/���� ����
//  - keywords: new (�Ҵ�), delete[] (�Ҵ� ����)

void get_data(int* begin, int* end) {
	for (int* curr = begin; curr != end; curr++)//���������� ����� �������� �̵� ����� �����ڷ��� ũ�⸸ŭ �̵�
		cin >> *curr;//�ּҰ��� ����� ������ jump!
}

void print(int* begin, int* end) {
	for (int* curr = begin; curr != end; curr++)
		cout << setw(4) << *curr;
	cout << endl;
}
// ���� �̷����� ���� �߰� ������Ʈ�� �̷� �����̴�.


int main() {
	const int size = 3;
	int list[3] = { 10, 20, 30 };//[]�ȿ� ������ ���� �ȵ�. (�����迭�̱� ����)
	//����� ���ϳ� �ѹ� �����ϸ� ��� ������...(�޸� ������ ������)

	int length;
	cin >> length;
	int* list2 = new int[length];//���� �迭 ���� ����� ������ �Ҵ�� �ʿ�
	//���� �迭�� ���� �ּҰ��� list2�� ����

	int* begin = list2;
	int* end = list2 + length;


	get_data(begin, end);
	print(begin, end);

	delete[] list2;// []�� �迭�� �ǹ� -> �����迭�� �Ҵ��� �����ϰڴ�.
	// delete�� �����ָ� ������ ��ƴ�

	return 0;
}
*/