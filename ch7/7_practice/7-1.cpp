#include<iostream>
using namespace std;

class Circle{
    int radius;
public :
    void setRadius(int radius){this->radius = radius;}
    double getArea(){return 3.14*radius*radius;}

};

int main(){
    int r, num=0;
    Circle* Arr = new Circle[3];  //동적 객체배열 생성
    for(int i=0; i<3;i++){
        cout<<"원 "<<i+1<<"의 반지름 >> ";
        cin>>r;
        Arr[i].setRadius(r);
        if(Arr[i].getArea()>100)
            num++;
    }
    cout<<"면적이 100보다 큰 원"<< num<<"개 입니다.";
    delete Arr;
};
