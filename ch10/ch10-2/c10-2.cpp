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
    double MaxArea();
};

class NamedCircle : public Circle{      //NamedCircle는 Circle를 상속받음
    string name;
public :
    NamedCircle() : Circle(0) {name = "";}
    NamedCircle(int r, string name) : Circle(r){this->name = name;}     //이름을 매개변수로 Circle 생성자에게 넘겨줌
    string getName(){return name;}
    void setName(string name){this->name = name;}
};

int main(){
    NamedCircle pizza[5];
    string name;
    int r;
    cout<<"5개의 정수 반지름과 원의 이름을 입력하세요."<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<i+1<<" >> ";
        cin >> r >> name;
        pizza[i].setRadius(r);
        pizza[i].setName(name);
    }

    double max = pizza[0].getArea();
    for(int j=1; j<5; j++){    
        if(max < pizza[j].getArea()){
            max = pizza[j].getArea(); 
            name = pizza[j].getName();
        }
    }

    
    cout<<"가장 면적이 큰 피자는 "<< name <<"입니다."<<endl;
}