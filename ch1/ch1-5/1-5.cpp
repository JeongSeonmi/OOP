#include <iostream>
#include<string>
using namespace std;

int main()
{
	char password1[100], password2[100];  //C처럼 쓸경우 이용
	string pw1;
	string pw2;

	cout << "새 암호를 입력하세요. >>";
	getline(cin, pw1);
	cout << "새 암호를 한 번 더 입력하세요. >>";
	getline(cin, pw2);

	if (pw1 == pw2)
		cout << "같습니다.";  //문장이 같은지 비교
	else
		cout << "같지 않습니다." << endl;
}
