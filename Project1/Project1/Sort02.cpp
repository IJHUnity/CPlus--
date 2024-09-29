//#include <iostream>
//#include <string>
//using namespace std;
//
////제자리 정렬 / 선택 정렬(Selection Sort)
//
//int main()
//{
//	int a[] = { 7,5,1,4,3 };
//	const int LEN = sizeof(a) / sizeof(a[0]);
//	int temp; //데이터 교환용 변수
//
//	cout << "변경 전 " << endl;
//	for (int value : a)
//	{
//		cout << value << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < LEN - 1; i++)
//	{
//		int idxMin = i; //가장 작은 값에 대한 인덱스 번호(이 개념을 아는게 이 코드 구현의 가장 큰 핵심)
//
//		//[가장 작은 위치를 결정하는 반복]
//		for (int j = i + 1; j < LEN; j++) //i+1을 통해 현재 값보다 다음 값부터 나머지를 조사
//		{
//			if (a[j] < a[idxMin]) //가장 작다고 한 값보다 작은 상황이라면 그 값으로 변경
//			{
//				idxMin = j;
//			}
//		}
//		//가장 작은 위치가 결정이 됬으면 현재의 값과 그 위치의 값을 서로 변경합니다.
//		temp = a[idxMin];
//		a[idxMin] = a[i];
//		a[i] = temp;
//	}
//
//
//	return 0;
//}