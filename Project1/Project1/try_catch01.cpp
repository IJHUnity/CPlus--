//#include <iostream>
//using namespace std;
////C++의 예외 처리 메커니즘
////일반적으로 특정 상황에 대한 처리는 if문을 이용한 설계로
////진행이 됩니다.
////단 if문을 보고 해당 코드가 프로그램 흐름에 대한 설계인지
////예외를 처리하는 상황인지 구분하는 건 쉽지 않음.
////try - catch 문을 통해 예외 처리에 대한 설계를 따로 함으로써
////코드의 가독성을 확보할 수 있고, 단순하게 설계할 수 있습니다.
//
//// 1. try
////try
////{
//	 //예외가 발생할 수 있는 코드 작성 영역
////}
//// 2. catch
////catch(처리할 예외의 종류 표현)
////{
//	//해당 예외 발생 시 처리할 코드 작성 영역
////}
//
//#include <vector> //벡터 추가 , 벡터란 C++에서 제공해주는 배열에 추가,삭제,삽입 등의 기능이 추가된 도구입니다.
//#include <algorithm> //특정 알고리즘 로직 구현 시 필요한 헤더(C++에서 중급 이상의 문제를 풀 때 고려할 헤더)
//int main()
//{
//
//	//vector <int> i_vector {1,2,3,4,5}; //int 형태의 데이터 5개(1,2,3,4,5)를 가진 벡터 생성
//	//무한 반복
//	//while (true)
//	//{
//	//	i_vector.pop_back(); //벡터의 맨 뒤에 존재하는 요소를 삭제하는 기능
//	//}
//	//위의 코드에서 생길 수 있는 예외 상황은 무엇일까요?
//	//pop_back()을 통해 요소를 제거하다보면, 데이터 5개가 다 사라집니다.
//	//그 이후에 해당 명령을 실행하려면 요소가 없기 때문에 오류 발생
//	//언더플로우(underflow) : 변수가 표현 가능한 범위 미만의 값 저장 시 발생
//	//오버플로우(overflow) : 변수가 표현 가능한 범위를 초과하여 값 저장 시 발생	
//
//	//try - catch를 통해 예외 처리 작업(위의 코드를 주석해주세요.)
//
//	//vector <int> i_vector { 1,2,3,4,5 };
//	//try
//	//{
//	//	//예외가 발생했던 위치에 try 문으로 감싸줍니다.
//	//	while (true)
//	//	{
//	//		//사이즈가 0 이하인 경우(값을 뺄 수 없는 경우)
//	//		if (i_vector.size() <= 0)
//	//		{
//	//			throw string("[exception] i_vector underflow!!");
//	//			//throw를 통해 예외가 발생했음을 알리고 catch 쪽으로 해당 정보를 던집니다.
//	//			//try 블록에서 감지가 되어 catch 블록 쪽에서 처리를 진행하게 됩니다.
//	//		}
//	//		cout << "현재 벡터의 크기 : " << i_vector.size() << endl;
//	//		cout << "제거한 값 : " << i_vector.back() << endl;
//	//		i_vector.pop_back();
//	//	}
//	//}
//	//catch (string expn) //예외가 발생했다면 그 예외 문장을 받아서 해당 문장을 출력하겠습니다.
//	//{
//	//	cout << expn << endl;  
//	//}
//
//	//※ vector는 C++에서 제공해주는 표준 템플릿 라이브러리(Standard Templete Library : STL)에 있는 컨테이너입니다.
//	//1. 컨테이너는 다른 객체들을 보관하는 하나의 보관소 개념, 클래스 템플릿의 형태로 설계되어 있습니다.
//	//2. 템플릿이란 클래스를 만들 때 <int> 처럼 특정 데이터에 대해서만 만들 수 있게 도와줍니다.
//	// ex) vector<int>면 int형태의 벡터, vector<string>이면 string 형태의 벡터가 만들어져 쉽게 구현 가능
//	//(다음 주 수업 때 템플릿 직접 만드는 법 수업 예정)
//	
//	//1. vector의 초기화
//	
//	//vector<자료형> 변수명; //벡터 생성
//	vector<int> v;
//	//현재 크기 : 0
//
//	//vector<자료형> 변수명(숫자); //숫자만큼의 데이터를 가진 벡터를 생성, 내부의 값은 0으로 설정됩니다.
//	vector<int> v1(4);
//	//현재 크기 : 4
//	//들어 있는 값 : 0,0,0,0
//	
//	//vector<자료형> 변수명{ 요소1,요소2,요소3, ...}; //벡터 생성 후 작성한 값으로 내부 값이 설정됩니다. 
//	vector<int> v2{ 1,2,3 };
//	//현재 크기 : 3
//	//들어 있는 값 : 1,2,3
//	 
//	//vector<vector<자료형>> 변수명; //2차원 벡터 생성
//	vector<vector<int>> v3;
//	//현재 크기 : 0
//	//들어 있는 값 : 0
//	//형태 : 2차원 배열
//	
//	//vector<자료형>변수명.assign(횟수, 초기화할 값); // 초기화할 값을 횟수만큼 내부에 넣어서 벡터를 생성합니다.
//	vector<int> v4;
//	v4.assign(5, 7);
//	//현재 크기 : 5
//	//들어 있는 값 : 7,7,7,7,7
//	
//	//vector<자료형> 변수명[] = {,}; // 2차원 벡터 생성(이 경우 열은 고정되고, 행은 변경됩니다.)
//	vector<int> v5[] = { {1,2},{3,4},{5,6}};
//	cout << v5->size() << endl;
//	
//	//2. iterator 객체를 이용한 vector 출력
//	//1. <algorithm> 헤더 추가
//	//for_each 함수 사용 가능
//	//for_each는 컨테이너의 시작 부분부터 끝 부분까지, 컨테이너가 가지고 있는
//	//요소를 순차적으로 반복할 때 사용하는 함수입니다.
//	 
//	//for_each(벡터.begin(), 벡터.end(), [&](자료형& 변수명) { });
//	cout << "v4 벡터 출력 begin -> end" << endl;
//	for_each(v4.begin(), v4.end(), [&](int& n)
//	{
//		cout << n  << " ";
//	});
//	cout << endl;
//	cout << "v2 벡터 출력(reverse) rbegin -> rend" << endl;
//	for_each(v2.rbegin(), v2.rend(), [&](int& n)
//	{
//			cout << n << " ";
//	});
//	//2. 헤더 없이 사용(iterator 사용)
//	//iterator는 컨테이너를 반복할 수 있는 기능을 가진 객체입니다.
//	//1. 해당 컨테이너와 같은 데이터를 다루는 iterator 객체를 생성합니다.
//	//2. iterator 객체는 컨테이너의 시작 값을 가리킬 것입니다.
//	//3. for문을 이용해 iterator의 시작 부분부터 끝 지점까지 순차적으로 작업을 처리하겠습니다.
//	cout << endl;
//	vector<string> v6{ "레몬에이드","멜론소다","요거트스무디","아이스 아메리카노" };
//	vector<string>::iterator iter; //iterator는 요소를 가리키는 포인터라고도 할 수 있음.
//	cout << "v6 벡터 출력 (iterator) begin -> end" << endl;
//	for(iter = v6.begin(); iter != v6.end(); iter++)
//	{
//		cout << *iter << " ";//가리키고 있는 값을 참조연산자(*)를 통해 값으로 변경해서 뽑습니다.
//	}
//	cout << endl;
//	vector<string>::reverse_iterator r_iter; //역순으로 처리하는 reverse_iterator
//	cout << "v6 벡터 출력 (reverse_iterator) rbegin -> rend" << endl;
//	for (r_iter = v6.rbegin(); r_iter != v6.rend(); r_iter++)
//	{
//		cout << *r_iter << " ";//가리키고 있는 값을 참조연산자(*)를 통해 값으로 변경해서 뽑습니다.
//	}
//	return 0;
//}