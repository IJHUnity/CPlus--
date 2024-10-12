#include <iostream>
using namespace std;
//데이터 저장 영역(컴퓨터 메모리 기준)
//1. 데이터 영역(Data) : 전역 변수와 정적 변수가 저장되는 영역
//2. 스택 영역(Stack) : 함수 호출 관련 데이터가 저장되는 영역(지역 변수, 함수)
//3. 힙 영역(Heap) : 동적으로 할당한 변수와 데이터가 저장되는 영역

int globalVariable = 10; //전역 변수 : 프로그램 전체에서 접근이 가능합니다.
						 //			  프로그램 시작 시에 메모리에 할당됩니다.
						 //			  프로그램이 종료될 때까지 유지됩니다.
						 //프로그램 전체에서 사용하는 핵심적인 데이터를 필요할 때 사용합니다.

int add(int param1, int param2) //매개 변수 
{
	int localVaraible = param1 + param2; //지역 변수
	return localVaraible;
}
void static_func()
{
	static int staticVariable = 0; //정적 변수 : 프로그램이 실행될 때 메모리에 할당됩니다.
								   //함수 내부에서 선언됩니다.(최초 1회 선언 후 그 다음부터는 선언 안함)
								   //함수가 종료되도 메모리에 남아있는 특징을 가지고 있습니다.
								   //-> 최초 1회 변수 생성 후, 그 변수가 유지되는 형태
	staticVariable += 1;
	cout << "정적 변수 : " << staticVariable << endl;
}
void local_func()
{
	int localVariable = 0;         //지역 변수 : 함수 내부에서 선언됩니다.
								   //함수가 종료될 경우 해당 변수는 소멸됩니다.
	localVariable += 1;
	cout << "지역 변수 : " << localVariable << endl;
}

int main()
{
	int local_arg1 = 10; //지역 변수
	int local_arg2 = 5; // 지역 변수
	
	int* dynamic_var = new int;
	//동적 할당   : C언어에서는 malloc() 함수를 통해 진행
	//             C++에서는 new 키워드를 통해 진행
	//변수의 동적 할당 만들기
	//자료형* 변수명 = new 자료형;
	*dynamic_var = 10;
	//*변수명 = 값;을 통해 동적할당한 데이터에 값 초기화
	cout << "동적 할당 : " << *dynamic_var << endl;

	cout  << "전역 변수 : " << globalVariable << endl;
	globalVariable = 7; //전역 변수의 값을 수정할 수 있습니다.
	cout << "전역 변수 : " << globalVariable << endl;
	int globalVariable = 8;
	//전역변수와 같은 이름의 지역 변수를 만들었을 경우
	//더이상 전역변수로써의 globalVariable을 사용할 수 없습니다.
	cout << "지역 변수 : " << globalVariable<< endl;

	cout << "전역변수 함수 5회 반복" << endl;
	for (int i = 0; i < 5; i++)
	{
		static_func();
	}
	cout << "지역변수 함수 5회 반복" << endl;
	for (int i = 0; i < 5; i++)
	{
		local_func();
	}

	delete dynamic_var;
	return 0;
}