#include<iostream>
using namespace std;

int main() {
	char c[100];
	int count = 0;
	cout << "문자들을 입력하라 (100개 미만)." << endl;
	cin.getline(c, 100, '\n');   //용량을 100으로 설정하고 배열 c에 입력받음

	for (int i = 0; i < c[i]; i++)
	{
		if(c[i] == 'x' || c[i] == 'X')   //배열을 하나씩 이동하면서 문장 속에 X or x가 있는지 비교
			count ++;	
	}


	cout << 'x' << "의 개수는 " << count << endl;
}