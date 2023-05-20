#include<iostream>
using namespace std;

class Math {
public:

	static int abs(int a) {		//static �ɹ� �Լ� ����, ���� 1��
		return (a > 0)? a : -a;
	};
	static int max(int a, int b){	//static �ɹ� �Լ� ����, ���� 2��
		return (a > b) ? a : b;
	};
	static int min(int a, int b){	//static �ɹ� �Լ� ����, ���� 2��
		return (a > b) ? b : a;
	};
};


int main() {
	cout << Math :: abs(-5) << endl;   //Ŭ���� �̸��� ::(����������)�� static �ɹ���  ����
	cout << Math :: max(10, 8) << endl;
	cout << Math :: min(-3, -8) << endl;
}