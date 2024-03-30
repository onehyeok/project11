#include <iostream>
using namespace std;


//Ŭ���� ��� ���

//class Ŭ������
//{
//public: <- �ܺο� ������ ������ �������� �ۼ��ϴ� ������ ���� ǥ��(���� ���� ������)

// �����ڸ�(); �����ڴ� Ŭ������ �̸��� ������ �Լ��� �ǹ���.
// ���� Ÿ���� �ۼ����� ����.
// �� �Լ��� Ŭ������ �������� ��� �ڵ����� ȣ��ȴ�.
// �� ���� �����ϴ� ������ ��ü ���� ���� �۾��� ǥ���� �� �ִ�.

//	�ʵ��; <- Ŭ���� ���ο��� ����� ����(��� ����)�� ��Ī�ϴ� ���
//	�ʵ�� ��ü ���� ���α׷��̿��� ��ü�� ���� ������ ǥ���ϴ� �뵵�� ���ȴ�.

//	�޼ҵ��(); <-Ŭ���� ���ο��� ����� �Լ�(��� �Լ�)�� ��Ī�ϴ� ���
//	�޼ҵ�� ��ü ���� ���α׷��ֿ��� ��ü�� ���� ����, ����� ǥ���ϴ� �뵵�� ���ȴ�.
//private : <- �ܺο� �������� ���� �������� �ۼ��ϴ� ������ ���� ǥ��
//
//};

//enum�� ����� �ܾ�� ǥ���� �� �ִ� ������ ������
//���α׷����� ���� ������ ������ ǥ���ϰ��� �� �� ����ϸ�, enum ��ü�� ���� ���� ���� ���� �ʴ�.
//(�и��� ����, ���� �ĺ����̶� �����ϸ� ��.)
enum Genre {Balad, Trot, Dance, Rap, Rock, Indi};
enum Category {KPOP,JPOP,POP}; //���� K-pop ������ �ƴ� �ѱ� / �Ϻ� / �̱� �����θ� �ؼ�



class Song
{
private : 
	string title, artist;
	Genre genre;
	Category category;
public:
	
	Song(string title, string artist, Genre genre, Category category); //������
	void SongInfo();
};
int main()
{
	Song s("��簻", "BIBI", Indi, KPOP); //�����ڸ� �����ϸ� Ŭ���� ���� �� �־��� ���� �����ؼ� �۾��ϱ⿡ �߰���
	//�� ���� ������ �ʿ䰡 ���� ���ϰ� ����� �����ϴ�.

	s.SongInfo();

	return 0;
}

//Ŭ�������� ������� �Լ���� ��õǾ� �־� �м��ϱⰡ ����.

Song::Song(string title, string artist, Genre genre, Category category)
{
	//�������� ���� : Ŭ���� ���� �ÿ� ������ �۾�(�ʱ�ȭ)�� ����ϴ� �Լ�
	//Ŭ���� ���� �� �Ű� ������ ���� Ŭ������ �ʵ� ������ �����ϴ� ���
	this->title = title;
	//this ->(�� ������) : Ŭ���� �ڱ� �ڽ��� ������ �ִ� ������ ����ϴ� ���
	//�Ű������� ���޹��� ���� Ŭ������ �ʵ� ���� �̸��� ���� ��� ������ ���� ����Ѵ�.
	this->artist = artist;
	this->genre = genre;
	this->category = category;
}

//�� �뷡�� � ������ ������ �ִ� �� ����ϴ� ���
void Song::SongInfo()
{
	string genre_str;   //���� ����.
	string category_str; 

	
	//�帣 ���
	switch (genre)
	{
	case Balad:
		genre_str = "�߶��"; break;

	case Trot:
		genre_str = "Ʈ��Ʈ"; break;

	case Dance:
		genre_str = "��"; break;

	case Rap:
		genre_str = "��"; break;
	
	case Indi:
		genre_str = "�ε�"; break;
	}
	//ī�װ� ����
	switch (category)
	{
	case KPOP :
		category_str = "�ѱ���"; break;
	case JPOP :
		category_str = "�Ϻ���"; break;
	case POP :
		category_str = "�ܱ���"; break;
	}
	
	cout << "============================" << endl;
	cout << "���� : " << title << endl;
	cout << "��Ƽ��Ʈ : " << artist << endl;
	cout << "�帣 : " << genre_str << endl;
	cout << "ī�װ� : " << category_str << endl;
	cout << "============================" << endl;
}
