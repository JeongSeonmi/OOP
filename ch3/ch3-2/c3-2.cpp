/**********************************************************************/
/*             HW#2 : ch3-2                                           */
/*  작성자 : 정선미                    날짜 : 2023년 3월 27일         */
/*                                                                    */
/* 문제 정의 : 함수 big()를 2개 중복하여 작성하고 프로그램을 완성하라 */
/*                                                                    */
/**********************************************************************/

#include<iostream>
using namespace std;

int big(int a, int b)
{
	int max = 100;
	int x;
	x = (a > b) ? a : b;           //큰값 리턴하기
	return (x < max) ? x : max;    //최대값과 비교하여 큰값 리턴
}

int big(int a, int b, int max)
{
	int x;
	x = (a > b) ? a : b;
	return (x < max) ? x : max;
}

/* 디폴트 인자를 가진 하나의 함수로 big()

int big(int a, int b, int max = 100)    //max에 디폴트 인자 설정
{
	int x;
	x = (a > b) ? a : b;        // 조건 연산자를 사용하여 a가 b보다 클경우 a 
	return (x < max) ? x : max;    //x가 max보다 작을 경우 x 리턴
}
*/

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}