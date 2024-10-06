#include <iostream>
#include <string>
using namespace std;

//enum�� ����� �̸��� �ٿ��� ����ϴ�.(������)
//���� 1,2,3,4,5,6,7 ��� ��,ȭ,��,��,��,��,�� �̷� ������ ǥ���մϴ�.
//�ǹ��ִ� �����ʹ� �ƴ����� �������� ������ �ʿ��� �� ����մϴ�.
enum Type 
{
	����, ���, ����, ����, ��,
	��, ����, ����, ��Ʈ, �Ҳ�,
	�� , Ǯ, ����, ������, ���� , �巡��
};

enum Gender
{
	��,��
};

class Pokemon
{
private :
	int id; //���ϸ� ���� ��ȣ
	string name;   //���ϸ��� �̸�
	Type type1;    //���ϸ��� ù��° Ÿ��
	Type type2;    //���ϸ��� �ι�° Ÿ��
	double height; // Ű
	string group;  //���ϸ� �з�
	Gender gender; //���ϸ� ����
	double kg; //������
public :
	//trait trait; //���ϸ��� Ư��
	void setId(int id); //���� ��ȣ ����
	void setName(string name); //�̸� ����
	void setType1(Type type1); //Ÿ�� 1 ����
	void setType2(Type type2); //Ÿ�� 2 ����
	void setHeight(double height); // Ű ����
	void setGroup(string group); // �׷� ����
	void setGender(Gender gender); //���� ����
	void setKg(double kg); //������ ����
	void Info(); //���� ���
};

//���ϸ��� Ư���� ���� ����
class trait
{
public :
	string name; //Ư���� �̸�
	string description; //����
	void info()
	{
		cout << "Ư�� : " << name << endl;
		cout << "���� : " << description << endl;
	}
	void setTrait(string name, string description)
	{
		this->name = name;
		this->description = description;
	}//�̸��� ���� ����
};

int main()
{
	Pokemon Bulbasaur;
	Bulbasaur.setId(1);
	Bulbasaur.setName("�̻��ؾ�");
	Bulbasaur.setType1(Ǯ);
	Bulbasaur.setType2(����);
	Bulbasaur.setHeight(0.7);
	Bulbasaur.setGroup("�������ϸ�");
	Bulbasaur.setGender(��);
	Bulbasaur.setKg(6.9);

	//trait t;
	//t.setTrait("�ɷ�", "HP�� �پ��� �� ǮŸ�� ����� ������ �ö󰣴�.");
	//Bulbasaur.trait = t;
	Bulbasaur.Info();

	return 0;
}
//�����丵 ���
//Ŭ���� ���ο� �Լ��� �� �����ϸ�, �б� ������ ��찡 �߻��� �� ����.
//���� ���ο��� ���� �صΰ� �����丵�� ���� �Ʒ����� ���� �����ϸ� ���Ⱑ �������ϴ�.
//Ŭ���� �ʿ����� ��ɵ��� �̸��� Ȯ���ϰ�, �Ʒ������� ��ɵ��� ������ �κ��� �ľ��� �� �ֽ��ϴ�.

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
	cout << "���� ��ȣ : " << id << endl;
	cout << "�̸� : " << name << endl;
	cout << "Ÿ��1 : " << type1 << endl;
	//Ÿ�� 2�� ���� ��� ���� �ʰڽ��ϴ�.
	if (type2 != ����)
	{
		cout << "Ÿ��2 : " << type2 << endl;
	}
	cout << "Ű : " << height << endl;
	cout << "�з� : " << group << endl;
	cout << "���� : " << gender << endl;
	cout << "������ : " << kg << endl;
	//trait.info(); //trait���� ���� ���� ���
}
