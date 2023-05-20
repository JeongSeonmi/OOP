#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 3; i++)   //왼쪽 1단 ~ 2단
	{
		cout << "\n";
		for (int j = 1; j < 10; j++)  //오른쪽 1~9
		{
			cout <<i<<"X"<<j<<"="<<i * j << " ";    //i x j = ? 출력
		}
	}
	return 0;
}