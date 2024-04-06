//#include <iostream>
//using namespace std;
//
////2024-03-24 과제 풀이
//
//void Colatz(int n)
//{
//	cout << n << " ";// 선 출력
//	
//	//조건처리
//	if (n == 1) //1이되면 작업 종료
//		return;
//
//	//홀수와 짝수에 대한처리
//	n = n % 2 == 1 ? 3 * n + 1 : n / 2;
//	Colatz(n);
//	
//	//if (n % 2 == 1)
//	//	n = 3 * n + 1;
//	//else
//	//	n = n / 2;
//
//	//삼항 연산자(조건식의 결과가 참 또는 거짓으로만 판단디는 
//	//if문 설계 대신 사용할 수 있는 연산자
//	//값 = 조건 ? T : F
//
//}
//
//int main()
//{
//	Colatz(5);
//	return 0;
//}