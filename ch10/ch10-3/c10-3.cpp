/*****************************************************************/
/*             HW#7 : c10-3                                      */
/*  작성자 : 정선미                     날짜 : 2023년 5월 15일     */
/*                                                               */
/* 문제 정의 : 다음과 같은 BaseArray 클래스를 상속받아 큐처럼       */
/*  작동하는 MyQueue 클래스를 작성하라.                            */
/******************************************************************/


#include<iostream>
#include<string.h>
using namespace std;

/*큐, 원통형 자료구조로 선입선출구조이다.*/

class BaseArray{
private :
    int capacity;  //동적 할당된 메모리 용량
    int *mem;    //정수 배열을 만들기 위한 메모리 포인터
protected :
    BaseArray(int capacity = 100){  //용량은 처음부터 100으로 설정
        this->capacity = capacity;  //this포인터로 용량 설정
        mem = new int [capacity];   //배열의 크기 동적 할당
    }
    ~BaseArray(){delete[] mem;}     //동적할당 해제
    void put(int index, int val){mem[index] = val;}
    int get(int index){return mem[index];}
    int getCapacity(){return capacity;}
};

class MyQueue : public BaseArray{  //원형 큐
    int rear = 0;       //마지막 요소
    int front = 0;      //첫번째 한칸 앞 요소
public:
    MyQueue(int capacity) : BaseArray(capacity){;}
    void enqueue(int n){  //큐에 삽입
        if(rear > getCapacity())  //가득 찼는지 판단
            exit(1);
        rear++;
        put(rear, n);
    }
    int dequeue(){   //큐에서 삭제
        if(rear < 0)    //비어있는지 판단
            exit(1);
        ++front;
        rear--;
        return get(front);
    }
    int length(){return rear;}  //큐의 길이
    int capacity(){return getCapacity();}   //배열 크기
};

int main(){
    MyQueue mQ(100);
    int n;

    cout<<"큐에 삽입할 5개의 정수를 입력하라>> ";   //큐의 크기도 처음부터 정해짐
    for(int i=0;i<5;i++)
    {
        cin >> n;
        mQ.enqueue(n);  //새로운 정수 큐에 삽입
    }

    cout<<"큐의 용량 : "<<mQ.capacity() << ", 큐의 크기 : "<<mQ.length() <<endl;
    cout<<"큐의 원소를 순서대로 제거하여 출력한다>> ";
    while(mQ.length() !=0){
        cout<<mQ.dequeue()<<' ';  //큐에서 제거한 후 출력
    }

    cout<<endl<<"큐의 현재 크기 : "<<mQ.length()<<endl;
}