//#include <iostream>
//using namespace std;
//
////Ŭ���� ��� ���
////class Ŭ������ <- Ŭ������ �̸��� �ۼ��մϴ�.
////{
////public :  <- �ܺο� ������ ������ �������� �ۼ��ϴ� ������ ���� ǥ��(���� ���� ������)
////   �����ڸ�(); �����ڴ� Ŭ������ �̸��� ������ �Լ��� �ǹ��մϴ�.
////	            ���� Ÿ���� �ۼ����� �ʽ��ϴ�.
////	            �� �Լ��� Ŭ������ �������� ��� �ڵ����� ȣ��˴ϴ�.
////	            �� ���� �����ϴ� ������ ��ü ���� ���� �۾��� ǥ���� �� �ֽ��ϴ�.
////	�ʵ��; <- Ŭ���� ���ο��� ����� ����(��� ����)�� ��Ī�ϴ� ����Դϴ�.
////	�ʵ�� ��ü ���� ���α׷��ֿ��� ��ü�� ���� ������ ǥ���ϴ� �뵵�� ���˴ϴ�.
////	�޼ҵ��(); <- Ŭ���� ���ο��� ����� �Լ�(��� �Լ�)�� ��Ī�ϴ� ����Դϴ�.
////	�޼ҵ�� ��ü ���� ���α׷��ֿ��� ��ü�� ���� ���� , ����� ǥ���ϴ� �뵵�� ���˴ϴ�.
////private : <- �ܺο� �������� ���� �������� �ۼ��ϴ� ������ ���� ǥ��
////	...
////};
//
////enum�� ����� �ܾ�� ǥ���� �� �ִ� ������ �������Դϴ�.
////���α׷����� ���� ������ ������ ǥ���ϰ��� �� �� ����ϸ�, enum ��ü�� ���� ���� ������ ������ �ʽ��ϴ�.
////(�и��� ���� �ĺ� ����)
//enum Genre { Balad, Trot, Dance, Rap, Rock , Indi };
//enum Category {KPOP,JPOP,POP}; //���� K-pop ������ �ƴ� �ѱ� / �Ϻ� / �̱� ������ �ؼ����ּ���
//
//class Song
//{
//private :
//	string title, artist;
//	Genre genre;
//	Category category;
//public :
//	Song(string title, string artist, Genre genre, Category category); //������
//	void SongInfo();
//};
//
//int main()
//{
//	Song s("��簻","BIBI", Indi, KPOP);
//	//�����ڸ� �����ϸ� Ŭ���� ���� �� �־��� ���� �����ؼ� �۾��ϱ⿡
//	//�߰��� �� ���� ������ �ʿ䰡 ���� ���ϰ� ����� �����մϴ�.
//
//	s.SongInfo();
//
//	return 0;
//}
////Ŭ�������� ������� �Լ���� ��õǾ� �־� �ڵ带 �м��ϱⰡ �����ϴ�.
//
//Song::Song(string title, string artist, Genre genre, Category category)
//{
//	//�������� ���� : Ŭ���� ���� �ÿ� ������ �۾�(�ʱ�ȭ)�� ����ϴ� �Լ�
//	//Ŭ���� ���� �� �Ű������� ���� Ŭ������ �ʵ� ������ �����ϴ� ���
//	this->title = title;
//	//this->(�� ������) : Ŭ���� �ڱ� �ڽ��� ������ �ִ� ������ ����ϴ� ���
//	//�Ű������� ���޹��� ���� Ŭ������ �ʵ� ���� �̸��� ���� ��� ������ ���� ����մϴ�.
//	this->artist = artist;
//	this->genre = genre;
//	this->category = category;
//}
//
//string GenretoString(Genre genre)
//{
//	switch (genre)
//	{
//	case Balad:
//		return "�߶��";
//	case Trot:
//		return "Ʈ��Ʈ";
//	case Dance:
//		return "��";
//	case Rap:
//		return "��";
//	case Rock:
//		return "��";
//	case Indi:
//		return "�ε�";
//	}
//}
//
////�� �뷡�� � ������ ������ �ִ� �� ����ϴ� ���
//void Song::SongInfo()
//{
////	string genre_str;
//	string category_str;
//
//	//�帣 ���
//
//	//ī���� ����
//	switch (category)
//	{
//	case KPOP :
//		category_str = "�ѱ���"; break;
//	case JPOP :
//		category_str = "�Ϻ���"; break;
//	case POP :
//		category_str = "�ܱ���"; break;
//	}
//
//	cout << "===============================" << endl;
//	cout << "���� : " << title << endl;
//	cout << "��Ƽ��Ʈ : " << artist << endl;
//	cout << "�帣 : " << GenretoString(genre) << endl;
//	cout << "ī�װ� : " << category_str << endl;
//	cout << "===============================" << endl;
//}
