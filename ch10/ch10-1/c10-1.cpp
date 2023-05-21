/***************************************************************/
/*             HW#7 : c10-1                                    */
/*  작성자 : 정선미                    날짜 : 2023년 5월 15일   */
/*                                                             */
/* 문제 정의 : 다음 코드가 실행되도록 Circle을 상속받은          */
/*      NamedCircle 클래스를 작성하고 전체 프로그램을 완성하라.  */
/*                - - - - - - -                                */
/***************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class Circle
{
    int radius;  //원의 반지름
public :
    Circle(int radius =0){ this -> radius = radius; }   //인자 있는 생성자 
    int getRadius(){ return radius; }   //반지름을 가져옴
    void setRadius(int radius){ this->radius = radius; }    //반지름을 설정함
    double getArea(){ return 3.14*radius*radius; }      //반지름을 원 면적을 구함
};

class NamedCircle : public Circle{      //NamedCircle는 Circle를 상속받음
    string name;
public :
    NamedCircle(int r, string name) : Circle(r){this->name = name;}     //이름을 매개변수로 Circle 생성자에게 넘겨줌
    void show(){cout<<"반지름이 "<< getRadius()<<"인 "<<name<<endl;}    //출력 함수
};

int main(){
    NamedCircle waffle(3, "waffle");
    waffle.show();
}