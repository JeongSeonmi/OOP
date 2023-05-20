/**********************************************************************/
/*             HW#2 : ch3-4                                           */
/*  작성자 : 정선미                    날짜 : 2023년 3월 27일         */
/*                                                                    */
/* 문제 정의 : 배열의 원소를 반대 순서로 뒤집는 reverse() 함수를      */
/*             템플릿으로 작성하라.                                   */
/**********************************************************************/

#include <iostream>
using namespace std;

template<class T>

void reverseArray(T a[], int size)      // 배열 a[]를 제네릭 함수를 통해 구체화
{
	T tmp;

	for (int i = 0; i < size / 2; i++)      //반대로 뒤집으므로 배열의 크기의 절반 만큼만
	{
		tmp = a[i];								//tmp을 이용하여 배열의 순서 바꾸기
		a[i] = a[size - i - 1];
		a[size-i - 1] = tmp;
	}
}

int main()
{
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)   //배열의 크기만큼 
		cout << x[i] << ' ';     // 4 5 100 10 1 이 출력된다.
	cout << endl;
}