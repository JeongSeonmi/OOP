/***************************************************************/
/*             HW#6 : 8-4                                      */
/*  �ۼ��� : ������                   ��¥ : 2023�� 5�� 8��    */
/*                                                             */
/* ���� ���� :. Book Ŭ������ ������ , �Ҹ��� , set() �Լ���   */
/* �����ϰ�, ���� ����� �����Ͽ� ���� ��������ڸ� �ۼ��϶�   */
/*														       */
/***************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

Book::Book(const char* title, int price)
{
	this->price = price;
	int len = strlen(title) +1;		//�Է¹��� ���ڿ��� ���� +1 (/0����)�� ������ ����
	this->title = new char[len];	//���ڿ� ����+1 ��ŭ �����Ҵ�
	strcpy(this->title, title);		//���ڿ� ����
}

Book::~Book()
{
	if(title)
		delete[] title; //�Ҵ�� �޸� ����
}

void Book::set(const char* title, int price) {
	this->price = price;
	int size = strlen(title) + 1; //�Է¹��� ���ڿ��� ���� +1 (/0����)�� ������ ����
	this->title = new char[size]; //���ڿ� ����+1 ��ŭ �����Ҵ�
	strcpy(this->title, title); //���ڿ� ����
}

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();		//������� �Լ�
	java.show();
}