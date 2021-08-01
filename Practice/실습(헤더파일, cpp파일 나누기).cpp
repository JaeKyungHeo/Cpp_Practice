//#include <iostream>//standard 라이브러리
//#include <string>
//#include <vector>
//#include "CText.h"//일반인 배포 라이브러리
//#include "CFancyText.h"
//#include "CFixedText.h"
//using namespace std;

////선언부 ->헤더파일
////정의->cpp파일
//
//int main() {
//	vector<Text*> vec{ new FixedText, new FancyText("Fancy", "<",">","*") };
//	Text* pText;
//	pText = new FixedText;//0x40
//	vec.push_back(pText); // 주소값으로 불러옴
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