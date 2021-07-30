#include <iostream>
//#include <string>//이건 왜?
#include <iomanip>
#include <vector>
using namespace std;
/*
// 1) class name {};
// 2) private:,public:
// 3) private: member data
// 4) public: member function(method),get(),set(),print()...
// 5) 생성자(constructor) - 객체 선언시 자동으로 1회 호출: member data를 초기화
//    - 리턴 타입없음, 생성자 이름은 class의 이름과 동일
//    - 만약 생성자를 만들지 않으면, default 생성자 (Account(){})를 자동 생성
//    - 만약 생성자를 만들면, default 생성자가 자동생성 되지 않음(아무런 입력이 없는 경우x)
//    - initialization list: 맴버변수 초기화와 예외처리를 구분
// 6) (optional) method를 선언과 정의로 구분

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


//::범위 연산자
//defualt argument는  선언에만 적어준다.
Account::Account(string _name, string _id, double _bal)//생성자는 반환값이 없다. 내부적 해결
	: name(_name), id(_id), balance(_bal) {//웬만하면 사용하여 멤버변수 설정
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
	Account ac1("홍길동", "1002", 5000), ac2;//디폴트 생성자가 없으면 오류남...
	ac1.print();
	ac2.print();

	ac1.deposit(10000);
	ac1.print();

	if (ac1.withdraw(20000))
		cout << "출금 성공." << endl;
	else
		cout << "출금 실패." << endl;
	ac1.print();

	if (ac1.withdraw(15000))
		cout << "출금 성공." << endl;
	else
		cout << "출금 실패." << endl;
	ac1.print();
	//객체 장점 유지보수에 편리하다.

	vector<Account> vec(10);
	for (auto& elem : vec)
		elem.print();


	return 0;
}
*/