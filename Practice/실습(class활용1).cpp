#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
/*
// 1) class name{ };
// 2) private:, public:
// 3) private: member data
// 4) public: member function - 생성자, get(), set(), print()...
// 5) 생성자(constructor) - 객체 선언시 자동으로 1회 호출 - member data를 초기화
//       - 리턴 타입 없음, 생성자 이름은 class 이름과 동일
//       - 만약 생성자를 만들지 않으면, default 생성자(Account(){})가 자동 생성
//       - 만약 생성자를 만들면, default 생성자가 자동 생성되지 않음
//		 - initialization list: 맴버 변수를 초기화 하는 부분 - 예외처리 부분과 구분
// 6) (optional): method를 선언과 정의구분

//중구난방식 않좋음 선언과 정의를 명확하게하기
class Account {
private://없어도 가능
	string name;
	string id;
	double balance;
public:
	//initialization list
	Account(string _name = "xxxx", string _id = "0000", double _bal = 0.0);//default argument는 선언에만
	void deposit(double _amt);
	bool withdraw(double _amt);
	void print();
};



int main() {
	Account ac1("홍길동", "1002", 5000), ac2;
	ac1.print();
	ac2.print();

	ac1.deposit(10000);
	ac1.print();

	if (!ac1.withdraw(20000)) {
		cout << "잔액이 부족합니다" << endl;
	}
	ac1.print();

	if (ac1.withdraw(5000)) {
		cout << "출금완료" << endl;
	}
	ac1.print();
	cout << endl;
	
	vector<Account> vec(10);//객체생성
	for (auto& elem : vec)//&를 통해 최대한 복사를 방지함
		elem.print();

	return 0;
}

Account::Account(string _name, string _id, double _bal) //생성자
	: name(_name), id(_id), balance(_bal) {//initialization list
	if (balance < 0) {
		cout << "Error: negative balance" << endl;
		balance = 0;
	}
}

//	name = _name;//언더바는 구분을 위해
//	id = _id;
//	balance - _bal;
//}
void Account::deposit(double _amt) {
	balance += _amt;
}
bool Account::withdraw(double _amt) {//내가 가진도보다 많은 돈을 인출하는것을 방지
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