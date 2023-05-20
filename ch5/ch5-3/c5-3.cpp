#include<iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n= 100, int val =0);
	~MyVector() { delete[] mem;}
	void show()
	{
		for (int i = 0; i < size; i++)
			cout << mem[i] << ' ';
		cout << "\n";
	};
};


MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++)
	{
		mem[i] = val;
		  //출력하는걸 따로 함수로
	}

}


int main() {
	MyVector a;
	int x, y;
	cin >> x >> y;
	MyVector b(x, y);
	
	a.show();
	b.show();
	



}