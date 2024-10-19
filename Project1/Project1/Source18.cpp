//#include <iostream>
//using namespace std;
////C++의 모듈(.ixx)파일이 아닌 이론적인 부분의 인터페이스
////인터페이스(interface)
////자바 , C# 등에서 사용되는 해당 개념은 다음과 같습니다.
////1. 인터페이스는 객체에 대한 명세서입니다.
////2. 구체적인 구현은 파생 객체에서 작업합니다.(자식 클래스)
//
////C++에서는 명시적으로 인터페이스를 지원하고 있지 않습니다.(C#에서 제공)
////추상 클래스 개념을 활용해 인터페이스를 구현하는 것은 가능합니다.
//
////사용 가능을 표현한 클래스 IUsable(I는 interface임을 알리는 암묵적인 표현)
//class IUsable
//{
//public :
//	virtual void Use() = 0; //무언가를 사용한다.
//	
//};
//class ICountable
//{
//public :
//	virtual void Use() = 0;  //세는 기능(사용해서 소모한다.)
//	
//};
////포션 : 개수가 정해져있고, 사용도 가능함.
//class HPPotion : public IUsable , ICountable
//{
//private :
//	int count;
//	int point;
//public :
//	HPPotion(int count, int point) : count(count), point(point) {}
//	//override 키워드를 통해 해당 메소드가 기본 클래스(부모 클래스) 쪽에서 물려받은 값인지 판단 가능
//	void Use() override
//	{
//		cout << "포션을 사용했습니다. " << endl;
//		cout << point << "만큼 회복합니다!" << endl;
//	}
//};
////무기 스크롤 : 개수가 정해져있고, 사용도 가능함.
//class Weapon_Scroll : public IUsable, ICountable
//{
//private :
//	int count;
//	int value;
//public :
//	Weapon_Scroll(int count, int value) : count(count), value(value) {}
//	void Use() override
//	{
//		cout << "무기를 강화했습니다!" << endl;
//		cout << "공격력이 " << value << "만큼 증가합니다" << endl;
//	}
//};
//
////인터페이스식 설계의 장점
////1. 인터페이스는 두 객체 간의 중간 다리 역할을 진행함으로써 설계와 구현부를 나눌 수 있습니다.
//// => 기능 개발자는 설계를 전달받아 기능 구현만 하면 되 편합니다. -> 개발 시간에 대한 단축으로 이어집니다.
//
////2. 클래스 간의 결합도를 낮출 수 있습니다.
//// -> 코드 간의 종속성을 줄이고 유지보수성을 높일 수 있습니다.
//
////3. 코드의 표준화를 통한 정형화된 개발 가능
//// -> 통일된 규격의 설계가 제공되기 때문에 설계자는 기본적인 형태를 보장받을 수 있습니다.
//
//
//void ItemUse(IUsable* a) //일반적인 IUsable은 추상 클래스라 매개변수로 사용 불가
//						 //따라서 포인터를 통한 접근으로 처리
//{
//	a->Use();
//}
//
//int main()
//{
//	HPPotion* p = new HPPotion(1,50);
//	Weapon_Scroll* ws = new Weapon_Scroll(1, 3);
//	while (true)
//	{
//		cout << "어떤 아이템을 사용하시겠습니까? 1. 포션 2. 스크롤  3. 종료 >> ";
//		int check;
//		cin >> check;
//
//		//check의 값에 따라 사용할 설정을 고릅니다.
//		switch (check)
//		{
//		case 1:
//			//아이템이 다르지만 둘 다 IUsable을 통해 기능을 구현했기 때문에 문법 사용이 가능합니다.
//			// -> 인터페이스로 구현하면 특정 기능에 대한 문법을 통일하는 것이 가능하다.
//			ItemUse(p);
//			break;
//		case 2:
//			ItemUse(ws);
//			break;
//		case 3:
//			cout << "프로그램을 종료합니다." << endl;
//			goto NEXT; //goto를 이용하면 설계해놓은 레이블의 위치로 이동합니다.
//			//exit(0); //코드 종료 명령어
//		default:
//			cout << "해당 아이템은 없습니다!" << endl;
//		}
//	}
//	//레이블은 "이름 :"의 형태로 만들 수 있고 goto를 통해 해당 위치로 이동시킬 수 있습니다.
//	//일반적으로는 꼬이는 코드(스파게티 코드)를 발생시킬 수 있어 사용하지 않는 것을 권장합니다.
//	NEXT :
//		cout << "작업 탈출" << endl;
//
//
//
//	delete p, ws; //아이템 카운트가 0이 되면 delete되는게 가장 좋은 흐름(따로 구현해볼 것)
//	return 0;
//}