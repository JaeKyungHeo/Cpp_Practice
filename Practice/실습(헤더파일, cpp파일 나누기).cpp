//#include <iostream>//standard ���̺귯��
//#include <string>
//#include <vector>
//#include "CText.h"//�Ϲ��� ���� ���̺귯��
//#include "CFancyText.h"
//#include "CFixedText.h"
//using namespace std;

////����� ->�������
////����->cpp����
//
//int main() {
//	vector<Text*> vec{ new FixedText, new FancyText("Fancy", "<",">","*") };
//	Text* pText;
//	pText = new FixedText;//0x40
//	vec.push_back(pText); // �ּҰ����� �ҷ���
//
//	for (auto elem : vec) {
//		elem->append("A");
//		cout << elem->get() << endl;
//	}
//
//	for (auto elem : vec)
//		delete elem;
//
//
//	return 0;
//}