#include<iostream>
#include<cstring>

using namespace std;

class Circle
{
    int radius;
public :
    Circle(int radius =0){this->radius = radius;}
    void setRadius(int radius){ this->radius = radius; }
    int getRadius(){return radius;}
};

class NamedCircle : public Circle
{
    string name;
public:    //NamedCircle에서 stringname만 있는 생성자를 만들경우 show가 반지름을 읽지 못함
    NamedCircle(int radius, string name) : Circle(radius) {
        this->name = name;
    }
    
    void show(){
        cout<<"반지름이 "<< getRadius()<<"인 "<<name<<endl;
    }
};


int main(){
    NamedCircle waffle(3, "waffle");  //반지름이 3이고 이름이 waffle인 원
    waffle.show();
}