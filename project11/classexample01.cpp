//#include <iostream>
//using namespace std;
//
////쇼핑 사이트의 한 상황을 연출햅고자 한다.
////필요한 정보를 클래스로 구현해보자
//
//// 그 중에 스마트폰을 클래스로 만들려고 함.
//
////스마트폰은 기종의 이름, 화면 크기, 통신 규격(프로토콜), 내장 메모리, 운영체제, 브랜드의 정보를 가지고 있음.
//
////이번 예제에서는  메인 프로그램에서 이름을 입력하면 스마트폰의 정보를 출력하는 기능이 필요함.
//
////스마트폰이 자체적으로 갖는 기능은 따로 구현하지 않는다.(전원 키기, 동영상 찍기..)
//
////예상 시나리오
////스마트폰 쇼핑 프로그램입니다.
////기능을 선택해주세요. 1. 직접 검색 2. 기종 확인 3 . 프로그램 종료
////직접 검색을 누를 경우 이름을 입력받도록 하며, 그 이름의 스마트폰이 있다면 있음을 안내한다.
////기종 확인을 누를 경우 화면에 보유하고 있는 스마트폰을 전체 출력한다.
////프로그램 종료를 누를 경우 종료된다.
//
//
//
//class smartphone
//{
//public : 
//	string name, protocl, OS, brand;
//	int size, RAM;
//public :
//	smartphone(string name, int size, string protocol, int RAM, string OS, string brand); //값을 지정해주는 생성자가 필요
//	void DeviceInfo();
//};
//
//
//int main()
//{
//	int select;
//	string search_name;
//
//	smartphone IphoneProMax("아이폰 프로맥스",)
//	
//	while (true)
//	{
//		cout << "스마트폰 쇼핑 프로그램입니다." << endl;
//		cout << "기능을 선택해주세요 1. 직접 검색 2. 기종 확인 3. 프로그램 종료";
//		cin >> select;
//		switch (select)
//		{
//		case 1:
//			cout << "검색할 기종의 이름을 입력해주세요 >> ";
//			cin >> search_name;
//
//			break;
//
//		case 2:
//			
//
//
//
//			break;
//
//		case 3:
//			cout << "프로그램을 종료합니다." << endl;
//			cout << "다시 입력해주세요." << endl;
//
//		}
//
//	 }
//
//
//
//	return 0;
//}
//
//smartphone::smartphone(string name, float inch, string protocol, int RAM, string OS, string brand)
//{
//	this->name = name;
//	this->inch = inch;
//	this->inch = inch;
//	this->OS=OS
//	
//	this->RAM = RAM;
//}
//
//void smartphone::DeviceInfo()
//{
//}
