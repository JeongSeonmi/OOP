#include<iostream>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }

};

int main() {
    int r, num = 0;
    Circle* Arr = new Circle[3];  //���� ��ü�迭 ����
    for (int i = 0; i < 3; i++) {
        cout << "�� " << i + 1 << "�� ������ >> ";
        cin >> r;
        Arr[i].setRadius(r);
        if (Arr[i].getArea() > 100)
            num++;
    }
    cout << "������ 100���� ū ��" << num << "�� �Դϴ�.";
    delete Arr;
};
