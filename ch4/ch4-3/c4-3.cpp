/***************************************************************/
/*             HW#3 : c4-3                                     */
/*  �ۼ��� : ������                   ��¥ : 2023�� 4�� 3��    */
/*                                                             */
/* ���� ���� : ���� ��� ����� ���� Rectangle Ŭ���� �ۼ��ϰ� */
/*             ��ü ���α׷� �ϼ���Ű��                        */
/***************************************************************/

#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Rectangle{   //Rectangle Ŭ���� ����
public:	
		int width;      //�ʺ�, ����, ���� �ɹ����� ����
		int height;
		int getArea();
};

int Rectangle::getArea() {  //�ɹ� �Լ��� : getArea
	return width * height; //Ŭ���� ������, �簢���� ������ ���Ѵ�.
}

int main() {

	Rectangle rect;  //��ü reat rect ����
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;  //�簢�� ���� ���
}