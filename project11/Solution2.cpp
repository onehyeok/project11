//#include <iostream>
//using namespace std;
//
//void DecimaltonBinary(int n)
//{
//	if (n == 0 || n == 1) // 분해가 끝났으니 그 값을 출력 (0 or 1)
//	{
//		cout << n;
//		return; //return n; void가 아닌경우 가능, return은함수 종료시키는 기능
//	}
//	DecimaltonBinary(n / 2);
//	cout << n % 2 << ""; //2에 대한 나머지 값 출력
//}
//
//int main()
//{
//	DecimaltonBinary(28);
//
//	return 0;
//}