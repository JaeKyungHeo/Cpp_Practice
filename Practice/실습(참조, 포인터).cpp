#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

/*
int sum(int* list, int size) {//*�� ���ָ� �ּҰ����� �ޱ�
	int result = 0;
	for (int i = 0; i < size; i++)
		result += list[i];
	return result;
}

void print(int* begin, int* end) {
	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';//*������ �ּҰ��� ����Ű�� ��
//	int* curr = begin;
//	while (curr != end) {
//		cout << curr << '\t';
//		curr++;
//	}
//	cout << endl;
}

// pointer + 1: �迭�� ���� element������ update
// list �� ��ü�� �迭�� ���� �ּҰ��� ����
int main() {
	int list[3] = { 10,20,30 }; //3�� ������ ���� �׳�[]�̷��� �ص� ��(list�� �����ʹ�!!)
//	cout << sum(list, 3) << endl;//v.size()ó�� ���� ���� �˾Ƴ��� �Լ��� ����.

	cout << (list + 0) << '\t' << *(list + 0) << endl;//list[0] �ּҰ����� 4���̰���.
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

//void print(const Matrix& m){//but �������� �����
void print(const vector < vector<int>>& m) {//const,&�� �߰��� �� �� ���ȭ ��Ŵ
//	for (unsigned row = 0; row < m.size(); row++) {
//		for (unsigned col = 0; col < m[row].size(); col++) {
//			cout << setw(4) << m[row][col];
//		}
//		cout << endl;
//	}

	// auto: ����� data type�� ��ü�� �� ����(��Ŀ ���� ������ ��)
//	for (vector<int> row : m) {
	for(const auto& row : m){
		for (int elem : row) {//row (vector<int>)s
			cout << setw(4) << elem;
		}
		cout << endl;
	}
	//auto ���� ����
	//auto a = 1;�̰��� ���� ������
	//auto b; � �ڷ������� �𸣱� ������ ������

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
//�Ҽ� 1�� �ڱ��ڽ��� �����ϰ�� ����� ����. 1���� ū ����
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

void print(const vector<int>& v) {//�Լ����ο� ���ϴ� ���� ����.(����� ǥ��) & ���縦 ���ϰ� �ּҰ����� �޸� ����
	for (int elem : v)
		cout << setw(6) << elem;
}

int main() {
	int low, high;
	cin >> low >> high;
	vector<int> vec = primes(low, high);//�����Ұ� ���� �ڷ����� ���´�.
	print(vec);

	return 0;
}
*/