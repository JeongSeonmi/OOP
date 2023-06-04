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
    bool operator! ()
    {
        if (price == 0)  // 0인지 비교, 0이면 true, 아니면 false
		    return true;
	    return false;
    }
};

int main(){
    Book book("벼룩시장", 0, 50); 
    if(!book) cout<<"공짜다"<<endl;  //!book << 이게 true이어야 돌아감
}