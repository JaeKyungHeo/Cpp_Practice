#include <iostream>
#include <vector>

using namespace std;
/*
void print(const vector<int>& vec) {//pass by value -> �ڷ���� ���� ���� ��������� �ڷᰡ ������ ��ȿ��..
	for (int i = 0; i < vec.size(); i++)//���� &�� �ٿ� pass by ref.�� ���� (ȿ�������� ���)
		cout << vec.at(i) << '\t';//const -> vector�ȿ� ���� ����. �ٲ�� ���� ������ �� �ִ�.
	cout << endl;
}

int sum(const vector<int>& vec) {//���� �Լ�
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
	vec.at(1) = 200;//vec���� �����ϴ� �ε����� ����ؾ���.
	print(vec);

	vec[0] = 100;//������ �ٷ� �޸𸮰����� ����
	vec.at(1) = 200;//�Լ�ó�� ������ �������� ����.
	print(vec);

	vec.push_back(50);//vector �ǵڿ� �ڷ��߰�
	print(vec);
	vec.pop_back();//vector �ǵڿ� �ִ� ���� ����
	print(vec);

	//int& elem = vec[0] -> for���� body ���� &�� �ٿ� elem���� vec���� ���Ͻõ�.
	//int& elem = vec[1] -> for���� body ����
	//int& elem = vec[2] -> for���� body ����
	for (int& elem : vec)//������ ���ҵ��� ���� ó������ ������ �Ʒ��� �����Ѵ�.
		cin >> elem;

	// int elem = vec[0] -> for���� body ���� elem���� �ٲ㵵 vec���� ��ȭ ����.
	// int elem = vec[1] -> for���� body ���� �ܼ� ���� ������...
	// int elem = vec[2] -> for���� body ����
	for (int elem : vec)
		cout << elem << '\t';
	cout << endl;

	cout << "sum: " << sum(vec) << endl;

	return 0;
}
*/