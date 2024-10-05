#include <iostream>
#include <string>
using namespace std;

//문제1) 함수 ArraySearch에 정수형 배열과 배열의 길이, 그리고 배열 안에 있는 값 하나를 전달합니다. 
//해당 값이 존재한다면 해당 값을 출력하고 없다면 "해당 값이 없습니다."를 출력하세요.
void ArraySearch(int arrays[], int length, int value)
{
	//배열의 길이만큼 반복
	for (int i = 0; i < length; i++)
	{
		//전달받은 값이 배열의 i번째 값과 같다면!
		if (value == arrays[i])
		{
			cout << value << endl;
			return;
			//void에서는 return 값을 안쓰지만 return만 사용하는 것은 가능합니다.
			//return은 함수를 종료하는 기능
		}
	}
	//반복이 다 끝낫는데 값이 없으면 없는 것
	cout << "해당 값이 없습니다." << endl;
}
//void ArraySearch(int arrays[], int length, int value)
//{
//	bool isExist = false;
//	//존재하는가에 대한 true, false를 판단할 변수 isExist
//	//반복을 통해 해당 값이 있는지 없는지만 판단합니다.
//	for (int i = 0; i < length; i++)
//	{
//		if (value == arrays[i])
//		{
//			isExist = true; //해당 값은 존재합니다.
//			break;//반복 종료
//		}
//	}
//	//존재 여부에 따라 코드 설계를 따로 합니다.
//	if (isExist == true)
//		cout << "해당 값이 없습니다." << endl;
//	else
//		cout << value << endl;
//}





//문제 2) 위의 코드를 활용한 함수 ValueIndexSearch 함수를 만듭니다.
//해당 함수는 전달한 값이 배열에 존재한다면, 해당 값이 몇번째 값인지 출력합니다.
void ValueIndexSearch(int arrays[], int length, int value)
{

}
int main()
{
	int arrays[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(arrays) / sizeof(arrays[0]);
	int value;
	cout << "값을 입력해주세요 >> ";
	cin >> value;
	ArraySearch(arrays, length, value);

	return 0;
}