//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
////ȭ�鿡 ���� �����͸� ���� Ŭ���� Student�� �����ϰ�, �ش� �����͸� ����ϼ���.
////����1. �ʵ� ���� �ܺο� �������� �ʽ��ϴ�.
////����2. ��ü ���� �� ȭ�鿡 ���� ��� ������� �����͸� �Է��մϴ�.
////����3. ��� �Լ��� �̸��� Info�Դϴ�.
//class Student
//{
//private :
//	int sid;
//	string name;
//	string subject;
//	int grade;
//	string phone_number; // "010-1234-5678"
//public :
//	Student(int sid, string name, string subject, int grade, string phone_number)
//	{
//		this->sid = sid;
//		this->name = name;
//		this->subject = subject;
//		this->grade = grade;
//		this->phone_number = phone_number;
//	}
//	void Info()
//	{
//		cout << setw(6) << sid << setw(8) << name << setw(12) << subject << setw(4) << grade << setw(16) << phone_number << endl;
//		cout << "������������������������������������������������������������������������������������������" << endl;
//	}
//};
//
//int main()
//{
//	Student s1(707723, "�Ѷ��", "�ڷᱸ��", 2, "010-7777-8328");
//	Student s2(984104, "�¹��", "�����а���", 3, "010-1234-5678");
//
//	cout << setw(5) << "�й�" << setw(8) << "����"  << setw(12) << "�����" << setw(7) <<"�г�"  << setw(12) << "��ȭ��ȣ" << endl;
//	cout << "������������������������������������������������������������������������������������������" << endl;
//	s1.Info();
//	s2.Info();
//	//���� ��) ĭ ��� ���� ���븸 �� ������ �Ǹ� ȭ��ó�� ĭ�� �����ؼ� �̰� ������ setw()����� Ȱ���� ������ �ۼ��մϴ�.
//
//
//	return 0;
//}