#include <iostream>
using namespace std;

class Sample
{
private :
	int value;
public :
	Sample(int v = 0) { value = v; }

	//++a일 경우 a를 1 증가시키고 a에 대한 연산을 진행합니다.
	Sample& operator++()
	{
		value += 1; //value 값 1 증가 후
		return (*this); //자기 자신(Sample로 만든 객체)을 return
	}
	//a++일 경우 a에 대한 연산을 진행한 뒤 a의 값을 1 증가
	Sample operator++(int)
	{
		Sample temp(value); //임시 값 만들기
		value += 1; //value 1 증가
		return temp; //임시 값 내보내기
	}
	void Print() { cout << value << endl;  }
	int GetValue() const { return value; } //const로 데이터 요구하니까 const 붙이기
};

//std::ostream 영역에 있는 연산자 <<를 Sample을 대상으로 진행할 경우에 대한 수정을 진행합니다.
std::ostream& operator << (std::ostream& outputStream, const Sample& obj)
{
	cout << "Sample Object : " << obj.GetValue() << endl;
	return outputStream; //outputStream은 cout 객체를 의미합니다.
}

int main()
{
	Sample s; //value = 0;
	Sample s1(5); //value = 5;
	//s++;
	//s.Print();
	//++s1;
	//s1.Print();
	//이 방식으로는 연산 이후 값이 증가하는 후위 연산을 보기가 어렵다.
	//따라서 이를 확인하기 위해서는 cout에 대한 작업을 처리합니다.
	cout << s++ << endl;
	cout << ++s1 << endl;
	//cout의 경우는 프로그램 전체에서 사용될 수 있는 기능이기에 전역에서 수정을 진행합니다.
	s.Print();

	return 0;
}