#include<iostream>
using namespace std;

class Rectangle
{
public :
	int width, height, length;
	Rectangle(); 
	Rectangle(int w, int h); 
	Rectangle(int length); 
	bool isSquare();
};

Rectangle::Rectangle() {
	width = height = 1;
}
Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}
Rectangle::Rectangle(int lenght) 
{
	width = length;
	height = length;
}

bool Rectangle::isSquare() {   //rect2이 정사각형이 아닐 경우 출력하지 않도록(false가 되도록)
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl; 
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}