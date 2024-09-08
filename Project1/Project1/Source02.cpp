//#include <iostream>
//#include <iomanip> // setw() / setfill() / left / right 사용
//using namespace std; //std 네임스페이스를 사용하겟습니다.
////std::cout -> cout만 사용 가능
//
////입력 기능 cin
////cin 객체를 통해 데이터에 대한 입력을 진행할 수 있습니다.
//int main()
//{
//	int number; //정수를 저장할 변수 number 선언
//	cin >> number; //cin 객체를 통해 입력한 값을 스트림을 통해 변수로 전달
//	cout << number << endl;
//
//	//데이터 타입(Type) : 프로그래밍 언어에서는 컴퓨터가 해당 데이터를 판단하기 위한 기준으로
//	//타입을 만들어 놨습니다.
//
//	//이름      데이터   크기(byte)
//	//int		정수			4	   
//	//double    실수        8
//	//char      문자        1 
//	//bool      논리        1	
//	//[C++에서 bool 타입의 true, false 뽑기]
//	cout << boolalpha;//cout 객체는 bool 타입의 값을 확인 시
//	//true / false로 출력하도록 변경됩니다.
//	cout << true << "," << false << "," << true << endl;
//	cout << noboolalpha; //true /false 대신 1, 0 으로 출력합니다.
//	cout << true << "," << false << "," << true << endl;
//
//	//[C++에서 소수점 N자리까지 출력하기]
//	double a = 1.2345;
//	double b = 67.891011;
//	cout << a << endl;  //1.2345
//	cout << b << endl; //67.891
//	//실행 결과를 통해 cout에서 정해준 크기만큼 출력되는 걸 볼 수 있음.
//	cout.precision(8); //해당 코드를 통해 자리 수를 지정할 수 있습니다.
//	//단 실수 + 소수를 포함한 자리수를 의미합니다.
//	cout << a << endl;
//	cout << b << endl;
//
//	//[C++에서 공간 채우기]
//	int c = 1234567890;
//	int d = 1;
//	int e = 12;
//	cout << c << endl;
//	cout << d << endl;
//	cout << e << endl;
//
//	cout << c << endl;
//	cout <<setw(10) << d << endl; //setw(숫자)는 해당 넓이만큼 출력해주는 도구입니다.
//	cout <<setw(10) << e << endl; //내용이 없을 경우는 빈 칸으로 내용을 채웁니다.
//								  //이 기능을 사용하기 위해선 iomanip을 include해야 합니다.
//	//setfill()을 이용해 빈 공간에 빈 칸 대신 다른 단어를 채울 수 있습니다.
//	int f = 10;
//	int g = 5484;
//	int h = 7777;
//	cout << f << "-" << g << "-" << h << endl;
//	cout << setw(3) << setfill('0') << f << "-" << g << "-" << h << endl;
//	//f를 기준으로 3칸 출력, 빈칸은 0으로 설정한다.
//	//그 다음 - 뽑고 g 뽑고 - 뽑고 h 뽑는다.
//
//	//cout << setfill(' '); //빈 칸으로 처리
//
//	int i = 1;
//	int j = 22;
//
//	cout << right; //오른쪽 출력
//	cout << setw(10) << i << endl;
//	cout << left; //왼쪽 출력
//	cout << setw(10) << j << endl;
//
//	return 0;
//}