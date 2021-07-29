#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

/*
int sum(int* list, int size) {//*를 써주면 주소값으로 받기
	int result = 0;
	for (int i = 0; i < size; i++)
		result += list[i];
	return result;
}

void print(int* begin, int* end) {
	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';//*붙으면 주소값이 가리키는 값
//	int* curr = begin;
//	while (curr != end) {
//		cout << curr << '\t';
//		curr++;
//	}
//	cout << endl;
}

// pointer + 1: 배열의 다음 element값으로 update
// list 그 자체는 배열의 시작 주소값을 저장
int main() {
	int list[3] = { 10,20,30 }; //3은 원소의 개수 그냥[]이렇게 해도 됨(list는 포인터다!!)
//	cout << sum(list, 3) << endl;//v.size()처럼 원소 갯수 알아내는 함수가 없음.

	cout << (list + 0) << '\t' << *(list + 0) << endl;//list[0] 주소값끼리 4차이가남.
	cout << (list + 1) << '\t' << *(list + 1) << endl;//list[1]
	cout << (list + 2) << '\t' << *(list + 2) << endl;//list[2]

	int* begin = list;
	int* end = list + 3;
	print(begin, end);


		return 0;
}
*/

/*
//using Matrix = vector<vector<int>>;

//void print(const Matrix& m){//but 가독성이 어려움
void print(const vector < vector<int>>& m) {//const,&를 추가해 좀 더 명료화 시킴
//	for (unsigned row = 0; row < m.size(); row++) {
//		for (unsigned col = 0; col < m[row].size(); col++) {
//			cout << setw(4) << m[row][col];
//		}
//		cout << endl;
//	}

	// auto: 선언시 data type을 대체할 수 있음(조커 같은 역할을 함)
//	for (vector<int> row : m) {
	for(const auto& row : m){
		for (int elem : row) {//row (vector<int>)s
			cout << setw(4) << elem;
		}
		cout << endl;
	}
	//auto 오류 주의
	//auto a = 1;이것은 문제 없지만
	//auto b; 어떤 자료형인지 모르기 때문에 오류남

}

int main() {
	//2 x 3 matrix
	//vector<vector<int>> mat(2, vector<int>(3));
	vector<vector<int>> mat{ {1,2,3}, { 4,5,6 } };//mat[0],mat[1]

	mat[0][0] = 1; mat[0][1] = 2; mat[0][2] = 3;
	mat[1][0] = 2; mat[1][1] = 3; mat[1][2] = 4;

	print(mat);

	return 0;
}
*/

/*
//소수 1과 자기자신을 제외하고는 약수가 없는. 1보다 큰 정수
bool is_prime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

vector<int> primes(int low, int high) {
	vector<int> result;
	for (int i = low; i <= high; i++)
		if (is_prime(i))
			result.push_back(i);
	return result;
}

void print(const vector<int>& v) {//함수내부에 변하는 값이 없다.(명시적 표현) & 복사를 안하고 주소값으로 메모리 절약
	for (int elem : v)
		cout << setw(6) << elem;
}

int main() {
	int low, high;
	cin >> low >> high;
	vector<int> vec = primes(low, high);//모든원소가 같은 자료형을 갖는다.
	print(vec);

	return 0;
}
*/