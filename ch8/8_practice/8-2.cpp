
#include<iostream>
using namespace std;

class Circle{
    int radius;
public :
    Circle(){radius =1;}
    Circle(int radius){this -> radius = radius;}
    void setRadius(int radius){ this-> radius = radius;}
    double getArea(){return 3.14 *radius*radius;}
    void readRadius(Circle &c);  //전역함수를 클래스에? 좀더 공부 해봐야할듯
};

void readRadius(Circle &c) //참조에 의한 호출
{
    int r;
    cout<<"정수 값으로 반지름을 입력하세요>>";
    cin>>r;
    c.setRadius(r);
};

int main(){
    Circle donut;
    readRadius(donut);
    cout<<"donut의 면적 = "<<donut.getArea()<<endl;
}