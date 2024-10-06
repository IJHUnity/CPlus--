//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
////화면에 나온 데이터를 보고 클래스 Student를 생성하고, 해당 데이터를 출력하세요.
////조건1. 필드 값은 외부에 공개되지 않습니다.
////조건2. 객체 생성 시 화면에 나온 출력 순서대로 데이터를 입력합니다.
////조건3. 출력 함수의 이름은 Info입니다.
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
//		cout << "─────────────────────────────────────────────" << endl;
//	}
//};
//
//int main()
//{
//	Student s1(707723, "한라산", "자료구조", 2, "010-7777-8328");
//	Student s2(984104, "태백산", "정보학개론", 3, "010-1234-5678");
//
//	cout << setw(5) << "학번" << setw(8) << "성명"  << setw(12) << "과목명" << setw(7) <<"학년"  << setw(12) << "전화번호" << endl;
//	cout << "─────────────────────────────────────────────" << endl;
//	s1.Info();
//	s2.Info();
//	//문제 팁) 칸 상관 없이 내용만 잘 뽑으면 되며 화면처럼 칸을 보정해서 뽑고 싶으면 setw()기능을 활용해 문장을 작성합니다.
//
//
//	return 0;
//}