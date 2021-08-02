#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

/*
class FileNotFoundException : public exception{
private:
	string message;
public:
	FileNotFoundException(string _filename)
		: message("File " + _filename + " not found") {}
	virtual const char* what() const throw(){//동적 바인딩//exception클라스 상속받을 때는 override 대신 throw 사용
		return message.c_str();//string -> const char*
	}
};

//main()->compute()->filter()->at()
void filter(const vector<int>& v, int index) {
	try {
		cout << v.at(index) << endl;//오류
	}
	catch(exception& e){
		cout << "filter(): " << e.what() << endl;
		throw e; //re-throw
	}
}

void compute(const vector<int>& v, int index) {
	try {
		filter(v, index);
	}
	catch (exception& e){
		cout << "compute(): " << e.what() << endl;
		throw FileNotFoundException("XXX");//out_of_range도 있음
		//throw는 하나만 가능 return과 비슷
		}
}

int main() {
	vector<int> v{ 1,2,3,4 };
	int index;
	cin >> index;
	try {
		compute(v, index);
	}
	//catch (out_of_range& e) {
	//	cout << "main():(out_of_range)" << e.what() << endl;
	//}
	catch (exception& e) {//exception은 모두 받을 수 있다.
		cout << "main ():(FileNotFoundException)" << e.what() << endl;
	}
	return 0;
}
*/

/*
vector<int> load_vector(string filename) {
	ifstream fin(filename);

	if (fin) {
		vector<int> result;//벡터 컨테이너
		int n, value;
		fin >> n;
		for (int i = 0; i < n; i++) {
			fin >> value;
			result.push_back(value);
		}
		return result;
	}
	else {
		throw FileNotFoundException(filename);//모든 자료형을 보낼 수 있다.
	}
}

int main() {
	try {
		vector<int> vec = load_vector("values.txt1");
		for (auto elem : vec)
			cout << elem << '\t';
		cout << endl;
	}
	catch (exception& e) { //throw 키워드를 발동시켜야 FileNotFound대신 exception 사용해도 문제x -> 다형성
		cout << e.what() << endl;
	}
	return 0;
}
*/