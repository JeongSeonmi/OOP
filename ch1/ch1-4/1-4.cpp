#include<iostream>
using namespace std;

int main() {
	char c[100];
	int count = 0;
	cout << "���ڵ��� �Է��϶� (100�� �̸�)." << endl;
	cin.getline(c, 100, '\n');   //�뷮�� 100���� �����ϰ� �迭 c�� �Է¹���

	for (int i = 0; i < c[i]; i++)
	{
		if(c[i] == 'x' || c[i] == 'X')   //�迭�� �ϳ��� �̵��ϸ鼭 ���� �ӿ� X or x�� �ִ��� ��
			count ++;	
	}


	cout << 'x' << "�� ������ " << count << endl;
}