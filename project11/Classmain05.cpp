//#include <iostream>
//using namespace std;
//
//class Base
//{
//private: int A; //�ڽ��� Ŭ���������� ������ ������.(�ܺ� ���� ����)
//protected: int B; //�Ļ� Ŭ���������� ������ �����.
//public: int C; //��� ������ ������ �����.(����������)
//
//};
//
//class Derived : public Base
//{
//public :
//	void MemberInit(int a, int b, int c);
//};
//class DerivedProtected : protected Base
//{
//public:
//	void MemeberInit(int a, int b, int c);
//};
//class DerivedPrivated : private Base
//{
//public:
//	void MemeberInit(int a, int b, int c);
//};
//
//
//int main()
//{
//	Derived d1;
//	DerivedProtected d2;
//	DerivedPrivated d3;
//
//	d1.C = 5;
//	//protected ���, privated ������� ������ Ŭ�������� pubic �ʵ� ���̾�� C�� ������ �ȵǴ� �� Ȯ���� �� �ִ�.
//	
//	//protected ��� : protected���� ���� ������ ���� ����� protected�� �����Ͽ� ����Ѵ�.
//	// public -> protected
//	
//	//���� ���� ���� private < protected < public 
//
//	//private ��� : private���� ���� ������ ���� ����� private�� �����Ͽ� ����Ѵ�.
//	// ->��� ���� private ó��
//	//��� ���� ���� ������ ���� ���(�ǹ̾��� ���)
//
//	//public. ��� : public���� ���� ������ ���� ����� public���� �����Ͽ� ����Ѵ�.
//	//public���� ������ ���� �� ���� ������ ��ǻ� �״�� �������� �Ͱ� ����(���� ���� �ϴ� ���)
//	d2.C = 6;
//	d3.C = 7;
//	return 0;
//}
//
//void Derived::MemberInit(int a, int b, int c)
//{
//	A = a; //A�� ������ �ȵǼ� ����(error) ǥ�ö�.
//	B = b;
//	C = c;
//}
//
//void DerivedProtected::MemeberInit(int a, int b, int c)
//{
//	A = a; //A�� ������ �ȵǼ� ����(error) ǥ�ö�.
//	B = b;
//	C = c;
//}
//
//void DerivedPrivated::MemeberInit(int a, int b, int c)
//{
//	A = a; //A�� ������ �ȵǼ� ����(error) ǥ�ö�.
//	B = b;
//	C = c;
//}
