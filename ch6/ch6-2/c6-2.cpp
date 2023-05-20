#include<iostream>
using namespace std;

class Math {
public:

	static int abs(int a) {		//static 맴버 함수 선언, 인자 1개
		return (a > 0)? a : -a;
	};
	static int max(int a, int b){	//static 맴버 함수 선언, 인자 2개
		return (a > b) ? a : b;
	};
	static int min(int a, int b){	//static 맴버 함수 선언, 인자 2개
		return (a > b) ? b : a;
	};
};


int main() {
	cout << Math :: abs(-5) << endl;   //클래스 이름과 ::(범위지정자)로 static 맴버에  접근
	cout << Math :: max(10, 8) << endl;
	cout << Math :: min(-3, -8) << endl;
}