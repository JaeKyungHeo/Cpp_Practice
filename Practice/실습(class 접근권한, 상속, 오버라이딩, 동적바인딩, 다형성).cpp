#include <iostream>
#include <vector>
using namespace std;
////struct Str { //구조체
//////public: 디폴트값
////};
//
//// private(내부접근만가능), protected, public(내부, 외부접근가능)->접근성이 가장쉬움
//// protected: 상속을 위해서 존재하는 특수 type (Base class 에서는 private으로 동작)
//
////외울 것!
//// Base type | Inheritance type | Derived type
//// private   | 상관없음         | 접근불가(base class의 method를 통해서 접근)
//// protectd  | 상관없음         | private (클래스 내부에서만 사용가능)
//// public    | private/protected| private  
//// public    | public           | pubilc (클래스 내부/외부에서 사용가능)
//
//class Base {
//	public : // Base type
//	void print_base() { cout << "print_base()" << endl; }
//	virtual void print() { cout << "Base::print()" << endl; }
//};
//
//class Derived : public Base {// Inheritance type
//	//상속타입(접근권한결정) : 조건부 상속
//
////private: // Base type
////	void print_base(){ cout << "print_base()" << endl; }
////	void print(){cout<< "Base::print()" << endl;
////	}
//
//public:
//	void print_derived() { 
//		cout << "print_derived()" << endl; 
//		Base::print_base();//명시적기능
//	}
//	void print() override { cout << "Derive::print()" << endl; }
////	void print_derived() { cout << "print_derived()" << endl; }
//	
//};
//
//int main() {
//	//상속
//	Base base;
//	Derived derived;
//	//base.print_base(); 외부에서 사용불가
//	derived.print_derived();
//	//derived.print_base();
//	cout << endl;
//
//	// 함수 오버라이딩(overriding): base class의 method를 derived class에서 재정의(입력,이름,출력 모두 동일)
//	// 함수 오버로딩과의 차이는 상속관계에서 동작만 다르게 작동하는것입.
//	//  - 함수 오버로딩: 같은 이름을 가진 함구(입/출력은 다를 수 있음) 여러개 정의 상속이랑 무관!!
//	// 일단 가장 가까운 함수가 적용됨.
//	// 정적 바인딩(static binding): compile시 객체가 어떤 method를 호출할지를 미리 지정
//	base.print();
//	derived.print();
//	cout << endl;
//
//	// 동적 바인딩(dynamic binding): run-time시 호출할 methid들이 상황에 따라 가변
//	// - pointer: Base class의 pointer에 derived class의 주소값을 할당
//	// - 핵심 키워드: virtual, override
//	// - 다형성을 구현: signle interface(base class의 pointer)로
//	//				    다양한 entities(derived class 객체)를 사용 가능
//	Base* pBase = &derived;//pBase <- 0x10 / 인터페이스화됨.
//	pBase->print();
//	pBase = &base;// pBase <- 0x20
//	pBase->print();
//	cout << endl;
//
//	//다형성 응용 예시
//	//               { 0x00    , 0x10       , 0x20     }
//	vector<Base*> vec{ new Base, new Derived, new Base }; // 벡터안에 각각의 주소값을 저장하기 때문에 가능
//	// 저장은 부모클라스의 객체를 사용
//	pBase = new Derived; // pBase<-0x30
//	vec.push_back(pBase);
//
//	for (auto elem : vec)//elem 객체 x ->주소값 /(*elem).print; = elem->print()
//		elem->print();
//
//	for (auto elem : vec)//할당해제 필수
//		delete elem;
//
//	return 0;
//}