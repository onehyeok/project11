//#include <iostream>
//using namespace std;
//
////ĸ��ȭ(Encapsulation)
////��ɰ� �Ӽ��� �ϳ��� ��� ���� (�˱Ǹ��� ����, ����� ����� = �׷��� Ŭ������ ���)
////1. Ŭ���� �ȿ� ���� �����Ǿ��ִ� �Ӽ��� ����� �ϳ��� ĸ��(capsule)�� ���� �����Ϳ� ���� �ܺ� ������
////��ȣ�ϴ� ���� ���(������ ���� ����, ���� ����)
//
////�Ϲ������δ� Ŭ���� ���� �ʵ带 private�� ���, ���� �Լ��� public���� �����ϴ� ������ �۾��� �ϳ� �ڵ� ���迡 ����
////Ư�� �ڵ� ���ο��� �ٸ� �ڵ尡 ȣ��ǰ� �ִٸ� �� �ڵ忡 ���� ������� �ϴ� �� ��Ȳ�� �°� ������ ������� Ȱ���Ѵ�.
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
//	void infracredRayCast() {} //���ܼ� ��ȣ �浹
//	bool _infraredRay; //���ܼ� ����
//	Circuit curcit; //��Ŷ(����ȸ��)
//
//};
//
//class Circuit{};
//
////1. ���� ũ�� ����, ���� Ű�� ����, ä�� ���� ���� ����ڰ� ����ؾ��� �����.
////�� �κп� ���ؼ��� ���� ó���� ����
//
////2. ���ܼ� ��ȣ �浹�� ��ư�� ������ ���ܼ��� �߻� �ǰ� ���� ����(���� ��Ŷ)�� ���� ����� ó����.
//
////getter/setter (get / set)
////getter: �ʵ� ���� ���� return �Լ��� �ǹ���.
////setter : �ʵ� ���� ���� �ʱ�ȭ�� �����ϴ� �Լ��� �ǹ���.
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