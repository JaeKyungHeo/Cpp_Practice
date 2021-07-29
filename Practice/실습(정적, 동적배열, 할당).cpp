#include <iostream>
#include <iomanip>
using namespace std;
//보통은 벡터를 많이 사용한다.
/*
bool find_char(const char* s, char ch) {//s는 자체가 주소값을 의미함.
	while (*s != '\0') {//끝까지 돌려보기
		if (*s == ch)
			return true;
		s++;
	}
	return false;
}

// 문자열const char* s = "oop")
// s = {'o','o','p','\0'} \0 = null주소값 끝을 나타내줌.

int main() {
	const char* phrase = "this is a phrase";//문자열은 캐릭터의 배열과 다르다
	//문자열 const char* /정수 int 이런느낌의 데이터타입을 말해줌.
	// 'A': 65
	// 'a': 97 (+32)

	cout << phrase << endl;

	for (char ch = 'a'; ch <= 'z'; ch++) { //문자의 존재를 알아봄(a~z까지 검색 아스키코드순)
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
void print(int** m, int nRow, int nCol) {//*의 갯수가 차원을 의미함.
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
	int** matrix2 = new int* [nRow];//2차원 matrix ((int*)* = int**)
	for (int row = 0; row < nRow; row++)
		matrix2[row] = new int[nCol];

	matrix2[0][0] = 1; matrix2[0][1] = 2; matrix2[0][2] = 3;
	matrix2[1][0] = 4; matrix2[1][1] = 5; matrix2[1][2] = 6;

	print(matrix2, nRow, nCol);


//안에 것들 먼저 할당해제후 바깥것 할당해제 (할당의 역순으로)
	for (int row = 0; row < nRow; row++)
		delete[] matrix2[row];
	delete[] matrix2;
	
	return 0;
}
*/



/*
// 정적 배열(static array): 프로그램 동작중(run-time) 크기가 고정
// 동적 배열(daynamic array): 프로그램이 동작중 할당/해제 가능
//  - keywords: new (할당), delete[] (할당 해제)

void get_data(int* begin, int* end) {
	for (int* curr = begin; curr != end; curr++)//다음변수가 저장된 공간으로 이동 저장된 변수자료형 크기만큼 이동
		cin >> *curr;//주소값이 저장된 곳으로 jump!
}

void print(int* begin, int* end) {
	for (int* curr = begin; curr != end; curr++)
		cout << setw(4) << *curr;
	cout << endl;
}
// 굳이 이렇게한 이유 중간 프로젝트가 이런 형식이다.


int main() {
	const int size = 3;
	int list[3] = { 10, 20, 30 };//[]안에 변수가 들어가면 안됨. (정적배열이기 때문)
	//사용이 편하나 한번 지정하면 계속 유지됨...(메모리 공간에 상주함)

	int length;
	cin >> length;
	int* list2 = new int[length];//동적 배열 선언 대놓고 포인터 할당시 필요
	//동적 배열의 시작 주소값을 list2에 저장

	int* begin = list2;
	int* end = list2 + length;


	get_data(begin, end);
	print(begin, end);

	delete[] list2;// []는 배열의 의미 -> 동적배열의 할당을 해제하겠다.
	// delete를 안해주면 수정이 어렵다

	return 0;
}
*/