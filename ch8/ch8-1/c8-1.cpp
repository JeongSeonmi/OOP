#include<iostream>
using namespace std;

class Circle {
private :
	int radius;
public :
	Circle() { radius = 1;}
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	double getArea() { return 3.14 * radius * radius; }
	void swap(Circle& a, Circle& b);
};

void Circle :: swap(Circle &a, Circle &b){
	int temp;
	temp = a.getRadius();
	a.setRadius(b.getRadius());
	b.setRadius(temp);
}

int main() {
	Circle a(2.5), b(3);
	cout << "A의 면적 =" << a.getArea() << "\t"<< "B의 면적 = " << b.getArea() << endl;
	swap(a, b);
	cout << "A의 면적 =" << a.getArea() << "\t"<< "B의 면적 = " << b.getArea() << endl;
}