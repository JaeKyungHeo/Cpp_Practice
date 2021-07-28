#include <iostream>//cin, cout
#include <fstream>//ofstream, ifstream, fstream
#include <iomanip>//setw
using namespace std;
/*
bool readStu(ifstream& fin, int& id, int& score1, int& score2, int& score3) {// 위치정보 동기화가 필요하기 때문에 &붙임 main과 함수의 변수들 연결
	//fin>>: 하나의 word 문자열을 읽기 (공백, 줄바꿈문자)
	fin >> id >> score1 >> score2 >> score3;
	if (!fin)
		return false;
	else
		return true;
}

void calcGrade(int score1, int score2, int score3, int& avg, char& grade) {
	avg = (score1 + score2 + score3) / 3;
	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else if (avg >= 70)
		grade = 'C';
	else if (avg >= 60)
		grade = 'D';
	else
		grade = 'F';
}

void writeStu(ofstream& fout, int id, int avg, char grade) {
	fout.fill('0');
	cout << setw(4) << id;
	fout.fill(' ');
	cout << setw(3) << avg;
	cout << setw(2) << grade << endl;//저장
}


int main() {
	//스케치
	//pseudo-code
	// 반복: 모든 학생정보를 읽을 때까지
	// 1) 학생정보 ch7STUFL.DAT로부터 1줄씩 읽는다(ID, score1, score2, score3)
	// 2) score1,score2, score3를 이용해서 평균값, grade를 산출한다.
	// 3) 파일에 ID, avg, grade를 저장

	ifstream fin("ch7STUFL.DAT");
	ofstream fout("grade.txt");

	if (!fin || !fout) {
		cout << "Error: file open failed" << endl;
		exit(100);//예외처리
	}
	int id, score1, score2, score3, avg;
	char grade;

	while (readStu(fin, id, score1, score2, score3)){
		calcGrade(score1, score2, score3, avg, grade);
		writeStu(fout, id, avg, grade);
	}
	


	cout << "End grading" << endl;

	fin.close();
	fout.close();
	return 0;
}

/*
int main() {
	double a = 12.345;

	cout << a << endl;
	
	cout.width(15);//.은 객체가 가지고 있는 멤버를 호출시 사용 setw와 비슷한 기능 but width는 메소드이다.
	cout.precision(4);//출력되는 숫자의 유효숫자갯수를 정함.
	cout.fill('-');
	cout << a << endl;//fout으로 사용하면 파일에도 반영됨
	cout << 22.33334 << endl;//width와 fill은 해제 precision은 해제x 상황에 따라 다름.
	char ch;
	cin.unsetf(ios::skipws);// ws: white space
	cin >> ch;
	cout << '(' << ch << ')' << endl;//공변 문자입력을 무시한다.

	cin.setf(ios::skipws);
	cin >> ch;
	cout << '(' << ch << ')' << endl;


	return 0;

}
*/



/*
int main() {
	char ch;
	ofstream fout;
	fout.open("char.txt"); //project8.exe

	

	while (true) {
		cin >> ch;
		if (ch == 'q')
			break;
		fout.put(ch);
	}

	fout.close();

	ifstream fin;
	fin.open("char.txt");//파일 이름은 대소문자 구분x

	if (!fin) {
		cout << "file not found" << endl;
		exit(100);
	}

	while (true) {
		fin.get(ch);
		if (!fin)//파일의 끝까지 다 읽으면 fin==false (fin.eof())
			break;
		cout << ch << endl;
	}

	fin.close();

	return 0;
	}

	return 0;
}
*/