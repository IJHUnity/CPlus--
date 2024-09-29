//#include <iostream>
//#include <string>
//using namespace std;
//
////프로그램 사용자로부터 양의 정수를 계속 입력 받습니다.
////그리고 그 값을 계속 더하겠습니다.
////이 작업은 사용자가 0을 입력하기 전까지 계속됩니다.
////입력이 마무리 되면 그동안 입력한 모든 정수의 합을 출력
////하고 프로그램이 종료됩니다.
//
////실행 예시)
////양의 정수를 입력해주세요 >> -1
////해당 값은 양의 정수가 아닙니다.
////양의 정수를 입력해주세요 >> 5
////입력한 값 : 5
////양의 정수를 입력해주세요 >> 7
////입력한 값 : 7
////양의 정수를 입력해주세요 >> 0
////프로그램 종료!
////현재까지 입력한 값의 합 : 12
//int main()
//{
//	int value;
//	int sum = 0;
//
//	//1) while true를 이용해서 풀기
//	while (true)
//	{
//		cout << "양의 정수를 입력해주세요 >> ";
//		cin >> value;
//		if (value < 0)
//		{
//			cout << "해당 값은 양의 정수가 아닙니다." << endl;
//		}
//		else if (value == 0)
//		{
//			cout << "프로그램 종료!" << endl;
//			cout << "현재까지 입력한 값의 합 : " << sum << endl;
//			break;
//		}
//		else
//		{
//			cout << "입력한 값 : " << value << endl;
//			sum += value;
//		}
//	}
//	
//	//2) do - while로 풀기
//	do
//	{
//		cout << "양의 정수를 입력해주세요 >> ";
//		cin >> value;
//		if (value < 0)
//		{
//			cout << "해당 값은 양의 정수가 아닙니다." << endl;
//		}
//		else
//		{
//			cout << "입력한 값 : " << value << endl;
//			sum += value;
//		}
//	} while (value != 0);
//	////while문을 탈출하면 반복이 종료됬음을 의미하며 그 상황에 대한 코드를 작성한다.
//	cout << "프로그램 종료!" << endl;
//	cout << "현재까지 입력한 값의 합 : " << sum << endl;
//
//	//3) while문으로 풀기
//	value = 1; //value를 0으로 초기화하면 조건에서 바로 탈출하기에 1로 초기화
//	while (value != 0)
//	{
//		cout << "양의 정수를 입력해주세요 >> ";
//		cin >> value;
//		if (value < 0)
//		{
//			cout << "해당 값은 양의 정수가 아닙니다." << endl;
//		}
//		else
//		{
//			cout << "입력한 값 : " << value << endl;
//			sum += value;
//		}
//	}
//	cout << "프로그램 종료!" << endl;
//	cout << "현재까지 입력한 값의 합 : " << sum << endl;
//
//	return 0;
//}