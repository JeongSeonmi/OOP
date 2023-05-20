/*********************************************************************/
/*             HW#2 : ch2-4                                          */
/*  작성자 : 정선미                    날짜 : 2023년 3월 27일        */
/*                                                                   */
/* 문제 정의 : 문자열 a에서 문자c를 찾아 문자 c가 있는 공간에 대한   */
/*             참조를 리턴한다. 만일 문자 C를 */
/*********************************************************************/
#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success) //문자열 s에서 "M"을 찾기
{
	int len = sizeof(a);     //위치의 참조를 리턴해 참조변수 loc에 넣고 나중에 값 변경
	for (int i = 0; i < len; i++)   // 배열 a만큼 for문 작동
	{
		if (a[i] == c)          //만약 배열 a에 문자열c가 있으면
		{
			success = true;     //success에 ture 설정 하고 그 배열을 리턴
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
		cout << "M을 발견할 수 없다." << endl;
		return 0;
	}
	loc = 'm'; //'M'위치에 'm'출력
	cout << s << endl;
}