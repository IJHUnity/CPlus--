//#include <iostream>
//#include <string>
//using namespace std;
////가상 함수(virtual) : 기본 클래스 내에서 선언되는 이 함수는 파생 클래스에 의해 재정의되는 함수를 말합니다.
////아래의 코드에서는 다음과 같은 작업을 진행합니다.
////1. 기본(부모) 클래스 parent를 통해 자식 클래스의 값을 가리켰습니다.
////2. parent를 통해 v_func()와 func()를 호출합니다.
////3. virtual 키워드가 붙었던 v_func()의 경우는 child에서 만든 함수 v_func()에 접근합니다.
////4. virtual 키워드가 붙지 않은 func()의 경우는 parent에서 만든 함수 func()에 접근합니다.
//
////포인터를 쓰지 않고 그냥 parent를 통해 child의 값을 대입할 경우에는 virtual과 상관없이 parent의 함수에 접근됩니다.
////이는 함수는 만들어지면 메모리에서 따로 그 위치가 저장되는 특징이 잇어 해당 위치로 계속 접근하기 때문입니다.
////단 virtual을 사용할 경우 수정한 쪽의 위치로 접근하도록 설정이 바뀌게 됩니다.
//
//
////가상 함수를 사용해야 하는 이유
////객체 지향 프로그래밍 설계 기법인 다형성(metamorphism)에 대한 구현을 위해 사용합니다.
//
////다형성이란? 하나의 객체로 여러 개의 데이터를 표현하는 것을 의미합니다.
////매번 객체를 각각 만들어주는 것보다 하나의 객체를 통해 여러 형태를 표현해주는 것이
////불필요한 중복 설계도 피할 수 있고, 함수 기능 구현도 더 수월해집니다.
//
//class parent
//{
//public :
//	virtual void v_func() { cout << "(v_func)parent" << endl; }
//	void func() { cout << "(func)parent" << endl; }
//};
//class child : public parent
//{
//public :
//	void v_func() { cout << "(v_func)child" << endl; }
//	void func() { cout << "(func)child" << endl; }
//};
////========================================================================================
//class Weapon
//{
//public :
//	virtual void attack() {	}
//};
//class Sword : public Weapon
//{
//public :
//	//오버라이드(override) : 기존의 함수를 재정의하는 것을 의미합니다.
//	void attack() { cout << "Weapon의 attack을 override한 Sword의 공격!"; }
//	void attack2() { cout << "Sword 개인이 가진 공격 기능 " << endl; }
//};
//class Gun : public Weapon
//{
//	void attack() { cout << "Weapon의 attack을 override한 Gun의 공격!"; }
//};
////========================================================================================
//
//int main()
//{
//	parent p1;
//	parent* p2 = new parent();
//	child c1;
//	child* c2 = new child();
//
//	//p1.func();  p1.v_func();
//	//p2->func(); p2->v_func();
//	//c1.func();  c1.v_func();
//	//c2->func(); c2->v_func();
//
//	parent* p3;
//	p3 = &c1; //parent를 통해 child를 가리키겠습니다.
//	p3->func();
//	p3->v_func();
//
//	//Weapon 클래스를 만들면서 생성을 자식의 형태로 진행하면
//	//그 자식이 만든 기능을 쓸 수 있습니다.
//	Weapon* w = new Sword();
//	w->attack();
//	//다른 자식의 형태로 초기화를 다시 진행하면 다른 기능을 사용할 수 있습니다.
//	w = new Gun();
//	w->attack();
//	//결과적으로 클래스 3개를 만들지 않고 클래스의 형태만 바꿔서 하나의 객체로 여러 개의 표현이 가능해졌습니다.
//
//	delete p2, c2;
//
//	return 0;
//}