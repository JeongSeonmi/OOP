#include <iostream>
#include<string>
using namespace std;

int main()
{
	char password1[100], password2[100];  //Có�� ����� �̿�
	string pw1;
	string pw2;

	cout << "�� ��ȣ�� �Է��ϼ���. >>";
	getline(cin, pw1);
	cout << "�� ��ȣ�� �� �� �� �Է��ϼ���. >>";
	getline(cin, pw2);

	if (pw1 == pw2)
		cout << "�����ϴ�.";  //������ ������ ��
	else
		cout << "���� �ʽ��ϴ�." << endl;
}
