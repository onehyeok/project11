#include <iostream>
using namespace std;


//클래스 사용 방법

//class 클래스명
//{
//public: <- 외부에 공개를 진행할 정보들을 작성하는 영역에 대한 표현(접근 제한 지시자)

// 생성자명(); 생성자는 클래스의 이름과 동일한 함수를 의미함.
// 따로 타입을 작성하지 않음.
// 아 함수는 클래스를 생성했을 경우 자동으로 호출된다.
// 이 값을 수정하는 것으로 객체 생성 시의 작업을 표현할 수 있다.

//	필드명; <- 클래스 내부에서 설계된 변수(멤버 변수)를 지칭하는 용어
//	필드는 객체 지향 프로그래미에서 객체에 대한 정보를 표현하는 용도로 사용된다.

//	메소드명(); <-클래스 내부에서 설계뙨 함수(멤버 함수)를 지칭하는 용어
//	메소드는 객체 지향 프로그래밍에서 객체에 대한 동작, 기능을 표현하는 용도로 사용된다.
//private : <- 외부에 공개하지 않을 정보들을 작성하는 영역에 대한 표현
//
//};

//enum은 상수를 단어로 표현할 수 있는 열거형 데이터
//프로그램에서 같은 유형의 정보를 표현하고자 할 때 사용하며, enum 자체는 따로 뜻을 갖고 있지 않다.
//(분리가 목적, 종류 식별용이라 생각하면 됨.)
enum Genre {Balad, Trot, Dance, Rap, Rock, Indi};
enum Category {KPOP,JPOP,POP}; //실제 K-pop 구분이 아닌 한국 / 일본 / 미국 정도로만 해석



class Song
{
private : 
	string title, artist;
	Genre genre;
	Category category;
public:
	
	Song(string title, string artist, Genre genre, Category category); //생성자
	void SongInfo();
};
int main()
{
	Song s("밤양갱", "BIBI", Indi, KPOP); //생성자를 수정하면 클래스 생성 시 넣어줄 값을 전달해서 작업하기에 추가로
	//더 값을 수정할 필요가 없어 편리하게 사용이 가능하다.

	s.SongInfo();

	return 0;
}

//클래스에서 만들어진 함수라고 명시되어 있어 분석하기가 쉽다.

Song::Song(string title, string artist, Genre genre, Category category)
{
	//생성자의 역할 : 클래스 생성 시에 진행할 작업(초기화)를 담당하는 함수
	//클래스 생성 시 매개 변수의 값을 클래스의 필드 값으로 설정하는 기능
	this->title = title;
	//this ->(디스 포인터) : 클래스 자기 자신이 가지고 있는 값임을 명시하는 기능
	//매개변수로 전달받은 값이 클래스의 필드 값과 이름이 같을 경우 구분을 위해 사용한다.
	this->artist = artist;
	this->genre = genre;
	this->category = category;
}

//이 노래가 어떤 정보를 가지고 있는 지 출력하는 기능
void Song::SongInfo()
{
	string genre_str;   //변수 만듦.
	string category_str; 

	
	//장르 출력
	switch (genre)
	{
	case Balad:
		genre_str = "발라드"; break;

	case Trot:
		genre_str = "트로트"; break;

	case Dance:
		genre_str = "댄스"; break;

	case Rap:
		genre_str = "랩"; break;
	
	case Indi:
		genre_str = "인디"; break;
	}
	//카테고리 설정
	switch (category)
	{
	case KPOP :
		category_str = "한국곡"; break;
	case JPOP :
		category_str = "일본곡"; break;
	case POP :
		category_str = "외국곡"; break;
	}
	
	cout << "============================" << endl;
	cout << "제목 : " << title << endl;
	cout << "아티스트 : " << artist << endl;
	cout << "장르 : " << genre_str << endl;
	cout << "카테고리 : " << category_str << endl;
	cout << "============================" << endl;
}
