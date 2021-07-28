#include <iostream>
#include <string>
#include <fstream>//ifstream, ofstream
using namespace std;
//정리
//                  | ifstream     | ofstream
//------------------+--------------+----------
//char              | fin.get(c)   | f.put(c)    (문자하나)
//word(공백/줄바꿈) | fin >> s     | fout << s
// line(줄바꿈)     | getline(s)   | fout << s
// 주의할점 : 1: fout/fin 사용시 반드시 시작: open() 끝:close()
//            2: fin 용법:  파일 open 실패 또는 EOF일 경우 fin == false
//                  (!fin == ture)
//                  불러올 때      |  저장할 때

/*
int main() {
	ofstream fout;//파일로 정보를 보냄
//	fout.open("example.txt");//여기다 파일을 저장함. cout 모니터로 정보가 감. //덮어쓰기
	fout.open("example.txt", ios::app);//append: 이어쓰기
	string s = "Object oriented programming";
	fout << s << endl;
	fout << "Linear algebra" << endl;
	fout << "Random process" << endl;

	char c = '3';
	fout.put('1');
	fout.put('2');
	fout.put(c);
	fout.put('\n');// endl: 줄바꿈


	fout.close();//닫는 작업이 필요

	ifstream fin; //cin
	fin.open("example.txt");


	//예외처리
	if (!fin) {
		cout << "File not found" << endl;
		exit(100);//프로그램 강제 종료
	}

	//get: 하나의 문자(char)
	while (true) {
		fin.get(c);//get은 모든 문자를 다 읽는다.
		if (!fin)
			break;
		cout << c;
	}
*/
	/*
	fin >> s;
	cout << s << endl;;
	//띄어쓰기 단위로 인식함
	*/

	/*
	while (getline(fin, s)) {//줄단위로 읽음
		cout << s << endl;
	}
	*/

	//위에것 대신 while문으로 작동시킴
	//while (true) {
	//	fin >> s;
	//	cout << s << endl;
	//	if (fin.eof() == true)// End Of File//파일의 마지막부분에 저장됨 마지막 부분이라고 인식함. eof플래그
	//eof대신 (!fin)도 사용가능//파일의 마지막을 읽었을때 false
	//		break;
	//	cout << s << endl;

	//}

/*
	return 0;
}
*/



/*
int main() {
	string s = "fred";//s는 인스턴스 찍어져 나온것, 'a' 한 단어는 작은 따옴표
	cout << "s:" << s << endl;
	cout << s.size() << endl << endl;//.은 함수의 변수 또는 함수를 호출함.//s.length()

	cout << "s: " << s << endl;
	cout << s.empty() << endl;//빈공간의 수
	s.clear();//빈문자열로 만듦 s = "";
	cout << "s: " << s << endl;
	cout << s.empty() << endl << endl;//""빈문자열은 1로 출력

	s = "Good";
	s += "-bye";// s = "-bye" s<- "Good-bye" 문자열끼리 더하기 가능
	//Good-bye
	//01234567 : index 
	cout << "s: " << s << endl;
	cout << s[4] << ", " << s.at(4) << endl << endl;//[]은 원시적 오퍼레이터 속도는 여기가 더빠름 ,at()은 객체 함수로 만든 매소드
	
	cout << s.substr(5, 2) << endl;//문자열을 잘라준다.
	cout << s.substr(5, 3) << endl << endl;//(시작 index, 추출한 문자열의 길이)

	cout << s.find("od") << endl;
	cout << s.find("od",5) << ", "<< string::npos<< endl;//,뒤로 디폴트값을 바꿔줄 수 있다.없으면 문자열이 가질 수 있는 최대 문자 갯수가 나옴
	//npos를 사용하면 없을 때 반환할 값을 지정해 줄 수 있다. *****
	cout << (s.find("od", 5) == string::npos) << endl;

	s += "-od";
	//Good-bye-od
	//012345678910
	string key = "od";
	cout << "s: " << s << endl;
	int index = s.find(key);
	cout << index << endl;
	cout << s.find("od", index + key.size()) << endl;//*** a.find('a',n)->a라는 문자열의 n번째부터 'a'라는 단어의 위치(기준은 처음부터임) 
	cout << (s == "good-bye-od") << endl;//case-sensitive: 대소문자 구분



	return 0;
}
*/

