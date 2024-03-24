#include <iostream>
using namespace std;


//swap(변경 기능)

void swap(int& a, int& b)
{
	int temp; //값을 교환하는 용도
	temp = a; //temp에 a를 전달한다.
	a = b; //a에 b의 값을 전달한다.
	//b = a; //a는 이미 b이기 때뭉네 값의 변화가 없다.
	b = temp; //a를 저장해놓은 temp에 b를 전달한다.
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