/*********************************************************************/
/*             HW#2 : ch2-4                                          */
/*  �ۼ��� : ������                    ��¥ : 2023�� 3�� 27��        */
/*                                                                   */
/* ���� ���� : ���ڿ� a���� ����c�� ã�� ���� c�� �ִ� ������ ����   */
/*             ������ �����Ѵ�. ���� ���� C�� */
/*********************************************************************/
#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success) //���ڿ� s���� "M"�� ã��
{
	int len = sizeof(a);     //��ġ�� ������ ������ �������� loc�� �ְ� ���߿� �� ����
	for (int i = 0; i < len; i++)   // �迭 a��ŭ for�� �۵�
	{
		if (a[i] == c)          //���� �迭 a�� ���ڿ�c�� ������
		{
			success = true;     //success�� ture ���� �ϰ� �� �迭�� ����
			return a[i];             
		}
	}
}


int main() 
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false)
	{
		cout << "M�� �߰��� �� ����." << endl;
		return 0;
	}
	loc = 'm'; //'M'��ġ�� 'm'���
	cout << s << endl;
}