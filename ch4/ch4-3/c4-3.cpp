/***************************************************************/
/*             HW#3 : c4-3                                     */
/*  작성자 : 정선미                   날짜 : 2023년 4월 3일    */
/*                                                             */
/* 문제 정의 : 면적 계산 기능을 가진 Rectangle 클래스 작성하고 */
/*             전체 프로그램 완성시키기                        */
/***************************************************************/

#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Rectangle{   //Rectangle 클래스 선언
public:	
		int width;      //너비, 높이, 면적 맴버변수 선언
		int height;
		int getArea();
};

int Rectangle::getArea() {  //맴버 함수명 : getArea
	return width * height; //클래스 구현부, 사각형의 면적을 구한다.
}

int main() {

	Rectangle rect;  //객체 reat rect 생성
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;  //사각형 면적 출력
}