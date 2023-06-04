#include<iostream>
using namespace std;


class Book{
    string title;
    int price;
    int pages;
public : 
    Book(string title ="", int price = 0, int pages = 0){
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show(){
        cout<<title<<" "<<price<<"원 "<<pages<<" 페이지"<<endl;
    }
    string getTitle(){
        return title;
    }
    bool operator == (int pri)
    {
        if(this->price == pri)  
            return true;  //값을 출력하는게 아니라 비교하는 것이므로 bool 사용?
        else
            return false;
    }
    bool operator == (string name){
        if(this->title == name)
            return true;
        else
            return false;
    }

    bool operator == (Book op){
        if(this->title == op.title && this->price == op.price && this->pages == op.pages )
            return true;
        else
            return false;
    }
};

int main(){
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);

    //price 비교
    if(a == 30000) cout<<"정가 30000원"<<endl;

    //title 비교
    if(a == "명품 C++") cout<<"명품 C++ 입니다."<<endl;

    //title, price, pages 모두 비교
    if(a == b) cout<<"두 책이 같은 책입니다."<< endl;
}