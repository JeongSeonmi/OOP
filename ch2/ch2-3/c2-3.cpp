/**********************************************************************/
/*             HW#2 : �ǽ� 2-3										  */
/*  �ۼ��� : ������                    ��¥ : 2023�� 3�� 20��		  */
/*																	  */
/* ���� ���� : ������ �־��� bigger()�� �ۼ��ϰ�, ����ڷκ���		  */
/*         2���� ������ �Է¹޾� ū ���� ����ϴ� main()�� �ۼ��϶�   */
/*		bigger()���ڷ� �־��� a, b�� ������ true, �ƴϸ� false�� ���� */
/*		ū ���� big�� �����Ѵ�										  */
/**********************************************************************/

#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main() {
	int x, y, big;
	bool b;
	cout << "�� ������ �Է��ϼ���>> ";
	cin >> x >> y;						//����ڷκ��� 2���� ���� �Է¹ޱ�
	b = bigger(x, y, big);
	if (b)
		cout << "same" << endl;			//2���� ������ ũ�Ⱑ ���� ��� 'same' ���
	else
		cout << "ū ���� " << big << endl;   //ũ�Ⱑ �ٸ� ���, 2���� ���� �� ū �� ���

}

bool bigger(int a, int b, int& big)    //big�� ���۷��� ����
{
	if (a == b)
		return true;			// �Է� ���� �� ���� ���� ��� true ����
	else		
	{
		if (a > b)		//a�� b���� Ŭ ��� big�� a�� ���� 
			big = a;
		else if (a < b)
			big = b;		//a�� b���� Ŭ ��� big�� b�� ���� 
			return false;		//false ����
	}
}