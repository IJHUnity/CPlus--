//#include <iostream>
//#include <string>
//using namespace std;
//
////조건문과 연산자
////조건문 등의 문법을 사용하려하면 조건을 세울 때 상황에 맞는 연산자를 사용할 수 있어야 합니다.
////해당 예제에서는 유형 별로 사용되는 연산자의 예시를 확인합니다.
//int main()
//{
//	//1. 짝수 조건 / N의 배수 조건
//	// a % b는 a에 b를 나누고 남은 값을 의미합니다.
//	// 남은 값이 0이라는 건 ~의 배수를 의미하며, 2의 배수는 짝수이기에 짝수 조건으로도 사용됩니다.
//	int i = 10;
//	if (i % 2 == 0)
//	{
//		cout << "짝수" << endl;
//	}
//	if (i % 3 == 0)
//	{
//		cout << "3의 배수" << endl;
//	}
//	//2. 거스름돈 개념 
//	//%는 나누고 남은 값이기 때문에 거스름돈 같은 값을 남기는 작업에서 핵심적으로 사용됩니다.
//	//단순히 물건을 구입만 하는 경우라면 빼기(-)로 계산해도 됩니다.
//	int money = 20000;
//	int goods = 7000;
//	int count = money / goods; //구매한 개수
//	int left = money % goods;  //구매하고 남은 값
//	cout << "현재 가지고 있는 돈 : " << money << endl;
//	cout << "구매한 물품의 개수 : " << count << endl;
//	cout << "거스름돈 : " << left << endl;
//
//	//비트 연산자(ex) 1010, 1110
//	//2진수에 대한 계산을 처리할 시 연산자가 필요합니다.
//
//	unsigned int a = 0b1010;
//	unsigned int b = 0b1100;
//	//tip) unsigned는 음수를 표현하지 않음을 의미합니다.
//	//     음수로 처리하던 데이터만큼 양수를 계산할 수 있습니다.
//	//ex) int가 표현하는 데이터 범위 = -2,147,483,648 ~ 2,147,483,647
//	//	  unsigned int 표현 범위  =  0 ~ 4,294,967,295
//	//cout << INT_MAX << endl; //c++에서는 최대 최소 값 제공 
//	//cout << INT_MIN << endl;
//	//cout << UINT_MAX << endl;
//	cout << a << endl;
//	cout << b << endl;
//
//	unsigned int AandB = a & b;
//	//1010
//	//1100 각 라인에 1이 겹치면 1 아니면 0
//	//1000 -> 따라서 이 값은 8
// 
//	//더 쉽게 계산해보기
//	//결국 2진수라는 건 2의 제곱수의 나열입니다. 따라서 나열해서 푸는게 더 쉽다!
//	//10 -> 8 + 2
//	//12 -> 8 + 4
//	//겹치는 값? = 8
//	cout << AandB << endl;
//	int k = 57 & 24;
//	cout << k << endl;
//	unsigned int AorB = a | b;
//	//1010
//	//1100 각 라인에 1이 한 개라도 있으면 1 아니면 0
//	//1110 -> 14
//	//10 -> 8     + 2
//	//12 -> 8 + 4 + 2
//	//      8 + 4 + 2 = 14
//	cout << AorB << endl;
//	unsigned int AxorB = a ^ b; //c++에서 a ^ b는 a의 b 제곱이 아닙니다.
//	//1010
//	//1100 각 라인이 값이 일치하면 0 아니면 1 (배타적 논리합 : 암호학의 기초(컴퓨터 보안 과목))
//	//0110
//	cout << AxorB << endl;
//	unsigned int complementA = ~a;
//	//~는 연산 결과를 반대로 처리하는 기능을 가지고 있습니다.
//	//1010 -> 0101
//	//1010과 0101은
//	//1010
//	//0101
//	//2진 수의 각 자리 수가 1이 되기 위해 더해줘야하는 수라는 관계를 가지고 있음.
//	//(1의 보수 : 2진수의 각 자릿 수가 1이 되기 위해 더해줘야 하는 수)
//
//
//	//조건식 AND ,OR , NOT
//
//	int value1 = 100;
//	int value2 = 35;
//
//	// A and B : 식 A의 결과와 식 B의 결과가 모두 true(일치)하는 경우 결과가 true
//	if (value1 % 5 == 0 && value2 % 5 == 0)
//	{
//		cout << "A and B!" << endl;
//	}
//
//	//A or B : 식 A의 결과와 식 B의 결과 중 하나라도 일치하는 경우 true
//	string rank = "VIP";
//	string game_rank = "BRONZE";
//
//	//랭크가 VIP 등급이거나 , 게임 등급이 골드인 경우 
//	if (rank == "VIP" || game_rank == "GOLD")
//	{
//		cout << "혜택 보너스(+ 300%) 적용 중!" << endl;
//	}
//
//	//연습 문제) 초를 입력하면 초를 시 , 분 , 초로 출력하는 프로그램을 구현하시오.
//	//초는 양의 정수로 계산합니다.
//	//Tip) 1분 = 60초 , 1시간 = 60분
//
//	int input_second;
//	int hour, minute, second;
//	cout << "초 입력 : ";
//	cin >> input_second;
//
//	if (input_second > 0)
//	{
//		hour = input_second / 3600; //전체 초를 3600으로 나눈 몫이 시간이 됩니다.
//
//		input_second = input_second % 3600; //시를 계산한 후 나머지 값을 대입
//
//		minute = input_second / 60; //시를 60으로 나눈 몫이 분이 됩니다.
//		second = input_second % 60; //시에서 분을 계산하고 남은 나머지는 초가 됩니다.
//
//		//cout << hour << "시 " << minute << "분" << second << "초" << endl;
//
//		//시 분 초가 다 0초보다 커야만 출력하게 설정
//		if (hour != 0) //시가 0이 아니라면
//		{
//			cout << hour << "시간 ";
//		}
//
//		if (minute != 0) //if를 두번 쓰면 순서대로 조건을 다 체크합니다.(else if의 경우는 하나가 결정되면 실행 안됨)
//		{
//			cout << minute << "분 ";
//		}
//
//		if (second != 0)
//		{
//			cout << second << "초";
//		}
//
//	}
//	else
//	{
//		cout << "초는 양의 정수만 입력합니다." << endl;
//	}
//
//
//
//
//	return 0;
//}