#include <iostream>
#include <string>
#include <fstream>//ifstream, ofstream
using namespace std;
//����
//                  | ifstream     | ofstream
//------------------+--------------+----------
//char              | fin.get(c)   | f.put(c)    (�����ϳ�)
//word(����/�ٹٲ�) | fin >> s     | fout << s
// line(�ٹٲ�)     | getline(s)   | fout << s
// �������� : 1: fout/fin ���� �ݵ�� ����: open() ��:close()
//            2: fin ���:  ���� open ���� �Ǵ� EOF�� ��� fin == false
//                  (!fin == ture)
//                  �ҷ��� ��      |  ������ ��

/*
int main() {
	ofstream fout;//���Ϸ� ������ ����
//	fout.open("example.txt");//����� ������ ������. cout ����ͷ� ������ ��. //�����
	fout.open("example.txt", ios::app);//append: �̾��
	string s = "Object oriented programming";
	fout << s << endl;
	fout << "Linear algebra" << endl;
	fout << "Random process" << endl;

	char c = '3';
	fout.put('1');
	fout.put('2');
	fout.put(c);
	fout.put('\n');// endl: �ٹٲ�


	fout.close();//�ݴ� �۾��� �ʿ�

	ifstream fin; //cin
	fin.open("example.txt");


	//����ó��
	if (!fin) {
		cout << "File not found" << endl;
		exit(100);//���α׷� ���� ����
	}

	//get: �ϳ��� ����(char)
	while (true) {
		fin.get(c);//get�� ��� ���ڸ� �� �д´�.
		if (!fin)
			break;
		cout << c;
	}
*/
	/*
	fin >> s;
	cout << s << endl;;
	//���� ������ �ν���
	*/

	/*
	while (getline(fin, s)) {//�ٴ����� ����
		cout << s << endl;
	}
	*/

	//������ ��� while������ �۵���Ŵ
	//while (true) {
	//	fin >> s;
	//	cout << s << endl;
	//	if (fin.eof() == true)// End Of File//������ �������κп� ����� ������ �κ��̶�� �ν���. eof�÷���
	//eof��� (!fin)�� ��밡��//������ �������� �о����� false
	//		break;
	//	cout << s << endl;

	//}

/*
	return 0;
}
*/



/*
int main() {
	string s = "fred";//s�� �ν��Ͻ� ����� ���°�, 'a' �� �ܾ�� ���� ����ǥ
	cout << "s:" << s << endl;
	cout << s.size() << endl << endl;//.�� �Լ��� ���� �Ǵ� �Լ��� ȣ����.//s.length()

	cout << "s: " << s << endl;
	cout << s.empty() << endl;//������� ��
	s.clear();//���ڿ��� ���� s = "";
	cout << "s: " << s << endl;
	cout << s.empty() << endl << endl;//""���ڿ��� 1�� ���

	s = "Good";
	s += "-bye";// s = "-bye" s<- "Good-bye" ���ڿ����� ���ϱ� ����
	//Good-bye
	//01234567 : index 
	cout << "s: " << s << endl;
	cout << s[4] << ", " << s.at(4) << endl << endl;//[]�� ������ ���۷����� �ӵ��� ���Ⱑ ������ ,at()�� ��ü �Լ��� ���� �żҵ�
	
	cout << s.substr(5, 2) << endl;//���ڿ��� �߶��ش�.
	cout << s.substr(5, 3) << endl << endl;//(���� index, ������ ���ڿ��� ����)

	cout << s.find("od") << endl;
	cout << s.find("od",5) << ", "<< string::npos<< endl;//,�ڷ� ����Ʈ���� �ٲ��� �� �ִ�.������ ���ڿ��� ���� �� �ִ� �ִ� ���� ������ ����
	//npos�� ����ϸ� ���� �� ��ȯ�� ���� ������ �� �� �ִ�. *****
	cout << (s.find("od", 5) == string::npos) << endl;

	s += "-od";
	//Good-bye-od
	//012345678910
	string key = "od";
	cout << "s: " << s << endl;
	int index = s.find(key);
	cout << index << endl;
	cout << s.find("od", index + key.size()) << endl;//*** a.find('a',n)->a��� ���ڿ��� n��°���� 'a'��� �ܾ��� ��ġ(������ ó��������) 
	cout << (s == "good-bye-od") << endl;//case-sensitive: ��ҹ��� ����



	return 0;
}
*/

