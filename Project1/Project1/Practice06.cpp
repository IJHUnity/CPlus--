#include <iostream>
#include <string>
using namespace std;

//����1) �Լ� ArraySearch�� ������ �迭�� �迭�� ����, �׸��� �迭 �ȿ� �ִ� �� �ϳ��� �����մϴ�. 
//�ش� ���� �����Ѵٸ� �ش� ���� ����ϰ� ���ٸ� "�ش� ���� �����ϴ�."�� ����ϼ���.
void ArraySearch(int arrays[], int length, int value)
{
	//�迭�� ���̸�ŭ �ݺ�
	for (int i = 0; i < length; i++)
	{
		//���޹��� ���� �迭�� i��° ���� ���ٸ�!
		if (value == arrays[i])
		{
			cout << value << endl;
			return;
			//void������ return ���� �Ⱦ����� return�� ����ϴ� ���� �����մϴ�.
			//return�� �Լ��� �����ϴ� ���
		}
	}
	//�ݺ��� �� �����µ� ���� ������ ���� ��
	cout << "�ش� ���� �����ϴ�." << endl;
}
//void ArraySearch(int arrays[], int length, int value)
//{
//	bool isExist = false;
//	//�����ϴ°��� ���� true, false�� �Ǵ��� ���� isExist
//	//�ݺ��� ���� �ش� ���� �ִ��� �������� �Ǵ��մϴ�.
//	for (int i = 0; i < length; i++)
//	{
//		if (value == arrays[i])
//		{
//			isExist = true; //�ش� ���� �����մϴ�.
//			break;//�ݺ� ����
//		}
//	}
//	//���� ���ο� ���� �ڵ� ���踦 ���� �մϴ�.
//	if (isExist == true)
//		cout << "�ش� ���� �����ϴ�." << endl;
//	else
//		cout << value << endl;
//}





//���� 2) ���� �ڵ带 Ȱ���� �Լ� ValueIndexSearch �Լ��� ����ϴ�.
//�ش� �Լ��� ������ ���� �迭�� �����Ѵٸ�, �ش� ���� ���° ������ ����մϴ�.
void ValueIndexSearch(int arrays[], int length, int value)
{

}
int main()
{
	int arrays[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(arrays) / sizeof(arrays[0]);
	int value;
	cout << "���� �Է����ּ��� >> ";
	cin >> value;
	ArraySearch(arrays, length, value);

	return 0;
}