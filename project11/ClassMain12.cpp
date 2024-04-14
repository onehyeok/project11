//#include <iostream>
//using namespace std;
////문제 2) 다음과 같은 실행 정보를 가진 프로그램을 main에서 구현하고 책에 해당하는 클래스 Book과 필요하다면 연산자를 수정해 클래스를 설계하시오.
//
//
//	//현재 책 정보 -> 이름 : A  읽은  페이지 100 Page / 500 page
//	//읽은 만큼의 페이지를 입력해주세요 >> 47
//	//현재 책 정보 -> A 읽은 페이지 147page / 500 page
//	//읽은 만큼의 페이지를 입력해주세요 >> 400
//	//최대 페이지를 넘겨 읽을 수 없습니다!
//#define MAX 500
//
//
//class Book
//{
//private : 
//	string name;
//	int read_page;
//	int max_page;
//public :
//	Book(string name) : name(name)
//	{
//		read_page = 0;
//		max_page = MAX;
//	}
//
//	Book operator+(int value)
//	{
//		if (value + read_page > max_page)
//		{
//			cout << "최대 페이지를 넘게 읽을 수 없습니다!" << endl;
//			return *this;
//		}
//		read_page += value;
//		return *this;
//	}
//	void Info()
//	{
//		cout << "이름 : " << name << " 읽은 페이지 " << read_page << "Page" << " / " << max_page << "Page" << endl;
//	}
//};
//
//
//int main() // 메인은 함수 클래스 등을 실행하거나 호출할 때 씀, 메인이 많으면 안됨.
//{
//	Book b("A");
//	int page;
//	while (true)
//	{
//		b.Info();
//		cout << "읽은 만큼의 페이지를 입력해주세요 >>";
//		cin >> page;
//		b = b + page;
//		//break;
//
//	}
//	return 0;
//	
//}
//
////클래스 프로그래밍 작업 순서
////
////1. 어떤 형태의 설계인지 구분
////=> 상속인지 아닌지 (상속(is A), has A...)
////=> 다형성(부모의 형태로 자식의 형태를 생성하는 것(가상함수))
////ex) virtual void Method() {};
////
////
//// ->추상화(순수 가상 함수 구현)
////순수 가상 함수의 경우 물려받는 쪽(자식 클래스) 에서 반드시 해당 함수에 대한 오버로딩을 진행해야 클래스를 구현할 수 있다.(제약)
//// ex) virtual void Method() = 0;
////
////2. 필드 / 생성자/ 메소드 / 연산자 오버로딩 / 소멸자 순으로 필요한 부분을 배치한다.
////
////3. 접근 제한 지시자에 대한 설정 후 재배치 (private, protected, public)
////
////4. 메인 함수에 생성 (정적 생성, 동적 생성(new))
////
////5. 메인 프로그램에서 매개변수로 클래스를 요구하는 함수 사용 여부(써도되고 안써도 됨.)
////
////6. 메인 함수에서 클래스를 기반으로 로직 설계