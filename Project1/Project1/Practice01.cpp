//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////���� ȭ���� ����ϼ���.
////       123
////X       45
////----------
////		 615
////      4920
////----------
////      5535
//int main()
//{
//	int a = 123;
//	int b = 45;
//
//	cout << setw(10) << 123 << endl;
//	cout << "X" << setw(9) << 45 << endl;
//	cout << setw(10) << setfill('-') <<""<< endl;
//	cout << setw(10) << setfill(' ') << a * (b % 10) << endl;
//	cout << setw(10) << a * (b / 10 * 10) << endl;
//	cout << setw(10) << setfill('-') << "" << endl;
//	cout << setw(10) << setfill(' ') << a * b << endl;
//	
//	//���� Ǯ�� ���
//	//1. setw , setfill�� �ִ��� Ȱ��
//	//2. �⺻���� ������ �����ϱ�
//	//   a + b (���ϱ�) , a - b (����), a * b (���ϱ�), a / b (������) , a % b (������)
//
//
//	return 0;
//}