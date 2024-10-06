//#include <iostream>
//#include <string>
//using namespace std;
//
////문제1) 함수 ArraySearch에 정수형 배열과 배열의 길이, 그리고 배열 안에 있는 값 하나를 전달합니다. 
////해당 값이 존재한다면 해당 값을 출력하고 없다면 "해당 값이 없습니다."를 출력하세요.
//void ArraySearch(int arrays[], int length, int value)
//{
//	//배열의 길이만큼 반복
//	for (int i = 0; i < length; i++)
//	{
//		//전달받은 값이 배열의 i번째 값과 같다면!
//		if (value == arrays[i])
//		{
//			cout << value << endl;
//			return;
//			//void에서는 return 값을 안쓰지만 return만 사용하는 것은 가능합니다.
//			//return은 함수를 종료하는 기능
//		}
//	}
//	//반복이 다 끝낫는데 값이 없으면 없는 것
//	cout << "해당 값이 없습니다." << endl;
//}
////void ArraySearch(int arrays[], int length, int value)
////{
////	bool isExist = false;
////	//존재하는가에 대한 true, false를 판단할 변수 isExist
////	//반복을 통해 해당 값이 있는지 없는지만 판단합니다.
////	for (int i = 0; i < length; i++)
////	{
////		if (value == arrays[i])
////		{
////			isExist = true; //해당 값은 존재합니다.
////			break;//반복 종료
////		}
////	}
////	//존재 여부에 따라 코드 설계를 따로 합니다.
////	if (isExist == true)
////		cout << "해당 값이 없습니다." << endl;
////	else
////		cout << value << endl;
////}
//
//
////문제 2) 위의 코드를 활용한 함수 ValueIndexSearch 함수를 만듭니다.
////해당 함수는 전달한 값이 배열에 존재한다면, 해당 값이 몇번째 값인지 출력합니다.
//void ValueIndexSearch(int arrays[], int length, int value)
//{
//	int idx = 0; //몇번째 값인지 확인하기 위한 변수 
//	bool isExist = false; //해당 값이 존재하는지에 대한 여부
//	for (int i = 0; i < length; i++)
//	{
//		idx++; //일반적인 경우에는 카운트 증가(처음에 발견될 수도 있으니 증가부터 시작)
//		if (value == arrays[i]) //값이 존재한다면
//		{
//			isExist = true; //존재한다고 체크
//			break; //작업 종료
//		}
//	}
//	if (isExist == true)
//		cout << "해당 값은 " << idx << "번째 값입니다." << endl;
//	else
//		cout << "해당 값은 존재하지 않습니다." << endl;
//}
//////(Practice05.cpp)
//// 문제3) 배열을 전달받아서 그 배열을 오름차순으로 정렬하는 함수 Orderby를 설계하고 결과를 확인합니다.
////사용할 배열의 값은 {1,9,5,7,8} 입니다.
//
//void Orderby(int arrays[], int size)
//{
//	//삽입 정렬을 이용한 풀이
//	//삽입 정렬은 배열을 두 개의 부분으로 나누어서 왼쪽을 정렬된 부분, 오른쪽을 정렬되지 않은 부분으로 설정합니다.
//	//그 후 정렬되지 않은 부분에서 하나하나를 꺼내 정렬된 부분에 적절한 위치에 삽입해주는 방식
//	//배열 반복(첫번째 값은 항상 정렬되어 있는 상태로 취급) -> 요소 선택 -> 비교 및 이동 -> 삽입
//	//위의 과정을 배열의 모든 요소를 대상으로 반복합니다.
//	//주로 크기가 작거나, 거의 정렬이 되어있는 배열에서 효과적입니다.
//	//배열의 두번째 값부터 시작하기 때문에 시작 값이 0이 아닌 1로 시작
//	for (int i = 1; i < size; i++)
//	{
//		int key = arrays[i]; //현재의 위치의 배열 값을 하나의 키로 보겠습니다.
//		int l_idx = i - 1; //키 왼쪽에 대한 인덱스 값
//		//현재 키보다 큰 값들을 오른쪽으로 이동
//		//l_idx가 0 이상이고 arrays[l_idx]가 key보다 큰 동안 반복합니다.
//		while (l_idx >= 0 && arrays[l_idx] > key)
//		{
//			arrays[l_idx + 1] = arrays[l_idx]; //값 이동
//			--l_idx; //왼쪽으로 이동
//		}
//		//키 적용
//		arrays[l_idx + 1] = key;
//
//		//작업한 기준으로 값 뽑아보기
//		cout << i << "번째 작업 중" << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << arrays[i] << " ";
//		}
//		cout << endl;
//	}
//
////[완성 결과 출력]
//	cout << "작업 종료" << endl;
//	for(int i = 0; i < size; i++)
//	{
//		cout << arrays[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	//int arrays[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int length = sizeof(arrays) / sizeof(arrays[0]);
//	//int value;
//	//cout << "값을 입력해주세요 >> ";
//	//cin >> value;
//	//ArraySearch(arrays, length, value);
//
//	int arrays2[] = { 1,9,5,7,8};
//	int size = sizeof(arrays2) / sizeof(arrays2[0]);
//	Orderby(arrays2, size);
//	return 0;
//}