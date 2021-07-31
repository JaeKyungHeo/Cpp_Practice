#include <iostream>
#include <vector>
#include <string>
using namespace std;
//class Text {
//private://->1. ���� protecded�� �ٲٰų�
//	string text;
//public:
//	Text(string _t) : text(_t) {}//������
//	string get() { return text; }//��ȯ�Լ�
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
//		: Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con) {}//�̴ϼȶ������̼����� ������ ȣ�Ⱑ��
//	string get() { return left_brac + Text::get() + right_brac; }//->2.Text::get���� ���� 
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
//	//push_back���� ä�����⶧���� ���Ϳ��� �����ʹ����� �Ͼ�� �ʴ´�.
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
// �߻�Ŭ����(abstract class)
// - ���� �����Լ��� ��� �ϳ� ������ �ִ� Ŭ����
// - ��üȭ(instantiation)�� �� ����
// - base class�� pointer�θ�, ���������� single interface�� ����
class Cursor {
public:
	virtual void draw() = 0; //���� ���� �Լ�(pure virtual function)->�������̽��� ����
	                         // - �ڽ�Ŭ�������� �ݵ�� �������̵� �ؾ���
	//virtual void draw() { cout << "Cursor::draw()" << endl; }
};

class Round : public Cursor{
public:
	void draw() override { cout << "Round::draw()" << endl; }//�������̵��� �Լ�/���� ����� �ٸ���.
};

class Rectangle : public Cursor {
public:
	void draw() override { cout << "Rectangle::draw()" << endl; }
};

int main() {
	//���� ���ε�
//	Cursor cursor;
	Round round;
	Rectangle rectangle;
//	cursor.draw();
	round.draw();
	rectangle.draw();
	cout << endl;

	//���� ���ε�(dynamic binding): run-time�� ȣ���� method���� ��Ȳ�� �°� ����
	// - base class�� pointer�� derived class�� �ּҰ��� �Ҵ�
	// - �ٽ� Ű����: virtual, override -> �������� ���� ���ε� ��밡��.
	// - ������: single interface(base class�� pointer)�� �پ��� entities(derived class ��ü) ��� ����
	//-> �����߿� � Ư����ü�� � �ൿ�� ���� �����ִ� ��
	Cursor* pCur;//��üx
//	pCur = &cursor;//cursor�ּҰ��� �־���
	pCur->draw();
	pCur = &round;
	pCur->draw();
	pCur = &rectangle;
	pCur->draw();
	cout << endl;

	//��ü���� �����ּҰ�   0x00        0x10        0x20
	vector<Cursor*> vec{ new Round, new Rectangle, new Round };

	for (auto elem : vec)
		elem->draw();

	for (auto elem : vec)
		delete elem;

	return 0;
}
*/
