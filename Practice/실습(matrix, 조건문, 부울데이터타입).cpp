#include <iostream>
#include <iomanip>// setw(n): 한 변수당 n칸을 할당, 오른쪽 정렬
using namespace std; // namespace를 기본값으로 사용하겠다. but 규모가 커지면 사용을 지양하는게 좋다.
/*
//nxn 매트릭스 만들기
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
		cout << '\n'; //endl(C++에서 사용)과 '\t'(C에서 사용) 트렌드
		row++; //C에서는 '," 구분하지 않음, but C++에서는 구분함.
		col = 1;
	}
}
*/



/*
int main() {
	int sum = 0, n;
	int i = 1;// 2로바꾸면 짝수합
	cin >> n;
	cout. = imbue(locale("")); // 3자리 숫자마다 콤마(,)표시
	while (i <= 100) {
		sum += i;
		cout << setw(4) << i << setw(12) << sum << endl;
		i++;
		//i=i+2 홀수합
	}
	return 0;
}
*/





/*
	//if, else-if, else 순서로 괄호안 조건들을 탐색,
	//true조건을 가지는 block을 수행후 전체 조건문을 탈출
	// 1) if: 처음에 위치, 단독으로 사용
	// 2) else: 상위 조건문이 모두 거짓일 경우 자동으로 수행(default)
	// 3) block안 문장이 하나일 경우 중괄호 {} 생략 가능

int main() {
	int score;
	char grade = NULL; //''
	cout << "Enter the score [0-100]: ";
	cin >> score;

	// ( 0 <= score <= 100) 파이썬에선 가능 but 여기서 안됨.
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
	bool c = -1;//0에 대해서만 거짓이 나오고 이외의 숫자들은 모두 참으로 나온다.
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