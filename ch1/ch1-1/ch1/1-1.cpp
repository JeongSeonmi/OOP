//C프로그램을 C++ 프로그램으로 수정하여 실행

#include <iostream>
using namespace std;
int sum(int, int);

int main()
{
	int num = 0;
	cout << "끝 수를 입력하시오.>>";  //printf() → cout<<
	cin >> num;              //scanf() → cin>>
	if (num <= 0)
	{
		cout << "양수를 입력하세요!\n";
		return 0;
	}
	cout << "1에서 " << num << "까지의 합은 " << sum(1, num) << "입니다.\n";
	//출력할 때 <<으로 형식 다른 것들 끼리 한번에 표현함

	return 0;
}


int sum(int a, int b)   //가역함수
{
	int res = 0;
	int k = a;

	for (k = a; k <= b; k++) 
	{
		res += k;
	}

	return res;
}