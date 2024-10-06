#include <iostream>
#include <string>
using namespace std;

//enum은 상수에 이름을 붙여서 만듭니다.(열거형)
//숫자 1,2,3,4,5,6,7 대신 월,화,수,목,금,토,일 이런 식으로 표현합니다.
//의미있는 데이터는 아니지만 데이터의 구분이 필요할 때 사용합니다.
enum Type 
{
	없음, 노멀, 격투, 비행, 독,
	땅, 바위, 벌레, 고스트, 불꽃,
	물 , 풀, 전기, 에스퍼, 얼음 , 드래곤
};

enum Gender
{
	남,녀
};

class Pokemon
{
private :
	int id; //포켓몬 도감 번호
	string name;   //포켓몬의 이름
	Type type1;    //포켓몬의 첫번째 타입
	Type type2;    //포켓몬의 두번째 타입
	double height; // 키
	string group;  //포켓몬 분류
	Gender gender; //포켓몬 성별
	double kg; //몸무게
public :
	//trait trait; //포켓몬의 특성
	void setId(int id); //도감 번호 설정
	void setName(string name); //이름 설정
	void setType1(Type type1); //타입 1 설정
	void setType2(Type type2); //타입 2 설정
	void setHeight(double height); // 키 설정
	void setGroup(string group); // 그룹 설정
	void setGender(Gender gender); //성별 설정
	void setKg(double kg); //몸무게 설정
	void Info(); //도감 출력
};

//포켓몬의 특성에 대한 정보
class trait
{
public :
	string name; //특성의 이름
	string description; //설명
	void info()
	{
		cout << "특성 : " << name << endl;
		cout << "설명 : " << description << endl;
	}
	void setTrait(string name, string description)
	{
		this->name = name;
		this->description = description;
	}//이름과 설명 설정
};

int main()
{
	Pokemon Bulbasaur;
	Bulbasaur.setId(1);
	Bulbasaur.setName("이상해씨");
	Bulbasaur.setType1(풀);
	Bulbasaur.setType2(없음);
	Bulbasaur.setHeight(0.7);
	Bulbasaur.setGroup("씨앗포켓몬");
	Bulbasaur.setGender(녀);
	Bulbasaur.setKg(6.9);

	//trait t;
	//t.setTrait("심록", "HP가 줄었을 때 풀타입 기술의 위력이 올라간다.");
	//Bulbasaur.trait = t;
	Bulbasaur.Info();

	return 0;
}
//리팩토링 기능
//클래스 내부에 함수를 다 구현하면, 읽기 불편한 경우가 발생할 수 있음.
//따라서 내부에서 선언만 해두고 리팩토링을 통해 아래에서 따로 구현하면 보기가 편해집니다.
//클래스 쪽에서는 기능들의 이름을 확인하고, 아래에서는 기능들의 구현된 부분을 파악할 수 있습니다.

void Pokemon::setId(int id)
{
	this->id = id;
}

void Pokemon::setName(string name)
{
	this->name = name;
}

void Pokemon::setType1(Type type1)
{
	this->type1 = type1;
}

void Pokemon::setType2(Type type2)
{
	this->type2 = type2;
}

void Pokemon::setHeight(double height)
{
	this->height = height;
}

void Pokemon::setGroup(string group)
{
	this->group = group;
}


void Pokemon::setGender(Gender gender)
{
	this->gender = gender;
}

void Pokemon::setKg(double kg)
{
	this->kg = kg;
}

void Pokemon::Info()
{
	cout << "도감 번호 : " << id << endl;
	cout << "이름 : " << name << endl;
	cout << "타입1 : " << type1 << endl;
	//타입 2는 없는 경우 뽑지 않겠습니다.
	if (type2 != 없음)
	{
		cout << "타입2 : " << type2 << endl;
	}
	cout << "키 : " << height << endl;
	cout << "분류 : " << group << endl;
	cout << "성별 : " << gender << endl;
	cout << "몸무게 : " << kg << endl;
	//trait.info(); //trait에서 따로 만들어서 사용
}
