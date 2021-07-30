#include <iostream>
//#include <string>//�̰� ��?
#include <iomanip>
#include <vector>
using namespace std;
/*
// 1) class name {};
// 2) private:,public:
// 3) private: member data
// 4) public: member function(method),get(),set(),print()...
// 5) ������(constructor) - ��ü ����� �ڵ����� 1ȸ ȣ��: member data�� �ʱ�ȭ
//    - ���� Ÿ�Ծ���, ������ �̸��� class�� �̸��� ����
//    - ���� �����ڸ� ������ ������, default ������ (Account(){})�� �ڵ� ����
//    - ���� �����ڸ� �����, default �����ڰ� �ڵ����� ���� ����(�ƹ��� �Է��� ���� ���x)
//    - initialization list: �ɹ����� �ʱ�ȭ�� ����ó���� ����
// 6) (optional) method�� ����� ���Ƿ� ����

class Account {
private:
	string name;
	string id;
	double balance;
public:
	Account(string _name = "xxx", string _id = "0000", double _bal = 0.0);
	void deposit(double _amt);
	bool withdraw(double _amt);
	void print();
};


//::���� ������
//defualt argument��  ���𿡸� �����ش�.
Account::Account(string _name, string _id, double _bal)//�����ڴ� ��ȯ���� ����. ������ �ذ�
	: name(_name), id(_id), balance(_bal) {//�����ϸ� ����Ͽ� ������� ����
	if (balance < 0) {
		cout << "Error: negative balacne" << endl;
		balance = 0;
	}
}

void Account::deposit(double _amt) {
	balance += _amt;// balance = balance + _amt;
}

bool Account::withdraw(double _amt) {
	double temp = balance - _amt;
	if (temp < 0)
		return false;
	balance = temp;
	return true;
}

void Account::print() {
	cout << setw(10) << name
		<< setw(10) << id
		<< setw(10) << balance << endl;
}

int main() {
	Account ac1("ȫ�浿", "1002", 5000), ac2;//����Ʈ �����ڰ� ������ ������...
	ac1.print();
	ac2.print();

	ac1.deposit(10000);
	ac1.print();

	if (ac1.withdraw(20000))
		cout << "��� ����." << endl;
	else
		cout << "��� ����." << endl;
	ac1.print();

	if (ac1.withdraw(15000))
		cout << "��� ����." << endl;
	else
		cout << "��� ����." << endl;
	ac1.print();
	//��ü ���� ���������� ���ϴ�.

	vector<Account> vec(10);
	for (auto& elem : vec)
		elem.print();


	return 0;
}
*/