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
    double getArea(){return 3.14*radius*radius;}
};

class NamedCircle : public Circle
{
    string name;
public:    
    NamedCircle(int radius=0, string name=" ") : Circle(radius){this->name = name;}
    void setName(string name){this->name = name;}
    string getName(){return name;}
};

int main(){
    NamedCircle pizza[5]; 
    int r;
    string name;
    cout<<"5개의 정수 반지름과 원의 이름을 입력하세요."<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<i+1<<" >> ";
        cin>> r >> name;
        pizza[i].setRadius(r);  //set()함수 : 맴버변수에 값을 바꿀 수 있는 함수
        pizza[i].setName(name);     //여기서는 입력받은 반지름과 이름을 배열에 저장(값변경)
    }

    double max = pizza[0].getArea();  
    for(int j=1; j<5; j++){    
        if(max < pizza[j].getArea()){   //get()함수 : 맴버변수의 값만 가져올 수 있는 함수
            max = pizza[j].getArea();   //여기서는 값을 가져와서 비교하고 가장 큰 피자를 구하는 중
            name = pizza[j].getName();  
        }
    }

    cout<<"가장 면적이 큰 피자는 "<< name <<"입니다."<<endl;

}