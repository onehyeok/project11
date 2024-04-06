//#include <iostream>
//using namespace std;
//
////캡슐화(Encapsulation)
////기능과 속성을 하나로 묶어서 구현 (알권리만 제공, 숨길걸 숨기기 = 그래서 클래스를 사용)
////1. 클래스 안에 서로 연관되어있는 속성과 기능을 하나의 캡슐(capsule)로 보고 데이터에 대한 외부 노출을
////보호하는 설계 기법(정보에 대한 은닉, 보안 관련)
//
////일반적으로는 클래스 내부 필드를 private로 잡고, 내부 함수를 public으로 설계하는 것으로 작업을 하나 코드 설계에 따라
////특정 코드 내부에서 다른 코드가 호출되고 있다면 그 코드에 대한 비공개를 하는 등 상황에 맞게 공개아 비공개를 활용한다.
//
//class RemoteController
//{
//public:
//	void VolumeUp() {} 
//	void VolumeDown() {}
//	void On() {}
//	void Off() {}
//	void Channel(int number) {}
//	int button_number{}
//private:
//	void infracredRayCast() {} //적외선 신호 충돌
//	bool _infraredRay; //적외선 광선
//	Circuit curcit; //서킷(전기회로)
//
//};
//
//class Circuit{};
//
////1. 볼륨 크기 조절, 전원 키고 끄기, 채널 변경 등은 사용자가 사용해야할 기능임.
////이 부분에 대해서는 공개 처리를 진행
//
////2. 적외선 신호 충돌은 버튼을 누르면 적외선이 발사 되고 누른 지점(내부 서킷)에 따라 기능이 처리됨.
//
////getter/setter (get / set)
////getter: 필드 값에 대한 return 함수를 의미함.
////setter : 필드 갑에 대한 초기화를 진행하는 함수를 의미함.
//
//class Person
//{
//private:
//	int age;
//public:
//	int getAge() { return age; }
//	void setAge(int age) { this->age = age; }
//};
//
//int main()
//{
//	Person p;
//	p.setAge(16);
//	cout << p.getAge() << endl;
//
//	return 0;
//}