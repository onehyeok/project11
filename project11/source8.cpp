//#include<iostream>
//using namespace std;
//
////C++�� ������
////�Ҵ�Ǿ��ִ� �ϳ��� �޸� ����(����)�� �ٸ� �̸��� ���̴� ���(��Ī)
//
//
//
//int main()
//{
//	int number = 10;
//	int& ref_number = number; //���� �����ϴ� ������(�ݵ�� ���� �����ؾ���. NULL�� �ȵ�.)
//	int* ptr_number = &number; //�ּ� ���� ����Ű�� ������
//
//	//���� ���
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl; //�����ͷκ��� ���� ���� ��쿡�� *�� �ٿ��ش�.
//
//	//�ּ� ���
//	cout << &number << endl;         // ������ �̸� �տ� �ּ� ������(&)�� �ٿ��ش�.
//	cout << &ref_number << endl;   // ������ �����ϰ� �۾��Ѵ�.
//	cout << ptr_number << endl;     // ������ ���� �̸� = �ּ�
//
//	number += 10; //������ ��ȭ�� �ٷ��� ��.
//
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;         
//	cout << &ref_number << endl;   
//	cout << ptr_number << endl;
//
//	ref_number += 10; //�����ڿ� ��ȭ�� �ٷ��� ��.
//	
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;       
//	cout << &ref_number << endl; 
//	cout << ptr_number << endl;
//
//	ptr_number += 10; //�����Ϳ� ��ȭ�� �ٷ��� ��.
//	//*ptr_number += 10;
//
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &ref_number << endl;
//	cout << ptr_number << endl;
//
//	//�������� Ư¡
//	//1. �����ڴ� ����� ���ǰ� ���ÿ� ����Ǿ�� �Ѵ�.
//	//2. �����ڴ� � ������ �����ڷ� ��������� ��� �ٸ� ������ ������ �� ����.
//
//	//C++������ ������ ��� �����ڸ� �� ���� ������.
//	//�����ڴ� �ѹ� �����ϸ� �ٸ� ��ü�� ������ �� ���� �����ͺ��� ������ ���谡 �����ϴ�.
//	//�������� ������ ������ ������ ũ�� �ٸ��� �ʾ� ���� ����� �����ϴ�.
//	
//	//�� ���������� NULL ���� �䱸�Ǵ� ��쿡�� �����͸� ����ϵ��� �Ѵ�. (�����ڴ� NULL �Ұ�)
//
//	//int &ref_number2 = NULL;
//
//	//int*ptr_number2 = NULL;
//
//
//
//	return 0;
//}