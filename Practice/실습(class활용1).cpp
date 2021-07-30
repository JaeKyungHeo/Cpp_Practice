#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
/*
// 1) class name{ };
// 2) private:, public:
// 3) private: member data
// 4) public: member function - ������, get(), set(), print()...
// 5) ������(constructor) - ��ü ����� �ڵ����� 1ȸ ȣ�� - member data�� �ʱ�ȭ
//       - ���� Ÿ�� ����, ������ �̸��� class �̸��� ����
//       - ���� �����ڸ� ������ ������, default ������(Account(){})�� �ڵ� ����
//       - ���� �����ڸ� �����, default �����ڰ� �ڵ� �������� ����
//		 - initialization list: �ɹ� ������ �ʱ�ȭ �ϴ� �κ� - ����ó�� �κа� ����
// 6) (optional): method�� ����� ���Ǳ���

//�߱������ ������ ����� ���Ǹ� ��Ȯ�ϰ��ϱ�
class Account {
private://��� ����
	string name;
	string id;
	double balance;
public:
	//initialization list
	Account(string _name = "xxxx", string _id = "0000", double _bal = 0.0);//default argument�� ���𿡸�
	void deposit(double _amt);
	bool withdraw(double _amt);
	void print();
};



int main() {
	Account ac1("ȫ�浿", "1002", 5000), ac2;
	ac1.print();
	ac2.print();

	ac1.deposit(10000);
	ac1.print();

	if (!ac1.withdraw(20000)) {
		cout << "�ܾ��� �����մϴ�" << endl;
	}
	ac1.print();

	if (ac1.withdraw(5000)) {
		cout << "��ݿϷ�" << endl;
	}
	ac1.print();
	cout << endl;
	
	vector<Account> vec(10);//��ü����
	for (auto& elem : vec)//&�� ���� �ִ��� ���縦 ������
		elem.print();

	return 0;
}

Account::Account(string _name, string _id, double _bal) //������
	: name(_name), id(_id), balance(_bal) {//initialization list
	if (balance < 0) {
		cout << "Error: negative balance" << endl;
		balance = 0;
	}
}

//	name = _name;//����ٴ� ������ ����
//	id = _id;
//	balance - _bal;
//}
void Account::deposit(double _amt) {
	balance += _amt;
}
bool Account::withdraw(double _amt) {//���� ���������� ���� ���� �����ϴ°��� ����
	double temp = balance - _amt;
	if (temp < 0)
		return false;
	else {
		balance = temp;
		return true;
	}
}
void Account::print() {
	cout << setw(10) << name
		<< setw(10) << id
		<< setw(10) << balance << endl;
}
*/