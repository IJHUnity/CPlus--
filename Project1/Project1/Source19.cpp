#include <iostream>
using namespace std;
//연산자 오버로딩(Operator Overloading)
//C++에서는 함수, 생성자 등을 재정의하는 오버로딩을 할 수 있었습니다.
//추가적으로 코드에서 사용되는 연산자 또한 재정의하는 것이 가능합니다.

//유의사항 : 기존의 기능과 다르게 구현하는 것은 안됩니다.

//사용 목적 : 클래스(객체) 간의 연산 표현 등을 수정해 편하게 사용하기 위함
class Point
{
private : 
	int x;
	int y;
public :
	Point(int x, int y) : x(x), y(y) {}
	void Info() { cout << "[" << x << "," << y << "]"; }

	//포인트 객체의 연산자 +에 대한 오버로딩
	Point operator+(const Point& p) //더해질 값이 변질되면 안되기 때문에 const, 객체에 접근하는 개념이기 때문에 &(reference) 활용
	{
		//더하기를 하면 두 개의 객체의 각각의 좌표의 합으로 결과가 나오면 된다.
		return Point(x + p.x, y + p.y);
		//따라서 각각의 좌표를 더한 후 그 결과를 생성자로써 return합니다.
	}
	//operator+는 객체와 객체의 합을 진행했기 때문에 Point 타입을 사용


	//operator ==은 객체와 객체 간의 가지고 있는 값에 대한 비교이기 때문에 bool 타입을 사용합니다.
	bool operator == (const Point& p)
	{
		//만약에 자신이 가진 x, y의 값이 비교할 대상인  p.x, p.y와 모두 일치한다면 같은 값입니다.
		if (x == p.x && y == p.y)
			return true;
		else
			return false;
	}

	//문제) p1과 p2에 대한 > , <를 구현해주세요.
	//조건) 자신이 가진 x가 상대방과 비교해 결과가 나오게 됩니다.

	//1. 연산자의 return 값이 무엇인가?
	//  >는 자신이 가진 x가 상대방의 x보다 크면 true입니다. >>결과가 true이기 때문에 데이터로는 bool
	//2. 바꾸려하는 연산자의 기호는 무엇인가?  >
	//3. 연산을 진행할 대상은 누구인가? Point 객체
	//4. 어떤 결과가 나오는가?  >는 자신이 가진 x가 상대방의 x보다 크면 true입니다
	bool operator >(const Point& p)
	{
		return x > p.x ? true : false;
	}
	bool operator <(const Point& p)
	{
		return x < p.x ? true : false;
	}

};

int main()
{
	Point p1(1, 10);
	Point p2(2, 8);
	Point p3 = p1 + p2;
	//p3를 p1과 p2의 좌표의 각각의 합으로 만들고 싶다.
	//하지만 +는 일반적으로 a + b의 형태를 가지고 있고, 각각의 값을 나눠서
	//계산하지 못한다.
	//객체에 대한 +가 따로 만들어져있지도 않다.

	//따라서 우리는 클래스 내부에 연산자의 기능을 수정하여 사용하기로 했다.(연산자 오버로딩)
	//p1.Info();
	//p2.Info();
	p3.Info();

	if (p1 == p2)
		cout << "p1과 p2는 서로 같습니다." << endl;
	else if (p1 > p2)
		cout << "p1이 더 큽니다." << endl;
	else if (p1 < p2)
		cout << "p1이 더 작습니다." << endl;
	else
		cout << "p1과 p2는 서로 다릅니다." << endl;



	return 0;
}