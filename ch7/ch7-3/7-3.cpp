#include<iostream>
using namespace std;

class Person {
	string name;
public :
	Person() { name = ""; }
	Person(string name) { this->name = name; }
	string getName() { return name;}
	void setName(string name) { this->name = name;}
};

class Family {
	string name;
	Person* p; //Person �迭 ������
	int size;  //Person �迭�� ũ��, ���� ������ ��
public:
	Family(string name, int size);  // size ������ŭ Person �迭 ���� ����
	void setName(int index, string name);
	void show();  //��� ���� ������ ���
	~Family();
};

Family::Family(string name, int size){
	p = new Person[size];  //���� �Ҵ�
	this->name = name;
	this->size = size;
}

void Family::setName(int index, string name){
	p[index].setName(name);  //�迭�� �̸� �Է³���
}

void Family::show() {  //���� �̸� ��� �Լ�
	cout << "Simpson ������ ������ ���� " << size << "���Դϴ�." << endl;
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";  //�迭�� ����� ������� ���

}

Family::~Family() {
	delete[] p;  //malloc�� free()���� , p�� �Ҵ�� ������ ������ش�
}

int main()
{
	Family* simpson = new Family("Simpson", 3);  //3������ ������ ����
	simpson->setName(0, "Mr.Simpson");  //�������� ������ ���������Ƿ� "->" ����ؼ� �Լ� ����
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}