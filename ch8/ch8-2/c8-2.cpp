/***************************************************************/
/*             HW#6 : 8-2                                      */
/*  �ۼ��� : ������                   ��¥ : 2023�� 3�� 11��   */
/*                                                             */
/* ���� ���� :    Ű����κ��� ������ ���� �о� Circle ��ü��  */
/*  �������� �����ϴ� �����Լ��� readRadius () �Լ��� ����     */
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

void readRadius(Circle &c){		//�������� �Է¹޴� �Լ�
	int r;
	cout << "���� ������ �������� �Է��ϼ��� >> ";
	cin >> r;
	c.setRadius(r);  //this �����ͷ� getArea()�� �� �� �Է¹��� �������� ����ϵ����ϴ� set�Լ�
}


int main() {
	Circle dount;
	readRadius(dount);
	cout << "dount�� ���� = " << dount.getArea() << endl;  //dount�� ���� ����ؼ� ���
}