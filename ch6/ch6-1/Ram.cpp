#include<iostream>
#include"Ram.h"
using namespace std;

Ram::Ram() {
    size = 100 * 1024;
    for (int i = 0; i < size; ++i)
        mem[i] = 0;
}
Ram::~Ram() {
    cout << "�޸� ���ŵ�"<<endl;
}

char Ram::read(int address) //address �ּ��� �޸𸮸� �о� ����
{
	return mem[address];
};

void Ram::write(int address, char value) { //address�ּҿ� value ����
	mem[address] = value;
};