#include<iostream>
using namespace std;

class Circle {
	int radius;  //���� ������ ��
public:
	void setRadius(int radius);  //�������� �����Ѵ�.
	double getArea(); //������ �����Ѵ�.
};

void Circle::setRadius(int r)   //radius�� �Է¹��� ���������� 
{
	radius = r;
}

double Circle::getArea()
{
	return radius * radius * 3.14;  //�� ����(r^2 * 3.14)�� ����
}


int main() {
	int r;
	int num = 0;
	Circle* Arr = new Circle[3];  //���� ��ü�迭 ����
	for (int i = 0; i < 3; i++)
	{
		cout << "�� " << i + 1 << "�� ������>>";  //�迭�� n-1������ ī��Ʈ�ǹǷ� i+1�ؼ� ǥ��
		cin >> r;
		Arr[i].setRadius(r);
		if (Arr[i].getArea() > 100)
			num++;   //���̰� 100�� ������ num�� ī��Ʈ�ǵ���
	}
	cout << "������ 100���� ū �� " << num << "�� �Դϴ�." << endl;
}