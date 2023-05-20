#include<iostream>
using namespace std;

class Circle {
	int radius;  //원의 반지름 값
public:
	void setRadius(int radius);  //반지름을 설정한다.
	double getArea(); //면적을 리턴한다.
};

void Circle::setRadius(int r)   //radius를 입력받은 반지름으로 
{
	radius = r;
}

double Circle::getArea()
{
	return radius * radius * 3.14;  //원 넓이(r^2 * 3.14)로 리턴
}


int main() {
	int r;
	int num = 0;
	Circle* Arr = new Circle[3];  //동적 객체배열 생성
	for (int i = 0; i < 3; i++)
	{
		cout << "원 " << i + 1 << "의 반지름>>";  //배열은 n-1순으로 카운트되므로 i+1해서 표기
		cin >> r;
		Arr[i].setRadius(r);
		if (Arr[i].getArea() > 100)
			num++;   //넓이가 100이 넘으면 num이 카운트되도록
	}
	cout << "면적이 100보다 큰 원 " << num << "개 입니다." << endl;
}