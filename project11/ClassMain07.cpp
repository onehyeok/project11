////현재 샤프, 볼펜, 만년필에 대한 클래스가 정의되어 있음
////중복적인 부분을 하나의 클래스로 만든 뒤, 상속을 통해 코드를 최적화하시오.
//
//#include <iostream>
//using namespace std;
//
////현재 샤프, 볼펜, 만년필 공통적인 특징이 존재함. (길이, 양, 색)
////그러므로 이 공통적인 특징들을 하나로 모아서 프로그램 코딩내용을 요약할 필요가 존재.
//
//class Characteristic : //공통적인 특징인 amount를 class로 만듬. 그덕에 샤프, 볼펜, 만년필 하나하나에 amount를 넣을 필요가 사라짐.
//{
//protected :
//	int amount;
//public:
//	int getAmount() { return amount; }
//	void setAmount(int amount) { this->amount = amount; }
//};
//class sharp : public : Characteristic//샤프
//{
//private:
//	int width
//};
//
//class BallPoint //볼펜
//{
//	string color;
//public:
//	int getAmount() { return amount; }
//	void setAmount(int amount) { this->amount = amount; }
//	string getColor() { return color; }
//	void setcolor(string color) { this->color = color; }
//	
//};
//
//class Fountain //만년필
//{
//private:
//	int amount;
//	string color;
//public:
//	int getAmount() { return amount; }
//	void setAmount(int amount) { this->amount = amount; }
//	string getColor() { return color; }
//	void setcolor(string color) { this->color = color; }
//};
//
//int main()
//{
//
//	return 0;
//}