//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////다음 화면을 출력하세요.
////       123
////X       45
////----------
////		 615
////      4920
////----------
////      5535
//int main()
//{
//	int a = 123;
//	int b = 45;
//
//	cout << setw(10) << 123 << endl;
//	cout << "X" << setw(9) << 45 << endl;
//	cout << setw(10) << setfill('-') <<""<< endl;
//	cout << setw(10) << setfill(' ') << a * (b % 10) << endl;
//	cout << setw(10) << a * (b / 10 * 10) << endl;
//	cout << setw(10) << setfill('-') << "" << endl;
//	cout << setw(10) << setfill(' ') << a * b << endl;
//	
//	//문제 풀이 방식
//	//1. setw , setfill을 최대한 활용
//	//2. 기본적인 연산자 이해하기
//	//   a + b (더하기) , a - b (빼기), a * b (곱하기), a / b (나누기) , a % b (나머지)
//
//
//	return 0;
//}