/*****************************************************************************/
/*             HW#2 : 실습 2-2												 */
/*  작성자 : 정선미                    날짜 : 2023년 3월 20일				 */
/*																			 */
/* 문제 정의 : 레퍼런스 매개 변수를 통해 평균을 리턴하고 리턴문을 통해서는   */
/*			   함수의 성공 여부를 리턴하도록 average()함수 작성			     */
/*****************************************************************************/

#include<iostream>
using namespace std;

bool average(int a[], int size, int& avg){
	int sum = 0;

	for (int i = 0; i < size; i++) //배열 X의 끝까지
	{
		sum += a[i];  //모두 더하기
	}
	avg = sum / size;   //평균 = 배열 원소의 합 / 배열의 개수
	
	return avg;       //평균을 리턴한다.
}

int main() {
	int x[] = {0, 1, 2, 3, 4, 5};
	int avg;
	if (average(x, 6, avg))
		cout << "평균은 " << avg << endl;    //제대로 계산이 되었을 경우 함수에서 계산한 avg값 출력
	else
		cout << "매개 변수 오류" << endl;

	if (average(x, 6, avg))
		cout << "평균은 " << avg << endl;
	else
		cout << "매개 변수 오류" << endl;  //오류가 났을 경우 문구 출력
}
