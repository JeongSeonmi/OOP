//C���α׷��� C++ ���α׷����� �����Ͽ� ����

#include <iostream>
using namespace std;
int sum(int, int);

int main()
{
	int num = 0;
	cout << "�� ���� �Է��Ͻÿ�.>>";  //printf() �� cout<<
	cin >> num;              //scanf() �� cin>>
	if (num <= 0)
	{
		cout << "����� �Է��ϼ���!\n";
		return 0;
	}
	cout << "1���� " << num << "������ ���� " << sum(1, num) << "�Դϴ�.\n";
	//����� �� <<���� ���� �ٸ� �͵� ���� �ѹ��� ǥ����

	return 0;
}


int sum(int a, int b)   //�����Լ�
{
	int res = 0;
	int k = a;

	for (k = a; k <= b; k++) 
	{
		res += k;
	}

	return res;
}