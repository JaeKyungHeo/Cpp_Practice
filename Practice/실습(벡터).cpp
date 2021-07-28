#include <iostream>
#include <vector>

using namespace std;
/*
void print(const vector<int>& vec) {//pass by value -> 자료수가 적을 때는 상관없지만 자료가 많으면 비효율..
	for (int i = 0; i < vec.size(); i++)//따라서 &를 붙여 pass by ref.로 해줌 (효율적으로 사용)
		cout << vec.at(i) << '\t';//const -> vector안에 값을 고정. 바뀌는 것을 방지할 수 있다.
	cout << endl;
}

int sum(const vector<int>& vec) {//누적 함수
	int result = 0;
	for (int elem : vec)
		result += elem;

	return result;
}

int main() {
	//			index:0, 1, 2, 3
	vector<int> vec{ 10, 20, 30, 40 };
	print(vec);

	vec[0] = 100;
	vec.at(1) = 200;//vec내에 존재하는 인덱스를 사용해야함.
	print(vec);

	vec[0] = 100;//원시적 바로 메모리공간에 저장
	vec.at(1) = 200;//함수처럼 동일한 안전성을 가짐.
	print(vec);

	vec.push_back(50);//vector 맨뒤에 자료추가
	print(vec);
	vec.pop_back();//vector 맨뒤에 있는 원소 제거
	print(vec);

	//int& elem = vec[0] -> for문의 body 실행 &를 붙여 elem값과 vec값이 동일시됨.
	//int& elem = vec[1] -> for문의 body 실행
	//int& elem = vec[2] -> for문의 body 실행
	for (int& elem : vec)//벡터의 원소들을 가장 처음부터 끝까지 아래를 실행한다.
		cin >> elem;

	// int elem = vec[0] -> for문의 body 실행 elem값을 바꿔도 vec값은 변화 없음.
	// int elem = vec[1] -> for문의 body 실행 단순 값을 복사함...
	// int elem = vec[2] -> for문의 body 실행
	for (int elem : vec)
		cout << elem << '\t';
	cout << endl;

	cout << "sum: " << sum(vec) << endl;

	return 0;
}
*/