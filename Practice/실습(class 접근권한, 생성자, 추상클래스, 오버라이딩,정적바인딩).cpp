#include <iostream>
#include <vector>
#include <string>
using namespace std;
//class Text {
//private://->1. 여길 protecded로 바꾸거나
//	string text;
//public:
//	Text(string _t) : text(_t) {}//생성자
//	string get() { return text; }//반환함수
//	virtual void append(string _extra) { text += _extra; }
//};
//
//class FancyText : public Text {
//private:
//	string left_brac;
//	string right_brac;
//	string connector;
//public:
//	FancyText(string _t, string _lb, string _rb, string _con)
//		: Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con) {}//이니셜라이제이션으로 생성자 호출가능
//	string get() { return left_brac + Text::get() + right_brac; }//->2.Text::get으로 받음 
//	void append(string _extra) override {
//		Text::append(connector + _extra);
//	}
//};
//
//class FixedText : public Text {
//public:
//	FixedText() : Text::Text("FIXED") {}
//	void append(string _extra) override {
//		// NOOP = NO operation
//	}
//};
//
//int main() {
//	Text t1("Plain");
//	t1.append("A");
//	cout << t1.get() << endl;
//
//	FancyText t2("Fancy", "<<", ">>", "***");
//	t2.append("A");
//	cout << t2.get() << endl;
//
//	FixedText t3;
//	t3.append("A");
//	cout << t3.get() << endl;
//	cout << endl;
//
//	//t1 = t2 // Base <- Derived
//	//t2 = t1 // Derived -> Base x
//
//
//	//                          0x00                        0x10                      0x20, 0x30, 0x40
//	vector<Text*> v{ new Text("Plain"), new FancyText("Fancy1", "<",">","-"), new FixedText };
//	Text* pText;
//	pText = new FancyText("Fancy2", "[", "]", "*");//0x30
//	v.push_back(pText);
//	pText = new FixedText; //0x40
//	v.push_back(pText);
//	//push_back으로 채워졌기때문에 벡터에서 데이터누수는 일어나지 않는다.
//
//
//	for (auto elem : v)
//		elem->append("A");
//
//	for (unsigned i = 0; i < v.size(); i++)
//		cout << i << " : " << v.at(i)->get() << endl;
//
//	for (auto elem : v)
//		delete elem;
//
//	return 0;
//}

/*
// 추상클래스(abstract class)
// - 순수 가상함수를 적어도 하나 가지고 있는 클래스
// - 객체화(instantiation)될 수 없음
// - base class의 pointer로만, 다형성에서 single interface로 동작
class Cursor {
public:
	virtual void draw() = 0; //순수 가상 함수(pure virtual function)->인터페이스만 제공
	                         // - 자식클래스에서 반드시 오버라이딩 해야함
	//virtual void draw() { cout << "Cursor::draw()" << endl; }
};

class Round : public Cursor{
public:
	void draw() override { cout << "Round::draw()" << endl; }//오버라이딩된 함수/차이 기능이 다르다.
};

class Rectangle : public Cursor {
public:
	void draw() override { cout << "Rectangle::draw()" << endl; }
};

int main() {
	//정적 바인딩
//	Cursor cursor;
	Round round;
	Rectangle rectangle;
//	cursor.draw();
	round.draw();
	rectangle.draw();
	cout << endl;

	//동적 바인딩(dynamic binding): run-time시 호출할 method들이 상황에 맞게 결정
	// - base class의 pointer에 derived class의 주소값을 할당
	// - 핵심 키워드: virtual, override -> 사용해줘야 동적 바인딩 사용가능.
	// - 다형성: single interface(base class의 pointer)로 다양한 entities(derived class 객체) 사용 가능
	//-> 실행중에 어떤 특정객체가 어떤 행동을 할지 묶어주는 것
	Cursor* pCur;//객체x
//	pCur = &cursor;//cursor주소값을 넣어줌
	pCur->draw();
	pCur = &round;
	pCur->draw();
	pCur = &rectangle;
	pCur->draw();
	cout << endl;

	//객체들의 시작주소값   0x00        0x10        0x20
	vector<Cursor*> vec{ new Round, new Rectangle, new Round };

	for (auto elem : vec)
		elem->draw();

	for (auto elem : vec)
		delete elem;

	return 0;
}
*/
