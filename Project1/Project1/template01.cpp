//#include <iostream>
//using namespace std;
//
////템플릿(Template)
////함수나 클래스를 개별적으로 작성하지 않고 여러 자료형으로 사용할 수 있도록
////설정할 수 있는 틀
//
////C++에서 설정할 수 있는 템플릿
////1. 함수 템플릿
//
////2. 클래스 템플릿
//
////장점 : 기능이 같지만 자료형이 달라 따로 구현해야 되는 부분을 구현하지 않아도 됨.(중복 설계를 막을 수 있음.)
////		 특정 자료형을 규정할 수 있어서 잘못된 값이 들어갈 경우 바로 오류로 뜨게 되 수정도 쉽습니다.
//
//
//int normal_sum_int(int a, int b) { return a + b; }
//float normal_sum_float(float a, float b) { return a + b; }
//double normal_sum_double(double a, double b) { return a + b; }
////기능은 같지만 데이터 형태가 달라서 각각 만들어야한다면 매우 불편합니다.
//
//template <typename T>
//T sum(T a, T b) { return a + b; }
////함수 템플릿 만들기
////   template <typename T>
////1. T 함수명(매개변수명) { return 값; }
////2. void 함수명(T 매개변수명) { }
////본인이 공통적으로 자료형을 써야하는 위치에 T를 대신 적는 것으로 여러 개의 타입을 처리할 수 있습니다.
//
////2. 공통적으로 작업을 하다보니 안되는 경우에 대한 처리를 따로 해줄 필요가 있습니다.
////ex) 숫자는 + 해도되지만 문장을 더하기할 수 없다.
//
//
//// 템플릿 특수화(template specialization)
////특정 자료형에 대해서 다른 처리를 하고 싶을 경우에 따로 작성하는 문법
//
//template<> //이 경우는 아래의 경우는 다음과 같이 작업합니다.라고 해석합니다.
//string sum<string>(string a, string b) //string 형태의 sum이 진행될 경우에는 해당 코드를 실행합니다.
//{
//	return "[string] 형태의 +는 진행할 수 없습니다.\n";
//}
//
//int main()
//{
//	cout << sum<int>(10, 5) << endl;
//	cout << sum<int>(10.5, 6.2) << endl; //설정을 따로 해줘야 int 형태가 아닌 값에 대한 오류를 잡을 수 있음.
//	cout << sum<float>(10.5, 6.2) << endl;//float 형태의 sum으로 변경
//	cout << sum<string>("음", "맛있어.") << endl;
//	return 0;
//}