//#include <iostream>
//#include <iomanip> // setw() / setfill() / left / right ���
//using namespace std; //std ���ӽ����̽��� ����ϰٽ��ϴ�.
////std::cout -> cout�� ��� ����
//
////�Է� ��� cin
////cin ��ü�� ���� �����Ϳ� ���� �Է��� ������ �� �ֽ��ϴ�.
//int main()
//{
//	int number; //������ ������ ���� number ����
//	cin >> number; //cin ��ü�� ���� �Է��� ���� ��Ʈ���� ���� ������ ����
//	cout << number << endl;
//
//	//������ Ÿ��(Type) : ���α׷��� ������ ��ǻ�Ͱ� �ش� �����͸� �Ǵ��ϱ� ���� ��������
//	//Ÿ���� ����� �����ϴ�.
//
//	//�̸�      ������   ũ��(byte)
//	//int		����			4	   
//	//double    �Ǽ�        8
//	//char      ����        1 
//	//bool      ��        1	
//	//[C++���� bool Ÿ���� true, false �̱�]
//	cout << boolalpha;//cout ��ü�� bool Ÿ���� ���� Ȯ�� ��
//	//true / false�� ����ϵ��� ����˴ϴ�.
//	cout << true << "," << false << "," << true << endl;
//	cout << noboolalpha; //true /false ��� 1, 0 ���� ����մϴ�.
//	cout << true << "," << false << "," << true << endl;
//
//	//[C++���� �Ҽ��� N�ڸ����� ����ϱ�]
//	double a = 1.2345;
//	double b = 67.891011;
//	cout << a << endl;  //1.2345
//	cout << b << endl; //67.891
//	//���� ����� ���� cout���� ������ ũ�⸸ŭ ��µǴ� �� �� �� ����.
//	cout.precision(8); //�ش� �ڵ带 ���� �ڸ� ���� ������ �� �ֽ��ϴ�.
//	//�� �Ǽ� + �Ҽ��� ������ �ڸ����� �ǹ��մϴ�.
//	cout << a << endl;
//	cout << b << endl;
//
//	//[C++���� ���� ä���]
//	int c = 1234567890;
//	int d = 1;
//	int e = 12;
//	cout << c << endl;
//	cout << d << endl;
//	cout << e << endl;
//
//	cout << c << endl;
//	cout <<setw(10) << d << endl; //setw(����)�� �ش� ���̸�ŭ ������ִ� �����Դϴ�.
//	cout <<setw(10) << e << endl; //������ ���� ���� �� ĭ���� ������ ä��ϴ�.
//								  //�� ����� ����ϱ� ���ؼ� iomanip�� include�ؾ� �մϴ�.
//	//setfill()�� �̿��� �� ������ �� ĭ ��� �ٸ� �ܾ ä�� �� �ֽ��ϴ�.
//	int f = 10;
//	int g = 5484;
//	int h = 7777;
//	cout << f << "-" << g << "-" << h << endl;
//	cout << setw(3) << setfill('0') << f << "-" << g << "-" << h << endl;
//	//f�� �������� 3ĭ ���, ��ĭ�� 0���� �����Ѵ�.
//	//�� ���� - �̰� g �̰� - �̰� h �̴´�.
//
//	//cout << setfill(' '); //�� ĭ���� ó��
//
//	int i = 1;
//	int j = 22;
//
//	cout << right; //������ ���
//	cout << setw(10) << i << endl;
//	cout << left; //���� ���
//	cout << setw(10) << j << endl;
//
//	return 0;
//}