//2024-04-13
//연산자 오버로딩

//이해를 위한 기본 지식
//1. 연산자 : 연산할 때 쓰이는 기호
//기호마다 요구되는 값의 개수 -> 항
//
//2. 클래스 : 멤버 변수와 멤버 함수를 가지고 있는 사용자 정의 타입 클래스를 통해 객체를 만들 수 있고, 그 객체를 중심으로
//                  프로그램을 구성할 수 있습니다.
//	                this : 자기 자신을 의미한다.
//                  클래스는 value(값)가 아닌 reference(참조) 형태이다. (source08 참고)
//                  생성자 / 소멸자,,,
//3. 오버로딩 : 같은 이름에 다른 기능
//                      프로그램에서 매개 변수의 개수, 순서 형태 => method signature(메소드 시그니처)가 다르면 다른 것으로 판단한다.
//
//4. 포인터 : Asterisk(*) : 해당 기호는 변수 앞에 붙을 경우 주소 값을참조해 실제 값을 얻어오는 기능을 가진 참조 연산자로 사용된다.
//                  주소 : 데이터가 프로그램 메모리의 실제로 저장되어 있는 위치(포인터가 가리키는 것)
//5. 함수 : 작업만 진행하는 경우 -> void 설계, return 안써도 됨. (source06 참고)
//               그 이외의 형태일 경우 -> return 함수



#include <iostream>
using namespace std;
//다음과 같은 결과가 나올 수 있도록  클래스 Student를 설계하시오.

class Student
{
	string name;
	int age;
public:
	Student(string name, int age) : name(name), age(age) {}
	
	Student operator =(const Student& other)
	{
		name = other.name;
		//return *this;
		return Student(name, age);
	}
	
	//void operator =(const Student& other)*/
	//{
	//	name = other.name;
	//	//return *this;

	//}
	
	void StudentInfo()
	{
		cout << "이름 : " << name << "나이 : " << age << endl;
	}


int main()
{
	Student s1("이세영", 17);
	Student s2("김익현", 17);

	s1 = s2;

	
	s1.StudentInfo();
	s2.StudentInfo();

	//실행 결과
	//이름 : 김익현 나이 17
	//이름 : 김익현 나이 18

	//문제 2) 다음과 같은 실행 정보를 가진 프로그램을 main에서 구현하고 책에 해당하는 클래스 Book과 필요하다면 연산자를 수정해 클래스를 설계하시오.
	

	//현재 책 정보 -> 이름 : A  읽은  페이지 100 Page / 500 page
	//읽은 만큼의 페이지를 입력해주세요 >> 47
	//현재 책 정보 -> A 읽은 페이지 147page / 500 page
	//읽은 만큼의 페이지를 입력해주세요 >> 400
	//최대 페이지를 넘겨 읽을 수 없습니다!



	return 0;
}