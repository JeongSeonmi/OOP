/***************************************************************/
/*             HW#6 : 8-4                                      */
/*  작성자 : 정선미                   날짜 : 2023년 5월 8일    */
/*                                                             */
/* 문제 정의 :. Book 클래스의 생성자 , 소멸자 , set() 함수를   */
/* 구현하고, 실행 결과를 참조하여 깊은 복사생성자를 작성하라   */
/*														       */
/***************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price)
{
	this->price = price;
	int len = strlen(title) +1;		//입력받은 문자열의 길이 +1 (/0포함)로 사이즈 설정
	this->title = new char[len];	//문자열 길이+1 만큼 동적할당
	strcpy(this->title, title);		//문자열 복사
}

Book::~Book()
{
	if(title)
		delete[] title; //할당된 메모리 해제
}

void Book::set(const char* title, int price) {
	this->price = price;
	int size = strlen(title) + 1; //입력받은 문자열의 길이 +1 (/0포함)로 사이즈 설정
	this->title = new char[size]; //문자열 길이+1 만큼 동적할당
	strcpy(this->title, title); //문자열 복사
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();		//문자출력 함수
	java.show();
}