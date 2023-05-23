/*********************************************************************/
/*             HW#8 : c9-3											 */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 22��		 */
/*													                 */
/* ���� ���� : 3���� == ������ �Լ��� ���� Book Ŭ������ �ۼ��϶�    */
/*																     */
/*********************************************************************/

#include<iostream>
#include<string.h>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;  //����, ����, ������ ���� �Ű������� �޾� �ʱ�ȭ
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;  //����Լ�
	}
	string getTitle() { return title; }  //å�� ������ ��ȯ�ϴ� ��� �Լ�

	/* ������ "=="�� �����ε��ؼ� �Ű� ������ �ٸ� �Լ� 3���� ���� */
	bool operator == (int price);	//�ο��� �̿��ؼ� ture, false ����, 
	bool operator == (string title);
	bool operator == (Book op2);
};

bool Book :: operator == (int price)  //����(����)�� ���ϴ� �� ������
{
	if (this->price == price)   //������ ���� ���̸� ture, �ƴϸ� false
		return true;
	else
		return false;
}

bool Book :: operator == (string title)  //�̸�(���ڿ�)�� ���ϴ� �� ������
{
	if (this->title == title)  //������ ���� ���̸� ture, �ƴϸ� false
		return true;
	else
		return false;
}

bool Book ::operator == (Book op2)	//title, price, pages ��� ���ϴ� �񱳿�����
{
	if (this->price == op2.price && this->title == op2.title && this->pages == op2.pages) //��� ���� ���̸� ture, �ƴϸ� false
		return true;
	else
		return false;
}


int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b)cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
}