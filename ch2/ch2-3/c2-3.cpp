/**********************************************************************/
/*             HW#2 : 실습 2-3										  */
/*  작성자 : 정선미                    날짜 : 2023년 3월 20일		  */
/*																	  */
/* 문제 정의 : 원형이 주어진 bigger()을 작성하고, 사용자로부터		  */
/*         2개의 정수를 입력받아 큰 값을 출력하는 main()을 작성하라   */
/*		bigger()인자로 주어진 a, b가 같으면 true, 아니면 false를 리턴 */
/*		큰 수는 big에 전달한다										  */
/**********************************************************************/

#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main() {
	int x, y, big;
	bool b;
	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;						//사용자로부터 2개의 정수 입력받기
	b = bigger(x, y, big);
	if (b)
		cout << "same" << endl;			//2개의 정수가 크기가 같을 경우 'same' 출력
	else
		cout << "큰 수는 " << big << endl;   //크기가 다를 경우, 2개의 정수 중 큰 수 출력

}

bool bigger(int a, int b, int& big)    //big에 레퍼런스 선언
{
	if (a == b)
		return true;			// 입력 받은 두 수가 같을 경우 true 리턴
	else		
	{
		if (a > b)		//a가 b보다 클 경우 big을 a로 설정 
			big = a;
		else if (a < b)
			big = b;		//a가 b보다 클 경우 big을 b로 설정 
			return false;		//false 리턴
	}
}