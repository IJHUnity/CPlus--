#include <iostream>
#include <string>
using namespace std;

// base class : Person
// member variable(멤버 변수 : 필드) : name, age
// member function(멤버 함수 : 메소드) : getData, putData
// derived class : Professer, Student

// Professor class
// member variable : publications 와 cur_id (둘다 정수형 데이터)
// getData() : 교수의 name , age  publications , cur_id 순으로 입력을 받습니다.
// putData() : 교수의 name, age , publications , cur_id가 출력됩니다. 

// Student class
// member variable : marks (크기가 6인 배열), cur_id
// getData() : 학생의 name, age, marks(성적 배열) 을 입력받습니다.
// putData() : 학생의 name, age, marks가 출력됩니다.

//조건 1) 가상 함수, 생성자 , 정적 변수를 사용해 이 문제를 해결하세요.
//     필요하다면 더 많은 멤버를 만들어도 상관 없습니다.
//조건 2) 교수 또는 학생 클래스의 객체가 생성될 때마다 순차적인 ID를 할당해야 합니다.

//제약 조건) : 제약 조건에 대한 부분은 직접적인 구현이 아닌 값을 테스트 할 때
//            해당 범위의 값을 쓰지 말라는 의미이므로 따로 구현하지 않아도 됩니다.

// 1 <= 이름의 길이 <= 100
// 1 <= 나이 <= 80
// 1 <= 출판물 <= 1000
// 0 <= 각 과목별 학생의 성적 <= 100

//입력 형식
//첫번째 줄에는 생성되는 객체의 수를 입력합니다.
//다음에는 1과 2 중에 입력을 진행합니다. 이 입력은 1은 교수, 2는 학생임을 나타냅니다.
//1을 고른 경우
//교수의 이름 나이 논문을 순서대로 입력합니다.
//2를 고른 경우
//학생의 이름, 나이 , 성적을 입력합니다.(성적은 총 6과목)

//출력 형식
//교수의 경우 
//교수이름 나이 논문 순번
//학생의 경우
//학생이름 나이 성적의 합 순번
class Person
{
private :
	string name;
	int age;
public :
	virtual void getData() = 0; //가상함수에 = 0;이 붙으면 따로 구현하지 않겠다는 의미의 순수 가상함수
	virtual void putData() = 0;
	//학생도 교수도 둘다 이름을 입력받기 때문에 person에 구현
	void setName()
	{
		cin >> name;
	}
	void setAge()
	{
		cin >> age;
	}
	//이름과 나이를 private로 막아줬기 때문에 접근을 위한 변수
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
};

class Professor : public Person
{
private : 
	int publications;
	static int cur_id; //static을 이용해 정적 변수로 처리(조건 2에 적합한 멤버)
public :
	Professor() : publications(0) {} //publications을 0으로 초기화

	void getData()
	{
		setName(); //이름 입력(Person의 기능)
		setAge();  //나이 입력
		setPublications(); //출판물 입력
	}
	void putData()
	{
		cout << getName() << " " << getAge() << " " << getPublications() << " " << getCur_id() << endl;
	}
	void setPublications()
	{
		cin >> publications;
	}
	int getPublications()
	{
		return publications;
	}
	int getCur_id() //해당 기능을 통해 객체의 순번을 확인합니다.
	{
		return ++cur_id;
	}
};

int Professor::cur_id = 0; //static member variable initialze

class Student : public Person
{
private :
	int marks[6]; //점수 6개를 저장할 수 있는 배열
	int sum; //출력 결과 예시에서 점수의 합이 나왔기 때문에 멤버 추가
	static int cur_id;

public :
	Student() : sum(0) {} //sum을 0으로 초기화
	void getData()
	{
		setName(); //이름 입력(Person의 기능)
		setAge();  //나이 입력
		setMarks(); //점수 배열 입력		
	}
	void setMarks()
	{
		int value;

		for (int i = 0; i < 6; i++)
		{
			cin >> value;
			marks[i] = value;
		}
		setSum();
	}
	void setSum()
	{
		for (int i = 0; i < 6; i++)
		{
			sum += marks[i];
		}
	}
	void putData()
	{
		cout << getName() << " " << getAge() << " " << getSum() << " " << getCur_id() << endl;
	}
	int getSum()
	{
		return sum;
	}
	int getCur_id() //해당 기능을 통해 객체의 순번을 확인합니다.
	{
		return ++cur_id;
	}
};
int Student::cur_id = 0; //static member variable initialze

int main()
{
	return 0;
}