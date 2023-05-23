/****************************************************************************/
/*             HW#8 : c9-5													*/
/*  작성자 : 정선미                    날짜 : 2023년 5월 22일				*/
/*																		    */
/* 문제 정의 : 다음 연산을 통해 공짜 책인지를 판별하는 연산자를 작성하라    */
/*																			*/
/****************************************************************************/
#include<iostream>
#include<string.h>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;		//제목, 가격, 페이지 수를 매개변수로 받아 초기화
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }		//책의 제목을 반환하는 멤버 함수
	bool operator! ();  //클래스 맴버함수(! 연산자 함수) 
};

bool Book::operator!() {
	if (price == 0)  // 0인지 비교, 0이면 true, 아니면 false
		return true;
	return false;
}



int main() {
	Book book("벼룩시장", 0, 50); //가격은 0
	if (!book)
		cout << "공짜다" << endl;
}