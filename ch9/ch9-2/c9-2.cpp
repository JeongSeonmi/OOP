#include<iostream>
#include<string.h>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	friend Book operator += (Book& a, int b); //+=연산자 함수 선언
	friend Book operator -= (Book& a, int b);
};

Book operator+= (Book& a, int b) {
	a.price += b;
	return a;
};

Book operator-= (Book& a, int b) {
	a.price += b;
	return a;
}


int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500; // 책 a의 가격 500원 증가
	b -= 500; // 책 b의 가격 500원 감소
	a.show();
	b.show();
}