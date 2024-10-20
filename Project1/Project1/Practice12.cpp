#include <iostream>
using namespace std;

//배열과 원소의 개수를 매개변수로 전달 받아 배열의 원소들 중 가장 큰 값을 반환하는
//MaxElement 함수 템플릿을 작성하시오.

template <typename T>
T MaxElement(T *a, int length) //배열은 주소, 따라서 포인터로 표현 가능
{
	T max = a[0]; //첫 값을 최대 값으로 설정합니다.

	//처음 값이 배열의 0번째 값이기 때문에 1부터 돌립니다.
	//for문 내에서 걸러지지 않았다면 0번째 값이 최대 값이기 때문
	for (int i = 1; i < length; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

//연습문제) 클래스가 제공되고 있습니다. 아래의 main 코드를 보고 CPoint 클래스를 완성하세요.
template <class T>
class CPoint
{
private:
	T  x;
	T  y;
public:
	CPoint(T a, T b) : x(a), y(b) { }

	CPoint operator+(const CPoint& cp)
	{
		return CPoint(x + cp.x, y + cp.y);
	}

	//클래스 내부에서 friend를 이용해 설계
	//friend 키워드가 붙으면 private 및 protected 멤버에 접근할 수 있는 권한이 부여됩니다.
	template <typename T>
	friend ostream& operator << (ostream& outputStream, CPoint<T>& cp)
	{
		cout << "(" << cp.x << ", " << cp.y << ")" ;
		return outputStream;
	}
};
int main()
{
	int array1[] = { 1,3,5,6,8 };
	double array2[] = { 3.14, 4.77, 1.28, 0.224, 8.997 };

	cout << MaxElement(array1, 5) << endl;
	cout << MaxElement(array2, 5) << endl;

	CPoint<int> a(1, 2);
	CPoint<int> b(3, 4);
	CPoint<int> c = a + b;
	cout << a << "+" << b << "=" << c << endl;
	//출력 결과  >> (1,2) + (3,4) = (5,6)

	return 0;
}