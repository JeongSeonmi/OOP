/***************************************************************/
/*             HW#6 : 8-3                                      */
/*  작성자 : 정선미                   날짜 : 2023년 5월 8일    */
/*                                                             */
/* 문제 정의 : Accumulator 클래스를 구현					   */
/*														       */
/***************************************************************/

#include<iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) { this->value = value; }// 매개변수 value 로 멤버 value 를 초기화한다
	Accumulator& add(int n); // value 에 n 을 더해 값을 누적한다
	int get() { return value; } // 누적된 값 value 를 리턴한다
};

Accumulator& Accumulator::add(int n) {
	value += n; // value에 n을 더해 값을 누적한다.
	return *this;
}

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc 의 value 멤버가 28 이 된다
	cout<< acc.get() << endl; // 28 출력
}