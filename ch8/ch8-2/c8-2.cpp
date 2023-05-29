/***************************************************************/
/*             HW#6 : 8-2                                      */
/*  작성자 : 정선미                   날짜 : 2023년 3월 11일   */
/*                                                             */
/* 문제 정의 :    키보드로부터 반지름 값을 읽어 Circle 객체에  */
/*  반지름을 설정하는 전역함수인 readRadius () 함수를 구현     */
/***************************************************************/
#include<iostream>
using namespace std;

class Circle {
	int radius;
public :
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void readRadius(Circle &c);
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle &c){		//반지름을 입력받는 함수
	int r;
	cout << "정수 값으로 반지름을 입력하세요 >> ";
	cin >> r;
	c.setRadius(r);  //this 포인터로 getArea()를 쓸 때 입력받은 반지름을 사용하도록하는 set함수
}


int main() {
	Circle dount;
	readRadius(dount);
	cout << "dount의 면적 = " << dount.getArea() << endl;  //dount의 면적 계산해서 출력
}