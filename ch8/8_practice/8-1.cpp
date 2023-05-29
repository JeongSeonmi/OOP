#include<iostream>
using namespace std;

class Circle
{
private:
	    int radius;
public:
	Circle() { radius = 1; };	//반지름을 1로 초기화 하는 생성자
	Circle(int radius) { this->radius = radius; }	//주어진 반지름을 초기화 하는 생성자
	//void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }		//원의 면적을 계산하는 함수
	//double getRadius() { return radius; }
	void swap(Circle &a, Circle &b);	//swap()함수, 두 객체를 서로 교환한다.
};

void swap(Circle &a, Circle &b) //참조에 의한 호출
{
	Circle tmp;  //임시 객체를 사용하여 값을 교환한다.
	tmp = a;
	a = b;
	b = tmp;	
}

int main(){
    Circle a(2.5), b(3);	//Circle 객체 a와 b를 생성하고 각각의 반지름을 초기화
    cout<<"A의 면적 = "<<a.getArea()<<"\t"<<"B의 면적 = "<<"\t"<<b.getArea()<<endl;
    swap(a, b);	// A와 B의 값을 교환하는 함수 호출
    cout<<"A의 면적 = "<<a.getArea()<<"\t"<<"B의 면적 = "<<"\t"<<b.getArea()<<endl;
}