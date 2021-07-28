#include <iostream>//cin, cout
#include <fstream>//ofstream, ifstream, fstream
#include <iomanip>//setw
using namespace std;
/*
bool readStu(ifstream& fin, int& id, int& score1, int& score2, int& score3) {// ��ġ���� ����ȭ�� �ʿ��ϱ� ������ &���� main�� �Լ��� ������ ����
	//fin>>: �ϳ��� word ���ڿ��� �б� (����, �ٹٲ޹���)
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
	cout << setw(2) << grade << endl;//����
}


int main() {
	//����ġ
	//pseudo-code
	// �ݺ�: ��� �л������� ���� ������
	// 1) �л����� ch7STUFL.DAT�κ��� 1�پ� �д´�(ID, score1, score2, score3)
	// 2) score1,score2, score3�� �̿��ؼ� ��հ�, grade�� �����Ѵ�.
	// 3) ���Ͽ� ID, avg, grade�� ����

	ifstream fin("ch7STUFL.DAT");
	ofstream fout("grade.txt");

	if (!fin || !fout) {
		cout << "Error: file open failed" << endl;
		exit(100);//����ó��
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
	
	cout.width(15);//.�� ��ü�� ������ �ִ� ����� ȣ��� ��� setw�� ����� ��� but width�� �޼ҵ��̴�.
	cout.precision(4);//��µǴ� ������ ��ȿ���ڰ����� ����.
	cout.fill('-');
	cout << a << endl;//fout���� ����ϸ� ���Ͽ��� �ݿ���
	cout << 22.33334 << endl;//width�� fill�� ���� precision�� ����x ��Ȳ�� ���� �ٸ�.
	char ch;
	cin.unsetf(ios::skipws);// ws: white space
	cin >> ch;
	cout << '(' << ch << ')' << endl;//���� �����Է��� �����Ѵ�.

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
	fin.open("char.txt");//���� �̸��� ��ҹ��� ����x

	if (!fin) {
		cout << "file not found" << endl;
		exit(100);
	}

	while (true) {
		fin.get(ch);
		if (!fin)//������ ������ �� ������ fin==false (fin.eof())
			break;
		cout << ch << endl;
	}

	fin.close();

	return 0;
	}

	return 0;
}
*/