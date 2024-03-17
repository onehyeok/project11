//#include <iostream>
//using namespace std;
////std 네임스페이스를 사용하고 있습니다. 앞서 03/16 1교시 수업때 std라는 용어를 따로 쓸 필요가 없음(즉 매번 std::를 붙이는 것이 번거로우기에 접두사 없이 사용 가능)
////사용목적 : 프로그램을 개발하다보면 코드를 특정 그룹으로 분리하고 싶은 경우(즉 코드를 분할해서 보기 편함)
////                프로그램에서 자주 쓰이는 변수의 이름이 충돌되지 않게 하기 위함. ( 밑에 예시 : namespace A, B 구간에서 둘다 a를 쓰고 싶은 경우)
//// cout 함수의 namespace는 std이고 std::cout로 작성해야 오류 발생하지 않음, st를 생략하려면 using namespace std; 코드를 활용하면 됨.
//
////네임 스페이스는 별도의 이름을 저장할 수 있는 공간
//
//
//
//namespace Item
//{
//	namespace Cloth
//	{
//		string brand = "Nike";
//	}
//}
//namespace A
//{
//	int a = 1; //정수형 변수 a
////변수(variable) : 프로그램에서 사용할 데이터 형태에 이름을 붙인 것
////                         하나의 데이터를 저장한다.
//}
//namespace B
//{
//	int a = 2;
//}
//
//int main()
//{
//	cout << "안녕하세요." << endl;
//	int a = 5;
//	cout << a << endl;
//	cout << A::a << endl;
//	cout << B::a << endl;
//	cout << Item::Cloth::brand << endl; //item에서 cloth에서 brand에 있는
//	
//	return 0; //함수를 종료하고 0을 전달합니다. 0이라는 값은 프로그램이 정상적으로 에러 없이 종료되었다는 운영제체로 보내는 신호임.
//	//그래서 운영제체로 0이 반환ㄷ되면 운영체제에서 프로그램이 정상적으로 종료되었다고 인식하는 것임.
//	//0이 아닌 다른 값들을 리턴하는 것의 의미는 무언가 에러가 발생했거나 다른 동작을 했다는 것을 알리는 의미로 쓰임.
//}