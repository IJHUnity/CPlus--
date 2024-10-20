//#include <iostream>
//using namespace std;
////클래스 템플릿
////클래스 내부의 멤버 변수의 타입에 대해 template로 구현해는 경우에
////사용합니다.
//
////객체 생성 시에 타입을 정해줍니다.
////유의 사항 : 클래스의 멤버 함수가 클래 내부에서 선언되었을 경우와
////			 클래스의 멤버 함수가 클래스 외부에서 선언되었을 경우를
////			 구별해야 합니다.
//
////template <class T>를 작성 후 클래스를 구현합니다.
//template <class T>
//class Person
//{
//private:
//	string name;
//	T height; //자료형이 여러개 요구되는 멤버 변수를 대상으로 T로 변경
//public:
//	Person(string name, T height) : name(name), height(height) {}
//
//	void print() { cout << "name : " << name << " height : " << height << endl; }
//
//	void SetName(string name)
//	{
//		this->name = name;
//	}
//	void GetName() { return name; }
//
//	void SetHeight(T height) //매개변수를 T로 사용 가능
//	{
//		this->height = height;
//	}
//	T GetHeight() { return height; } //함수의 return 형태를 T로 사용 가능
//};
//
//
//template <class T>
//class Item
//{
//private :
//	string name;
//	T value;
//public :
//	Item(string n, T v) : name(n), value(v) {}
//	void SetValue(T v);
//	T GetValue();
//};
//
//int main()
//{
//	//할당할 경우 클래스명<자료형>*로 작성합니다.
//	Person<int>* person1 = new Person<int>("Mr.Hub", 182);
//	Person<string> person2("Jake", "1.8m");
//
//	person1->print();
//	person2.print();
//	delete person1;
//	return 0;
//}
//
////리팩토링 등을 활용해 외부에 템플릿 멤버 함수를 만드는 경우라면
////template에 대한 선언과 클래스의 형태까지 다 적어줘야 합니다.
//template<class T>
//void Item<T>::SetValue(T v)
//{
//}
//
//template<class T>
//T Item<T>::GetValue()
//{
//	return T();
//}
