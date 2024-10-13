//#include <iostream>
//using namespace std;
////클래스 상속
////클래스는 객체를 이용해 계층 구조에 대한 표현이 가능합니다.
////데이터에 대한 구조 설계에 반드시 사용되는 기법
////공통적인 부분을 묶고 세부적인 부분을 따로 설계할 수 있습니다.
//
//
////1. is a 상속 : ~는 ~이다로 해석이 가능한 데이터에 대한 상속
////				상위 구조와 하위 구조를 분명하게 구별할 수 있습니다.
////ex) 슬라임은 몬스터다.
////class Slime : public Monster {}와 같은 방식으로 만듭니다.
//class Animal
//{
//public :
//	string name;
//	int age;
//};
//class Penguin : public Animal//Animal을 연결해서 만드는 Penguin 클래스
//{
//public :
//	void info()
//	{
//		cout << "이름 : " << name << endl; //Animal이 가지고 있는 name 사용 가능
//		cout << "나이 : " << age << endl;
//		cout << "특징 : 수영을 미친듯이 잘합니다." << endl;
//	}
//};
//class Eagle : public Animal
//{
//public:
//	void info()
//	{
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//		cout << "특징 : 비행을 미친듯이 잘합니다." << endl;
//	}
//};
////2. has A 상속 ( ~는 ~를 가지고 있다.)
//class ItemTable //아이템 테이블
//{
//public :
//	Item* item_list = NULL;
//	int item_count;
//
//	void setItem_list(int count) //개수를 넣어주면 그 개수만큼의 배열 생성
//	{
//		item_count = count;
//		item_list = new Item[item_count];
//	}
//	void setIdxItem(int idx)
//	{
//		if (idx >= 0 && idx < item_count) //0에서 item_count -1까지의 범위에서만 설정 가능
//		{
//			cout << "아이템의 이름을 입력해주세요";
//			cin >> item_list[idx].name;
//			cout << "아이템의 설명을 입력해주세요.";
//			cin >> item_list[idx].description;
//		}
//		else
//		{
//			cout << "범위를 이탈했습니다. 다시 입력을 진행해주세요 >>";
//			int new_idx;
//			cin >> new_idx;
//			setIdxItem(new_idx);
//		}
//	}
//	void showAllItemList()
//	{
//		if (item_list == NULL)
//		{
//			cout << "아이템이 없습니다." << endl;
//			return;
//		}
//		for(int i = 0; i < item_count; i++)
//		{
//			cout << "아이템 이름 : " << item_list[i].name << endl;
//			cout << item_list[i].description << endl;
//		}
//	}
//};
//class Item //아이템
//{
//public :
//	string name; //아이템 이름
//	string description; //아이템 설명
//};
//
//
//int main()
//{
//	return 0;
//}