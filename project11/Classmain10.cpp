//#include <iostream>
//using namespace std;
//
////friend(������)
////�������� ���踦 ������ Ŭ���� ���� ��� ������ �����ؾ� �ϴ� ��쿡 ����ϴ� Ű����
//
////�ٸ� Ÿ���� ��ü�� �����ϴ� ���� ������ �ڵ��� Ȯ���� �����ϰ� ������ �� �ִ�.
////��� �� ����� ĸ��ȭ�� ���ݵǴ� ����̱⿡ ���� �� ������ �ʿ䰡 �ִ�.
//
//class Person_A
//{
//private : 
//	string name;
//	int age;
//	friend class Person_B; //friend Ŭ���� PersonB ����
//};
//
//class Person_B
//{
//public:
//	void info(Person_A a)
//	{
//		cout << "�̸� : " << a.name << endl; //private�� �ȵǾ� ������ friend�� ��������.
//		cout << "���� : " << a.age << endl; //�� ����� ����
//	}
//};
//
//class Shape
//{
//	string name;
//	string length;
//public:
//	friend class Color;
//	Shape()
//	{
//		name = "�簢��";
//	}
//	void setName(string name) 
//	{
//		this->name = name;
//	}
//};
//
//class Color
//{
//private :
//	string color;
//public:
//	Color()
//	{
//		color = "�ʷϻ�";
//	}
//	void setColor(string color) 
//	{
//		this->color = color;
//	}
//	void ColorInfo(Shape s) 
//	{
//		cout << color << "������" << s.name << endl; 
//	}
//	
//};
//
//int main()
//{
//	Shape s;
//	Color c;
//	c.ColorInfo(s);
//
//	s.setName("�ﰢ��");
//	c.setColor("�Ķ���");
//	c.ColorInfo(s);
//
//	return 0;
//}