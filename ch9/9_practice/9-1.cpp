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
    Book operator += (int op)
    {
        this->price = this->price + op;  
        return *this;
    }
    Book operator -= (int op);  //그냥  operator는 이런 형식으로 쓴다. Book 두번
};

Book Book :: operator -= (int op)
{
    this->price -= op;  
    return *this;
}

int main(){
    Book a("청준", 20000, 300), b("미래", 30000, 500);
    a += 500;
    b -= 500;
    a.show();
    b.show();
}