#include<iostream>
using namespace std;

class Oval
{
private:
	int width, height;
public:
	Oval(int w, int h);
	Oval();
	~Oval();
	int getWidth();
	int getHeight();
	void set(int a, int b);
	void show();
};

Oval::Oval(int w, int h)
{
	width = w;
	height = h;
}

Oval::Oval()
{
	width = 1;
	height = 1;
}

Oval::~Oval()
{
	cout << "Oval �Ҹ� " << "width : " << width << " " << "height : " << height << endl;
}

int Oval :: getWidth()
{
	return width;
}

int Oval :: getHeight()
{
	return height;
}

void Oval::set(int a, int b) 
{
	width = a; 
	height = b;
}

void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}


int main() 
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}