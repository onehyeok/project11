//#include <iostream>
//using namespace std;
//
////������ + �Լ�
//
////�Ű� ������ ���޹��� ���� �����ؼ� �Լ� ������ ����ϴ� �����̴�.
////�׸��� �Լ��� ����Ǥ��� �ش� ���� ������ �󿡼� �����ȴ�.
//
//void PlusValue(int value)
//{
//	value++;
//}
//
//void PlusReference(int& value)
//{
//	value++;
//}
//
//void PlusPoionter(int* value)
//{
//	*value+= 1;
//	//++�� ��ó���� ������ ������ �ۼ��ÿ��� +=1�� �ۼ������ �ٷ� ����� Ȯ���غ� �� �ִ�.
//}
//
////���� ����> �����ڸ� �̿��� ������ ���� �Լ��� ����� ����� �����غ�����.
////1. ������ int ������ ������ ��ȣ�� �ٲٴ� �Լ�
////2. ������ int ������ ������ ������ �̴� �Լ�
////���� �����λ���� ���� practice
//
//void Inverse(int& value)
//{
//	value =  -value;
//}
//
//void Square(int& value)
//{
//	value=  value*value;
//}
//
//int main()
//{
//	int data = 1;
//	cout << data << endl;
//	PlusValue(data); // �� ����� ���� �����߱� ������ data �� ��ü���� ��ȭ�� ���� �ʴ´�. (call by value)
//	cout << data << endl;
//	PlusReference(data);
//	cout << data << endl; // �� ���� ���� �����߰�, �Ű������� �������̱� ������ ���޹��� ���� �����ϰ� �ȴ�.
//	//���� �Լ��� ����� value�� �����Ǵ���  value�� data�� ������ ���̱⿡ ��  ���� ���� ������ ����ȴ�. (call by reference)
//	PlusPoionter(&data); //�����Ͱ� �Ű������� ��� data�� �ּ� (���� ���� ��ġ)�� �����Ѵ�.
//	//���� value�� �����Ǿ ���� ������ġ�� �۾��� ������ ���̹Ƿ� ���� ���� ������ ����ȴ�. (call by reference)
//	cout << data << endl;
//
//	int practice = 2;
//	Inverse(practice);
//	cout << practice << endl;
//	Square(practice);
//	cout << practice << endl;
//
//
//	return 0;
//}