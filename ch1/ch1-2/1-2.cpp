#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 3; i++)   //���� 1�� ~ 2��
	{
		cout << "\n";
		for (int j = 1; j < 10; j++)  //������ 1~9
		{
			cout <<i<<"X"<<j<<"="<<i * j << " ";    //i x j = ? ���
		}
	}
	return 0;
}