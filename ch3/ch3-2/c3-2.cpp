/**********************************************************************/
/*             HW#2 : ch3-2                                           */
/*  �ۼ��� : ������                    ��¥ : 2023�� 3�� 27��         */
/*                                                                    */
/* ���� ���� : �Լ� big()�� 2�� �ߺ��Ͽ� �ۼ��ϰ� ���α׷��� �ϼ��϶� */
/*                                                                    */
/**********************************************************************/

#include<iostream>
using namespace std;

int big(int a, int b)
{
	int max = 100;
	int x;
	x = (a > b) ? a : b;           //ū�� �����ϱ�
	return (x < max) ? x : max;    //�ִ밪�� ���Ͽ� ū�� ����
}

int big(int a, int b, int max)
{
	int x;
	x = (a > b) ? a : b;
	return (x < max) ? x : max;
}

/* ����Ʈ ���ڸ� ���� �ϳ��� �Լ��� big()

int big(int a, int b, int max = 100)    //max�� ����Ʈ ���� ����
{
	int x;
	x = (a > b) ? a : b;        // ���� �����ڸ� ����Ͽ� a�� b���� Ŭ��� a 
	return (x < max) ? x : max;    //x�� max���� ���� ��� x ����
}
*/

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}