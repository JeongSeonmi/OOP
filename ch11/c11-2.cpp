/*******************************************************************/
/*             HW#11 : 가상함수와 추상 클래스                        */
/*  작성자 : 정선미                    날짜 : 2023년 5월 24일        */
/*                                                                 */
/* 문제 정의 : 추상 클래스 Calculator를 상속받아 GoodCalc 클래스 구현 */
/*                                                                 */
/*******************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class Calculator{
public:
    /*순수 가상 함수*/
    virtual int add(int a, int b) = 0;  //두 정수의 합 리턴
    virtual int subtract(int a, int b) = 0; //두 정수의 차 리턴
    virtual double average(int a[], int size) = 0;  //배열 a의 평균 리턴. size는 배열의 크기
};

class GoodCalc : public Calculator{
public:

    /* 순수 가상함수 재정의 */
    int add(int a, int b){ return a+b;} //합 리턴
    int subtract(int a, int b){ return a-b;} //차 리턴
    double average(int a[], int size){  //배열의 합 / 크기 = 평균 리턴
        int sum=0;
        for(int i =0; i<size; i++)
        {
            sum += a[i];
        }
        return sum/size;
    }
};


int main(){
    int a[] = {1, 2, 3, 4, 5};
    Calculator *p = new GoodCalc();  //동적 할당
    cout<< p->add(2, 3)<<endl;
    cout<< p->subtract(2, 3)<<endl;
    cout<< p->average(a, 5)<<endl;
    delete p; // 동적 할당 해제
}
