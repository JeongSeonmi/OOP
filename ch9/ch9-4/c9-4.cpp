/*********************************************************************/
/*             HW#8 : c9-4											 */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 22��		 */
/*													                 */
/* ���� ���� : 3 ���� == �����ڸ� friend �Լ��� �ۼ��϶�		     */
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
		this->title = title; this->price = price; this->pages = pages;	//����, ����, ������ ���� �Ű������� �޾� �ʱ�ȭ
	}
	void show() {	
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }		//å�� ������ ��ȯ�ϴ� ��� �Լ�

	/* ������ "=="�� �����ε��ؼ� �Ű� ������ �ٸ� �Լ� 3���� ���� */
	friend bool operator == (Book op1, int price);	//�ο��� �̿��ؼ� ture, false ����
	friend bool operator == (Book op1, string title);	//friend�� �̿��ؼ� Ŭ������ �ɹ����� �Լ� ���, 9-3�� �޸� ���� 2���� �Ű������� �޾Ƽ� �̿�
	friend bool operator == (Book op1, Book op2);

};

bool operator == (Book op1, int price) // ����(����)�� ���ϴ� �� ������
{
	if (op1.price == price)		//������ ���� ���̸� ture, �ƴϸ� false
		return true;
	else
		return false;
}

bool operator == (Book op1, string title)	//�̸�(���ڿ�)�� ���ϴ� �� ������
{
	if (op1.title == title)		//������ ���� ���̸� ture, �ƴϸ� false
		return true;
	else
		return false;
}

bool operator == (Book op1, Book op2)	//title, price, pages ��� ���ϴ� �񱳿�����
{
	if (op1.price == op2.price && op1.title == op2.title && op1.pages == op2.pages)	//��� ���� ���̸� ture, �ƴϸ� false
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