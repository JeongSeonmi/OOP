#include<iostream>
#include"Ram.h"
using namespace std;

Ram::Ram() {
    size = 100 * 1024;
    for (int i = 0; i < size; ++i)
        mem[i] = 0;
}
Ram::~Ram() {
    cout << "메모리 제거됨"<<endl;
}

char Ram::read(int address) //address 주소의 메모리를 읽어 리턴
{
	return mem[address];
};

void Ram::write(int address, char value) { //address주소에 value 저장
	mem[address] = value;
};