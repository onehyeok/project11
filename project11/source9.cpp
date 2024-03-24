//#include <iostream>
//using namespace std;
//
////참조자 + 함수
//
////매개 변수는 전달받은 값을 복사해서 함수 내에서 사용하는 변수이다.
////그리고 함수가 종료되ㅏ면 해당 값은 데이터 상에서 삭제된다.
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
//	//++는 후처리기 때문에 포인터 작성시에는 +=1을 작성해줘야 바로 결과를 확인해볼 수 있다.
//}
//
////연습 문제> 참조자를 이용해 다음과 같은 함수를 만들고 결과를 실행해보세요.
////1. 전달한 int 형태의 변수의 부호를 바꾸는 함수
////2. 전달한 int 형태의 변수를 제곱을 뽑는 함수
////연자 값으로사용할 값은 practice
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
//	PlusValue(data); // 이 경우라면 값만 전달했기 때문에 data 그 자체에는 변화가 오지 않는다. (call by value)
//	cout << data << endl;
//	PlusReference(data);
//	cout << data << endl; // 이 경우는 값을 전달했고, 매개변수가 참조자이기 때문에 전달받은 값을 참조하게 된다.
//	//따라서 함수가 종료돼 value가 삭제되더라도  value는 data를 참조한 것이기에 그  값에 대한 적용은 진행된다. (call by reference)
//	PlusPoionter(&data); //포인터가 매개변수일 경우 data의 주소 (실제 저장 위치)를 전달한다.
//	//따라서 value가 삭제되어도 실제 저장위치에 작업을 진행한 것이므로 값에 대한 적용은 진행된다. (call by reference)
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