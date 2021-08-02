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
	virtual const char* what() const throw(){//���� ���ε�//exceptionŬ�� ��ӹ��� ���� override ��� throw ���
		return message.c_str();//string -> const char*
	}
};

//main()->compute()->filter()->at()
void filter(const vector<int>& v, int index) {
	try {
		cout << v.at(index) << endl;//����
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
		throw FileNotFoundException("XXX");//out_of_range�� ����
		//throw�� �ϳ��� ���� return�� ���
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
	catch (exception& e) {//exception�� ��� ���� �� �ִ�.
		cout << "main ():(FileNotFoundException)" << e.what() << endl;
	}
	return 0;
}
*/

/*
vector<int> load_vector(string filename) {
	ifstream fin(filename);

	if (fin) {
		vector<int> result;//���� �����̳�
		int n, value;
		fin >> n;
		for (int i = 0; i < n; i++) {
			fin >> value;
			result.push_back(value);
		}
		return result;
	}
	else {
		throw FileNotFoundException(filename);//��� �ڷ����� ���� �� �ִ�.
	}
}

int main() {
	try {
		vector<int> vec = load_vector("values.txt1");
		for (auto elem : vec)
			cout << elem << '\t';
		cout << endl;
	}
	catch (exception& e) { //throw Ű���带 �ߵ����Ѿ� FileNotFound��� exception ����ص� ����x -> ������
		cout << e.what() << endl;
	}
	return 0;
}
*/