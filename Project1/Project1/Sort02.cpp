//#include <iostream>
//#include <string>
//using namespace std;
//
////���ڸ� ���� / ���� ����(Selection Sort)
//
//int main()
//{
//	int a[] = { 7,5,1,4,3 };
//	const int LEN = sizeof(a) / sizeof(a[0]);
//	int temp; //������ ��ȯ�� ����
//
//	cout << "���� �� " << endl;
//	for (int value : a)
//	{
//		cout << value << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < LEN - 1; i++)
//	{
//		int idxMin = i; //���� ���� ���� ���� �ε��� ��ȣ(�� ������ �ƴ°� �� �ڵ� ������ ���� ū �ٽ�)
//
//		//[���� ���� ��ġ�� �����ϴ� �ݺ�]
//		for (int j = i + 1; j < LEN; j++) //i+1�� ���� ���� ������ ���� ������ �������� ����
//		{
//			if (a[j] < a[idxMin]) //���� �۴ٰ� �� ������ ���� ��Ȳ�̶�� �� ������ ����
//			{
//				idxMin = j;
//			}
//		}
//		//���� ���� ��ġ�� ������ ������ ������ ���� �� ��ġ�� ���� ���� �����մϴ�.
//		temp = a[idxMin];
//		a[idxMin] = a[i];
//		a[i] = temp;
//	}
//
//
//	return 0;
//}