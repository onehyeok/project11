//#include <iostream>
//using namespace std;
////C++������ �پ��� �����ε� ����� ������.
////�����ε� : ���� �̸��� �ٸ� ���
//
////1. �Լ� �����ε� : �Լ��� �̸��� ������, �Ű������� ����, ����, Ÿ���� �ٸ� ��� �ٸ� �Լ��� ����Ѵ�. c���� �ٸ��� ���� �Լ� �ٸ� ����� ���� �Լ� ���谡 �����ϴ�.
////(source 06)����
//
////2. ������ �����ε� : Ŭ���� ���� �������� �Ű������� ����, ����, Ÿ���� �ٸ� ��� �ٸ� �����ڷ� ����Ѵ�.
////�Ű� ������ ���� ������(�⺻ ������)�� ���� ��� Ŭ������ ������ �� �����ϴ�.
////�����ڰ� �����Ǿ��� ��� �⺻ �����ڰ� ���� ���, Ŭ���� ���� �� �ݵ�� �����ڰ� �䱸�ϴ� �Ű������� �´� �����͸� �־���� �Ѵ�.(MonsterStatus.h ���� Ȯ��)
//
////Operation Overloading (������ �����ε�)
////Ŭ���� ���ο� �ִ� �����ڸ� ������� ������ �����ε��� �۾��� ���, ��ü ���� ������ �۾��� �� �ְ� �����ش�.
//
////������(Operator)�� ����
////1�� ������ : ������ ������ �� �ʿ��� ��, ���� 1���� ���� (++, --)
//
////2�� ������ : ������ ������ �� �ʿ��� ��, ���� 2���� ���� (+, -, *, /, %, .....)
//
////3�� ������ : �� = ���ǽ� ? �� : ����
//
////�����ε� �۾� �ÿ��� �ַ� 1�װ� 2�׿� ���� �۾��� �ַ� �̷������.
//
////������ �����ε��� ���� ���
////1. ����ϴ� Ű���� operator
////2. Ŭ������ ��� �Լ��� ������ �����ε��ϴ� ���
////3. ���� �Լ��� ������ ���ε� �ϴ� ���(friend)
//
////���ø� ���� �˾ƺ��� ������ �����ε�
//
//class Count
//{
//	int value; //Ŭ�������� ���� �����ڸ� ���� ���� ���� ��쿡 private ���
//	//����ü�� ���� ���� �����ڸ� ���� ���� ������ public ����Ѵ�.(C++)
//public:
//	//������ ��� value�� ���� 10���� �����ȴ�.
//	Count() : value(10) {}
//
//	//�����ϰ��� �ϴ� �����ڿ� ���� �ۼ��Ѵ�.
//	//--�� ���� ����� ���� ������� 1 ���ҽ�Ű�� ���
//	//void operator --() //���� ����(���� ���ؼ� ���� 1�� �����ϰ�, ������ �����ϴ� ���) (ex: a= 10, b= 5 --a+b => a=9�� �Ǿ� �� 14)
//	//{
//	//	value--;
//	//}
//
//	//void operator --(int) //���� ����(������ �����ϰ� ���� ���ؼ� 1�� �����ϴ� ���)  (ex: a-- +b=> 15, a=9)
//	//{
//	//	--value;
//	//}
//	int GetValue() { return value; }
//
//	Count operator --()
//	{
//		//1. ���꿡 ���� �۾��� ����
//		value--;
//		//2. ������ ���� ��������.(*this -> Count)
//		return *this;
//		//value�� 1���� �� ����, �� ��ġ��ŭ�� Count ��ü�� return �Ѵ�
//		//this�� Ŭ���� �ڱ� �ڽ��� �ǹ���.(Ŭ������ ���� Ÿ��(�ּ�))
//		//* �� �ּҿ� ���� ���� ��ȯ�ϴ� �������̴�.
//	}
//	Count operator --(int)
//	{
//		//1. ������ �����ϱ� �� �ڽ��� ���� ���� �ӽ÷� �����Ѵ�.(temp)
//		Count temp = *this;
//		//2. ���꿡 ���� �۾��� �����Ѵ�.
//		value--;
//		//3. ���� ���� ������ ��������.
//		return temp;
//	}
//};
//
//int main()
//{
//	Count c;
//	cout << c.GetValue() << endl;
//	c--;
//	cout << c.GetValue() << endl;
//	--c;
//	cout << c.GetValue() << endl;
//
//	Count c2;
//	c2 = c--; 
//	cout << c2.GetValue() << endl;
//	cout << c.GetValue() << endl;
//	//c�� ���ؼ� ����� �� �� ������ ��ü�� �����ϴ� �۾��� �Ұ���
//	//���� �̷��� �۾��ϰ� ���� ���״� �ٸ� ���·� �۾��� �����ؾ� �Ѵ�.
//	return 0;
//}

