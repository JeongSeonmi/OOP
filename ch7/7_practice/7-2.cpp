#include<iostream>
using namespace std;

class Color{
    int red, green, blue;
public:
    Color(){red = green = blue =0;}
    Color(int r, int g, int b){red = r; green = g; blue = b;}
    void setColor(int r, int g, int b){red = r; green = g; blue = b;}
    void show(){cout<<red<<" "<<green<<" "<<blue<<endl;}
};

int main(){
    Color screenColor(255, 0, 0);   //빨간색의 screenColor 객체 생성
    Color *p;   //Color 타입의 포인터 변수 p 생성
    p= &screenColor;    //p가 screenColor의 주소를 가지도록 코드 작성
    p->show();  //p와 show()를 이용하여 screenColor색 코드 출력
    Color colors[3];    //Color의 일차원 배열 colors 선언. 원소는 3개 
    p = colors;  //배열은 &을 사용하지 않는다.

    //pdhk setColor()을 이용하여 colors[0], colors[1], colors[2]가 각각 빨 초 파를 가지도록 코드 작성
    colors[0].setColor(255, 0, 0);
    colors[1].setColor(0, 255, 0);
    colors[2].setColor(0, 0, 255);

    //p와 show()를 이용하여 colors 배열의 모든 객체의 색 출력. for문 이용
    for(int i =0; i<3; i++)
    {
        p[i].show();
    }
}