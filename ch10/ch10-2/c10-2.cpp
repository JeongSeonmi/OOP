/******************************************************************/
/*             HW#7 : c10-2                                       */
/*  작성자 : 정선미                     날짜 : 2023년 5월 15일     */
/*                                                                */
/* 문제 정의 : 다음과 같은 배열을 선언하여 다음 실행결과가 나오도록  */
/*   Circle을 상속받은 NamedCircle 클래스와 main() 함수            */
/*   등 필요한 함수를 작성                                         */
/******************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class Circle
{
    int radius;  //원의 반지름
public :
    Circle(int radius =0){this -> radius = radius;}   //Circle 클래스 생성자
    int getRadius(){ return radius; }   //반지름을 가져옴
    void setRadius(int radius){ this->radius = radius; }    //반지름을 설정함
    double getArea(){ return 3.14*radius*radius; }      //반지름을 원 면적을 구함
};

class NamedCircle : public Circle //Circle을 상속받음 
{      
    string name;
public :   //반지름, 이름 초기화
    NamedCircle(int r=0, string name=" ") : Circle(r){this->name = name;}   //이름을 매개변수로 Circle 생성자에게 넘겨줌
    string getName(){return name;}
    void setName(string name){this->name = name;}
};

int main(){
    NamedCircle pizza[5];
    string name;
    int r;
    cout<<"5개의 정수 반지름과 원의 이름을 입력하세요."<<endl;
    for(int i=0; i<5; i++)     //5개의 반지름과 이름을 입력받기
    {
        cout<<i+1<<" >> ";
        cin >> r >> name;
        pizza[i].setRadius(r);
        pizza[i].setName(name);
    }

    double max = pizza[0].getArea();  //가장 큰 피자 구하기
    for(int j=1; j<5; j++){    
        if(max < pizza[j].getArea()){
            max = pizza[j].getArea(); 
            name = pizza[j].getName();  //더 큰 피자가 있을 때, max와 name으로 설정
        }
    }
    cout<<"가장 면적이 큰 피자는 "<< name <<"입니다."<<endl;
}