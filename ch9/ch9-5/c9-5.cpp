/****************************************************************************/
/*             HW#8 : c9-5													*/
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 22��				*/
/*																		    */
/* ���� ���� : ���� ������ ���� ��¥ å������ �Ǻ��ϴ� �����ڸ� �ۼ��϶�    */
/*																			*/
/****************************************************************************/
#include<iostream>
#include<string.h>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;		//����, ����, ������ ���� �Ű������� �޾� �ʱ�ȭ
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }		//å�� ������ ��ȯ�ϴ� ��� �Լ�
	bool operator! ();  //Ŭ���� �ɹ��Լ�(! ������ �Լ�) 
};

bool Book::operator!() {
	if (price == 0)  // 0���� ��, 0�̸� true, �ƴϸ� false
		return true;
	return false;
}



int main() {
	Book book("�������", 0, 50); //������ 0
	if (!book)
		cout << "��¥��" << endl;
}