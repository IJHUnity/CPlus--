//#include <iostream>
//#include <string>
//using namespace std;
//
////����1) �Լ� ArraySearch�� ������ �迭�� �迭�� ����, �׸��� �迭 �ȿ� �ִ� �� �ϳ��� �����մϴ�. 
////�ش� ���� �����Ѵٸ� �ش� ���� ����ϰ� ���ٸ� "�ش� ���� �����ϴ�."�� ����ϼ���.
//void ArraySearch(int arrays[], int length, int value)
//{
//	//�迭�� ���̸�ŭ �ݺ�
//	for (int i = 0; i < length; i++)
//	{
//		//���޹��� ���� �迭�� i��° ���� ���ٸ�!
//		if (value == arrays[i])
//		{
//			cout << value << endl;
//			return;
//			//void������ return ���� �Ⱦ����� return�� ����ϴ� ���� �����մϴ�.
//			//return�� �Լ��� �����ϴ� ���
//		}
//	}
//	//�ݺ��� �� �����µ� ���� ������ ���� ��
//	cout << "�ش� ���� �����ϴ�." << endl;
//}
////void ArraySearch(int arrays[], int length, int value)
////{
////	bool isExist = false;
////	//�����ϴ°��� ���� true, false�� �Ǵ��� ���� isExist
////	//�ݺ��� ���� �ش� ���� �ִ��� �������� �Ǵ��մϴ�.
////	for (int i = 0; i < length; i++)
////	{
////		if (value == arrays[i])
////		{
////			isExist = true; //�ش� ���� �����մϴ�.
////			break;//�ݺ� ����
////		}
////	}
////	//���� ���ο� ���� �ڵ� ���踦 ���� �մϴ�.
////	if (isExist == true)
////		cout << "�ش� ���� �����ϴ�." << endl;
////	else
////		cout << value << endl;
////}
//
//
////���� 2) ���� �ڵ带 Ȱ���� �Լ� ValueIndexSearch �Լ��� ����ϴ�.
////�ش� �Լ��� ������ ���� �迭�� �����Ѵٸ�, �ش� ���� ���° ������ ����մϴ�.
//void ValueIndexSearch(int arrays[], int length, int value)
//{
//	int idx = 0; //���° ������ Ȯ���ϱ� ���� ���� 
//	bool isExist = false; //�ش� ���� �����ϴ����� ���� ����
//	for (int i = 0; i < length; i++)
//	{
//		idx++; //�Ϲ����� ��쿡�� ī��Ʈ ����(ó���� �߰ߵ� ���� ������ �������� ����)
//		if (value == arrays[i]) //���� �����Ѵٸ�
//		{
//			isExist = true; //�����Ѵٰ� üũ
//			break; //�۾� ����
//		}
//	}
//	if (isExist == true)
//		cout << "�ش� ���� " << idx << "��° ���Դϴ�." << endl;
//	else
//		cout << "�ش� ���� �������� �ʽ��ϴ�." << endl;
//}
//////(Practice05.cpp)
//// ����3) �迭�� ���޹޾Ƽ� �� �迭�� ������������ �����ϴ� �Լ� Orderby�� �����ϰ� ����� Ȯ���մϴ�.
////����� �迭�� ���� {1,9,5,7,8} �Դϴ�.
//
//void Orderby(int arrays[], int size)
//{
//	//���� ������ �̿��� Ǯ��
//	//���� ������ �迭�� �� ���� �κ����� ����� ������ ���ĵ� �κ�, �������� ���ĵ��� ���� �κ����� �����մϴ�.
//	//�� �� ���ĵ��� ���� �κп��� �ϳ��ϳ��� ���� ���ĵ� �κп� ������ ��ġ�� �������ִ� ���
//	//�迭 �ݺ�(ù��° ���� �׻� ���ĵǾ� �ִ� ���·� ���) -> ��� ���� -> �� �� �̵� -> ����
//	//���� ������ �迭�� ��� ��Ҹ� ������� �ݺ��մϴ�.
//	//�ַ� ũ�Ⱑ �۰ų�, ���� ������ �Ǿ��ִ� �迭���� ȿ�����Դϴ�.
//	//�迭�� �ι�° ������ �����ϱ� ������ ���� ���� 0�� �ƴ� 1�� ����
//	for (int i = 1; i < size; i++)
//	{
//		int key = arrays[i]; //������ ��ġ�� �迭 ���� �ϳ��� Ű�� ���ڽ��ϴ�.
//		int l_idx = i - 1; //Ű ���ʿ� ���� �ε��� ��
//		//���� Ű���� ū ������ ���������� �̵�
//		//l_idx�� 0 �̻��̰� arrays[l_idx]�� key���� ū ���� �ݺ��մϴ�.
//		while (l_idx >= 0 && arrays[l_idx] > key)
//		{
//			arrays[l_idx + 1] = arrays[l_idx]; //�� �̵�
//			--l_idx; //�������� �̵�
//		}
//		//Ű ����
//		arrays[l_idx + 1] = key;
//
//		//�۾��� �������� �� �̾ƺ���
//		cout << i << "��° �۾� ��" << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << arrays[i] << " ";
//		}
//		cout << endl;
//	}
//
////[�ϼ� ��� ���]
//	cout << "�۾� ����" << endl;
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
//	//cout << "���� �Է����ּ��� >> ";
//	//cin >> value;
//	//ArraySearch(arrays, length, value);
//
//	int arrays2[] = { 1,9,5,7,8};
//	int size = sizeof(arrays2) / sizeof(arrays2[0]);
//	Orderby(arrays2, size);
//	return 0;
//}