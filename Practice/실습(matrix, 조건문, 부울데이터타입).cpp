#include <iostream>
#include <iomanip>// setw(n): �� ������ nĭ�� �Ҵ�, ������ ����
using namespace std; // namespace�� �⺻������ ����ϰڴ�. but �Ը� Ŀ���� ����� �����ϴ°� ����.
/*
//nxn ��Ʈ���� �����
int main() {
	int row = 1, col = 1;
	int n;
	cin >> n;
	while (row <= 5) {
		while (col <= 5) {
			int val = row * col;
			cout << setw(4) << val;
			col++;
		}
		cout << '\n'; //endl(C++���� ���)�� '\t'(C���� ���) Ʈ����
		row++; //C������ '," �������� ����, but C++������ ������.
		col = 1;
	}
}
*/



/*
int main() {
	int sum = 0, n;
	int i = 1;// 2�ιٲٸ� ¦����
	cin >> n;
	cout. = imbue(locale("")); // 3�ڸ� ���ڸ��� �޸�(,)ǥ��
	while (i <= 100) {
		sum += i;
		cout << setw(4) << i << setw(12) << sum << endl;
		i++;
		//i=i+2 Ȧ����
	}
	return 0;
}
*/





/*
	//if, else-if, else ������ ��ȣ�� ���ǵ��� Ž��,
	//true������ ������ block�� ������ ��ü ���ǹ��� Ż��
	// 1) if: ó���� ��ġ, �ܵ����� ���
	// 2) else: ���� ���ǹ��� ��� ������ ��� �ڵ����� ����(default)
	// 3) block�� ������ �ϳ��� ��� �߰�ȣ {} ���� ����

int main() {
	int score;
	char grade = NULL; //''
	cout << "Enter the score [0-100]: ";
	cin >> score;

	// ( 0 <= score <= 100) ���̽㿡�� ���� but ���⼭ �ȵ�.
	if (score >= 0 && score <= 100) {
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else
		grade = 'F';

	cout << "Grade is " << grade << endl;
	}
	else 
		cout << "Invalid score" << grade << endl;
	

	return 0;
}
*/




/*
int main() {
	bool a = true;
	bool b = (10 >= 5);
	bool c = 1000;
	bool a = false;
	bool b = -0.0000000001;
	bool c = -1;//0�� ���ؼ��� ������ ������ �̿��� ���ڵ��� ��� ������ ���´�.
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
*/



/*
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 10, y = 1000;
	cout << x << '\t' << y << endl;
	swap(x, y);
	cout << x << '\t' << y << endl;
	
	return 0;
}
*/