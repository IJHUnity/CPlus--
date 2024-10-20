//#include <iostream>
//using namespace std;
////연산자 오버로딩을 이용한 복소수(Complex number) 구현
////복소수 : 숫자로 취급되는 허수의 식 a + ib로 표현합니다.
////a : 실수부
////b : 허수부
//
////복소수 연산
////덧셈 : (a + ib) + (c + id) = (a + c) + i(b + d)
////곱셈 : (a + ib) + (c + id) = (ac - bd) + i(ad + bc)
////나눗셈 : (a + ib) / (c + id) = (ac + bd) / (c² + d²) + i(bc - ad) / ( c² + d²) : 구현해볼 것
////켤레복소수(complex conjugate) :  a - ib (허수부의 부호가 반대로 처리됩니다.)
//
////연산자 오버로딩 규칙
////1. 기존에 존재하지 않는 연산자를 정의할 수 없습니다.
////2. 연산자의 피연산자(항) 수를 변경할 수 없습니다. ex) +에 대한 작업을 할때는 반드시 a+b 형태만 가능
////3. 연산자의 우선순위와 결합 방향을 변경할 수는 없습니다.
////4. 기본 데이터형에 대해서는 연산자 오버로딩을 진행할 수 없습니다.
////5. :: . ,  ? sizeof 등 연산자 오버로딩이 되지 않는 연산자가 존재합니다.
//class Complex
//{
//private:
//	int real_number; //실수
//	int imagine_number; //허수
//public:
//	//매개변수에 int r = 0과 같이 명시가 되어있다면, 함수 호출 시 값을 안적었을 경우
//	//해당 값이 자동으로 적용됩니다.(default parameter)
//	//ex) Complex c; 이렇게 클래스를 선언할 경우 내부의 real_number와 imagine_number는 0이 됩니다.
//	Complex(int r = 0, int i = 0) { real_number = r; imagine_number = i; }
//
//	//연산자 오버로딩을 통해 복소수 간의 연산을 구현합니다.
//	Complex operator + (const Complex& obj) const
//	{
//
//		return Complex(real_number + obj.real_number, imagine_number + obj.imagine_number);
//	}
//	Complex operator *(const Complex& obj) const
//	{
//		return Complex
//		(((real_number * obj.real_number) - (imagine_number * obj.imagine_number)) 
//			+
//		((real_number * obj.imagine_number) + (imagine_number * obj.real_number)));
//	}
//	//(ac - bd) + i(ad + bc)
//	void print() { cout << real_number << "+ i" << imagine_number << endl; }
//};
//
//int main()
//{
//	Complex c1(10, 5);
//	Complex c2(2, 4);
//	Complex c3 = c1 + c2;
//	Complex c4 = c1 * c2;
//	c3.print();
//	c4.print();
//
//	return 0;
//}