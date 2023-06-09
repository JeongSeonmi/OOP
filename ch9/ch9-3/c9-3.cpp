/*********************************************************************/
/*             HW#8 : c9-3											 */
/*  작성자 : 정선미                    날짜 : 2023년 5월 22일		 */
/*													                 */
/* 문제 정의 : 3개의 == 연산자 함수를 가진 Book 클래스를 작성하라    */
/*																     */
/*********************************************************************/

#include<iostream>
#include<string.h>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;  //제목, 가격, 페이지 수를 매개변수로 받아 초기화
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;  //출력함수
	}
	string getTitle() { return title; }  //책의 제목을 반환하는 멤버 함수

	/* 연산자 "=="를 오버로딩해서 매개 변수가 다른 함수 3개를 구현 */
	bool operator == (int price);	//부울을 이용해서 ture, false 리턴, 
	bool operator == (string title);
	bool operator == (Book op2);
};

bool Book :: operator == (int price)  //가격(정수)를 비교하는 비교 연산자
{
	if (this->price == price)   //가격이 같은 값이면 ture, 아니면 false
		return true;
	else
		return false;
}

bool Book :: operator == (string title)  //이름(문자열)을 비교하는 비교 연산자
{
	if (this->title == title)  //제목이 같은 값이면 ture, 아니면 false
		return true;
	else
		return false;
}

bool Book ::operator == (Book op2)	//title, price, pages 모두 비교하는 비교연산자
{
	if (this->price == op2.price && this->title == op2.title && this->pages == op2.pages) //모두 같은 값이면 ture, 아니면 false
		return true;
	else
		return false;
}


int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b)cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
}