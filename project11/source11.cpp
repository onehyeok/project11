#include <iostream>
using namespace std;


//swap(���� ���)

void swap(int& a, int& b)
{
	int temp; //���� ��ȯ�ϴ� �뵵
	temp = a; //temp�� a�� �����Ѵ�.
	a = b; //a�� b�� ���� �����Ѵ�.
	//b = a; //a�� �̹� b�̱� ������ ���� ��ȭ�� ����.
	b = temp; //a�� �����س��� temp�� b�� �����Ѵ�.
}

int main()
{
	int a = 10;
	int b = 7;

	

	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;

	return 0;
}