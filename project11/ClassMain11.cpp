//#include <iostream>
//using namespace std;
////������ ���� ����� ���� �� �ֵ��� Ŭ���� Student�� �����Ͻÿ�.
//class Student
//{
//private :
//	string name;
//	int age;
//public :
//	Student(string name, int age) : name(name), age(age) {}
//
//	Student operator=(const Student& other)
//	{
//		name = other.name;
//		//return *this;
//		return Student(name, age);
//	}
//
//	//void operator=(const Student& other)
//	//{
//	//	name = other.name;
//	//	//return *this;
//	//}
//
//	void StudentInfo()
//	{
//		cout << "�̸� : " << name << " ���� : " << age << endl;
//	}
//};
//
//
//int main()
//{
//	Student s1("�̼���", 17);
//	Student s2("������", 18);
//
//	s1 = s2;
//
//	s1.StudentInfo();
//	s2.StudentInfo();
//
//	//���� ���
//	//�̸� : ������ ���� 17
//	//�̸� : ������ ���� 18
//
//
//	//���� 2) ������ ���� ���� ������ ���� ���α׷��� main���� �����ϰ�
//	//å�� �ش��ϴ� Ŭ���� Book�� �ʿ��ϴٸ� �����ڸ� ������ Ŭ������ �����Ͻÿ�.
//	
//	//���� å ���� -> �̸� : A ���� ������ 100 Page / 500 Page
//	//���� ��ŭ�� �������� �Է����ּ��� >> 47
//	//���� å ���� -> �̸� : A ���� ������ 147 Page / 500 page
//	//���� ��ŭ�� �������� �Է����ּ��� >> 400
//	//�ִ� �������� �Ѱ� ���� �� �����ϴ�!
//	return 0;
//}