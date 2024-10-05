//#include <iostream>
//using namespace std;
//int bigger(int a, int b)
//{
//	//1. 삼항 연산으로 풀기  식 ? 식이 맞았을 경우의 값 : 식이 틀렸을 경우의 값
//	//return a < b ? b : a; //a < b가 맞다면 b를 아니면 a를 뽑겠습니다.
//	//2. if문으로 풀기
//	if (a < b)
//	{
//		return b;
//	}
//	else
//	{
//		return a;
//	}
//}
//void GetArea(int a, int b)
//{
//	cout << "직사각형의 넓이 : " << a * b << endl;
//}
//int main()
//{
////문제 1) 숫자 2개를 넣으면 둘 중 더 큰 숫자가 대입되는 함수 bigger를 설계하시오.
//	int x = bigger(3, 5);
//	int y = bigger(100, 60);
//	int z = bigger(40, 70);
//	cout << x << y << z << endl;
////문제2) 가로와 세로의 길이를 입력받아서 직사각형의 넓이를 출력하는 함수 GetArea를
////설계하고 결과를 확인합니다. (입력할 가로와 세로의 값은 각각 10으로 설정합니다.)
//	int v = 10; //가로
//	int h = 10; //세로
//	GetArea(v, h);
////문제3) 배열을 전달받아서 그 배열을 오름차순으로 정렬하는 함수 Orderby를 설계하고 결과를 확인합니다.
////		사용할 배열의 값은 {1,9,5,7,8} 입니다.
//	return 0;
//}