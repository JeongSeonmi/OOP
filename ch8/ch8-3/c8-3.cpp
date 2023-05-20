/***************************************************************/
/*             HW#6 : 8-3                                      */
/*  �ۼ��� : ������                   ��¥ : 2023�� 5�� 8��    */
/*                                                             */
/* ���� ���� : Accumulator Ŭ������ ����					   */
/*														       */
/***************************************************************/

#include<iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) { this->value = value; }// �Ű����� value �� ��� value �� �ʱ�ȭ�Ѵ�
	Accumulator& add(int n); // value �� n �� ���� ���� �����Ѵ�
	int get() { return value; } // ������ �� value �� �����Ѵ�
};

Accumulator& Accumulator::add(int n) {
	value += n; // value�� n�� ���� ���� �����Ѵ�.
	return *this;
}

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc �� value ����� 28 �� �ȴ�
	cout<< acc.get() << endl; // 28 ���
}