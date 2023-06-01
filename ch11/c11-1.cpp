/******************************************************************/
/*             HW#11 : 가상함수와 추상 클래스                       */
/*  작성자 : 정선미                    날짜 : 2023년 5월 24일       */
/*                                                                */
/* 문제 정의 : Shape 클래스를 상속받아 타원을 표현하는 Oval, 사각형을 */
/*           표현하는 Rect, 삼각형을 표현하는 Trianglur 클래스를 작성*/
/******************************************************************/
#include<iostream>
#include<string.h>
using namespace std;

class Shape{
protected:     
    string name;
    int width, height;
public :
    Shape(string name="", int width=0, int height=0){ // 생성자. 멤버 변수 초기화
        this->name = name;
        this->width = width;
        this->height = height;
    }
    string getName(){ return name;}
    virtual double getArea(){ return 0; }  //가상 함수
};

class Oval : public Shape{
public:
    Oval(string name, int width, int height) : Shape(name, width, height){;} // 생성자. 멤버 변수 초기화
    double getArea() { return 3.14*width*height; }  //타원 넓이를 구하는 함수로 재정의
};

class Rect : public Shape{
public:
    Rect(string name, int width, int height) : Shape(name, width, height){;} // 생성자. 멤버 변수 초기화
    double getArea(){return width*height;}  //사각형 넓이를 구하는 함수로 재정의
};

class Triangular : public Shape{
public:
    Triangular(string name, int width, int height) : Shape(name, width, height){;} // 생성자. 멤버 변수 초기화
    double getArea(){return (width*height)/2;}  //삼각형 넓이를 구하는 함수로 재정의
};

int main(){
    Shape *p[3];
    p[0] = new Oval("빈대떡", 10, 20);
    p[1] = new Rect("찰떡", 30, 40);
    p[2] = new Triangular("토스트", 30, 40);

    for(int i = 0; i<3; i++)
    {
        cout<<p[i]->getName() << " 넓이는 "<<p[i]->getArea()<<endl;
    }
    for(int i=0; i<3; i++)  //파생 클래스 각각 동적할당 해제
        delete p[i];
}
