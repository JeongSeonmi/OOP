#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Book{
    char *title;
    int price;
public :
    Book(char *title, int price);
    Book(const Book &book);
    ~Book();
    void set(char*title, int price);
    void show(){cout<<title<<" "<<price<<"원"<<endl;}
};

Book :: Book(char *title, int price)
{
    this->price = price;
    int len = strlen(title) +1;		//입력받은 문자열의 길이 +1 (/0포함)로 사이즈 설정
	this->title = new char[len];
    strcpy(this->title, title);
}

Book :: Book(const Book &book)
{
    this->price = book.price;
    int len = strlen(book.title)+1;
    this->title = new char[len];
    strcpy(this->title, book.title);

}

void Book :: set(char *title, int price)
{
    this->price = price;  //객체간의 대입 : 대입 연산자 이용????
    int len = strlen(title) +1;		//입력받은 문자열의 길이 +1 (/0포함)로 사이즈 설정
	this->title = new char[len];
    strcpy(this->title, title);
}


Book::~Book(){
    delete [] title;
}

int main(){
    Book cpp("명품 C++", 10000);
    Book java(cpp);  //객체간의 초기화 : 복사 생성자 이용
    java.set("명품자바", 20000); //대입연산자를 사용하지 않고 set 함수를 이용해서 그 역할을 충당하고 있다.
    cpp.show();
    java.show();
}

/* 
## string 사용 ##
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
 
class Book {
    string title;
    int price;
public:
    Book(string title, int price);
    void set(string title, int price);    
    void show() {cout << title << ' ' << price << "원" << endl;}
};
 
Book::Book(string title, int price){
    this->price = price;
    this->title = title;
}
 
void Book::set(string title, int price) {
    this->price = price;
    this->title = title;
}
 
int main() {
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}
*/