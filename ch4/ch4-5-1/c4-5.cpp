/******************************************************************/
/*             HW#3 : c4-5                                        */
/*  �ۼ��� : ������                    ��¥ : 2023�� 4�� 3��      */
/*                                                                */
/* ���� ���� : &�� �Էµ� ������ �������� ���� ���ڿ��� �Է¹ް�  */
/*             ã�� ���ڿ��� ��ġ�� ���ڿ��� �Է¹޾� ���ڿ� �ϼ� */
/******************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &���� �Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore();  //&�Է� �� ����� ���͸� �����ϱ� ���� �ڵ�

	string fi, re;
	cout << "\n" << "find = ";
	getline(cin, fi, '\n');    //�˻��� �ܾ �Է¹���

	cout <<"replace = ";
	getline(cin, re, '\n');    //��ġ�� �ܾ �Է¹���

	int startindex = 0;

	while (1) {
		int index = s.find(fi, startindex);     //�Է¹��� �ܾ ���忡�� ã��
		if (index == -1)						//ã�� ���Ұ�� break;
			break;

		s.replace(index, fi.length(), re);     //index���� ���ڿ� fi�� ���̸�ŭ re�� ����
		startindex = index + re.length();      
	}

	cout << "\n" << s << endl;    //��ġ �Ϸ��� ���� ���� ���ڿ� ���
}