#include <iostream>
using namespace std;
//반복문과 배열 2
//for문 익히기
int main()
{
	int Arrays[] = { 1,2,3,4,5,6,7,8,9,10 };
	//1. 일반적인 for문
	//배열은 0번부터 시작하기 때문에 주로 시작 값이 0으로 처리됩니다.
	//배열의 인덱스 범위 = 길이 -1이기 때문에  i < 길이;로 쓰이는 경우가 많습니다.
	//한번 작업 후 i의 값을 1 증가합니다.
	for (int i = 0; i < 10; i++)
	{
		cout << Arrays[i] << " ";
	}
	cout << endl;
	//2. for-each문 활용
	//배열처럼 순서대로 묶음으로 표현되는 데이터를 대상으로 사용 가능한 전용 문법입니다.
	for (int value : Arrays)
	{
		cout << value << " "; //여기서의 value는 배열이 가지고 있는 요소를 의미합니다.
	}
	cout << endl;

	//연습 문제)
	//아래에는 점수들을 나열해놓은 배열이 존재합니다. 해당 배열로부터 다음과 같은 값을 순서대로 출력합니다.
	//1. 해당 점수들의 평균
	//2. 해당 점수들 중 가장 큰 값
	//3. 해당 점수들 중 가장 작은 값

	int scores[] = { 84,92,77,81,100 };
	double avg;
	int max_value, min_value;

	//평균은 모든 숫자의 합에서 숫자의 개수를 나눈 값
	double total = 0; //숫자의 합을 하나 변수로 두겠습니다.
	for (int value : scores)
	{
		total += value; //total 변수에 scores가 가지고 있는 값(value)가 순서대로 더해질 것입니다.
	}
	avg = total / 5;
	//int 타입의 값을 나누기하면 소수점이 표현될 수 없기 때문입니다.
	//따라서 저런 경우라면 total을 double 타입으로 변경해서 사용하는 것이 좋습니다.
	//2가지 방법
	//1. total을 처음부터 double 타입으로 선언합니다.
	//2. int 타입으로 만들고 싶엇을 경우라면 다음과 같이 작성합니다.(캐스팅)
	//ex) int total = 0;
	//    avg = (double)total / 5; 이러면 total이 double 타입으로 바뀌어서 계산됩니다.
	
	cout << "점수들의 평균 : " << avg << endl;
	

	//특정 값(위치)에 접근하기
	//if를 활용해 조건을 걸러냅니다.
	//반복문을 통해 그 작업을 반복합니다.
	//이 경우는 foreach보다는 일반적인 for문으로 접근하는 것이 좋습니다.

	//최대 값 찾는 방법
	max_value = scores[0];
	//배열의 첫번째 값을 가장 큰 값이라고 가정합니다.
	for (int i = 0; i < 5; i++)
	{
		//현재의 최대값이 i번째 scores의 값보다 작다면? 그 값으로 설정
		if (max_value < scores[i])
		{
			max_value = scores[i];
		}
	}
	//반복을 진행해 현재의 값보다 더 큰 값이 나온다면 그게 가장 큰 값이라고 변경합니다.
	cout << "가장 큰 값 ?: " << max_value << endl;

	min_value = scores[0];
	//배열의 첫번째 값을 가장 작은 값이라고 가정합니다.
	for (int i = 0; i < 5; i++)
	{
		//현재의 최대값이 i번째 scores의 값보다 크다면? 그 값으로 설정
		if (min_value > scores[i])
		{
			min_value = scores[i];
		}
	}
	//반복을 진행해 현재의 값보다 더 큰 값이 나온다면 그게 가장 큰 값이라고 변경합니다.
	cout << "가장 작은 값 ?: " << min_value << endl;

	//전체 배열 출력
	for (int value : scores)
	{
		cout << value << " ";
	}

	return 0;
}