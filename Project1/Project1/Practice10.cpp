////https://cafe.naver.com/jhpro/30829
//#include <iostream>
//using namespace std;
//
//class Account
//{
//private:
//	string name;
//	string account_number;
//	int money;
//public:
//	Account(string name, string account_number, int money) 
//		: name(name), account_number(account_number), money(money) {	} //계좌 생성
//	void inquiry(); //조회
//	void deposit(); //입금
//	void withdraw();//출금
//};
//
//int main()
//{
//	Account a("A", "110-333-444797", 100000);
//	a.inquiry();
//	a.deposit();
//	a.withdraw();
//
//	return 0;
//}
//
//void Account::inquiry()
//{
//	cout << "사용자 이름 : " << name << endl;
//	cout << "계좌 번호 :  " << account_number << endl;
//	cout << "잔    액 : " << money << endl;
//}
//void Account::deposit()
//{	
//	try
//	{
//		cout << "입력하실 금액을 입력해주세요 >> ";
//		int input_value;
//		cin >> input_value;
//		if (input_value <= 0)
//		{
//			throw string("0보다 큰 값을 입력해주세요.");
//		}
//		money += input_value;
//		cout << "남은 잔액 : " << money << endl;
//	}
//	catch (string expn)
//	{
//		cout << expn << endl;
//		deposit(); //메세지 남긴 후 다시 실행해 작업을 처리합니다.
//	}	
//}
//
//void Account::withdraw()
//{
//	try
//	{
//		cout << "입력하실 금액을 입력해주세요 >> ";
//		int input_value;
//		cin >> input_value;
//
//		if (input_value > money)
//		{
//			throw string("잔액이 부족합니다.");
//		}
//		money -= input_value;
//		cout << "남은 잔액 : " << money << endl;
//	}
//	catch (string expn)
//	{
//		cout << expn << endl;
//		withdraw();
//	}
//}
