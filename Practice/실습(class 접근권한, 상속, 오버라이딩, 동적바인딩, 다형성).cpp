#include <iostream>
#include <vector>
using namespace std;
////struct Str { //����ü
//////public: ����Ʈ��
////};
//
//// private(�������ٸ�����), protected, public(����, �ܺ����ٰ���)->���ټ��� ���彬��
//// protected: ����� ���ؼ� �����ϴ� Ư�� type (Base class ������ private���� ����)
//
////�ܿ� ��!
//// Base type | Inheritance type | Derived type
//// private   | �������         | ���ٺҰ�(base class�� method�� ���ؼ� ����)
//// protectd  | �������         | private (Ŭ���� ���ο����� ��밡��)
//// public    | private/protected| private  
//// public    | public           | pubilc (Ŭ���� ����/�ܺο��� ��밡��)
//
//class Base {
//	public : // Base type
//	void print_base() { cout << "print_base()" << endl; }
//	virtual void print() { cout << "Base::print()" << endl; }
//};
//
//class Derived : public Base {// Inheritance type
//	//���Ÿ��(���ٱ��Ѱ���) : ���Ǻ� ���
//
////private: // Base type
////	void print_base(){ cout << "print_base()" << endl; }
////	void print(){cout<< "Base::print()" << endl;
////	}
//
//public:
//	void print_derived() { 
//		cout << "print_derived()" << endl; 
//		Base::print_base();//��������
//	}
//	void print() override { cout << "Derive::print()" << endl; }
////	void print_derived() { cout << "print_derived()" << endl; }
//	
//};
//
//int main() {
//	//���
//	Base base;
//	Derived derived;
//	//base.print_base(); �ܺο��� ���Ұ�
//	derived.print_derived();
//	//derived.print_base();
//	cout << endl;
//
//	// �Լ� �������̵�(overriding): base class�� method�� derived class���� ������(�Է�,�̸�,��� ��� ����)
//	// �Լ� �����ε����� ���̴� ��Ӱ��迡�� ���۸� �ٸ��� �۵��ϴ°���.
//	//  - �Լ� �����ε�: ���� �̸��� ���� �Ա�(��/����� �ٸ� �� ����) ������ ���� ����̶� ����!!
//	// �ϴ� ���� ����� �Լ��� �����.
//	// ���� ���ε�(static binding): compile�� ��ü�� � method�� ȣ�������� �̸� ����
//	base.print();
//	derived.print();
//	cout << endl;
//
//	// ���� ���ε�(dynamic binding): run-time�� ȣ���� methid���� ��Ȳ�� ���� ����
//	// - pointer: Base class�� pointer�� derived class�� �ּҰ��� �Ҵ�
//	// - �ٽ� Ű����: virtual, override
//	// - �������� ����: signle interface(base class�� pointer)��
//	//				    �پ��� entities(derived class ��ü)�� ��� ����
//	Base* pBase = &derived;//pBase <- 0x10 / �������̽�ȭ��.
//	pBase->print();
//	pBase = &base;// pBase <- 0x20
//	pBase->print();
//	cout << endl;
//
//	//������ ���� ����
//	//               { 0x00    , 0x10       , 0x20     }
//	vector<Base*> vec{ new Base, new Derived, new Base }; // ���;ȿ� ������ �ּҰ��� �����ϱ� ������ ����
//	// ������ �θ�Ŭ���� ��ü�� ���
//	pBase = new Derived; // pBase<-0x30
//	vec.push_back(pBase);
//
//	for (auto elem : vec)//elem ��ü x ->�ּҰ� /(*elem).print; = elem->print()
//		elem->print();
//
//	for (auto elem : vec)//�Ҵ����� �ʼ�
//		delete elem;
//
//	return 0;
//}