/*******************************************************************/
/*             HW#11 : 가상함수와 추상 클래스                        */
/*  작성자 : 정선미                    날짜 : 2023년 5월 24일        */
/*                                                                 */
/* 문제 정의 : 추상 클래스 Calculator를 상속받는 Adder와 Subractor    */
/*            클래스 구현                                           */
/*******************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class Calculator{
private :
    void input(){   //입력받는 맴버함수
        cout<<"정수 2개를 입력하세요 >> ";
        cin>>a>>b;
    }
protected :
    int a, b;
    virtual int calc(int a, int b) = 0;   //순수 가상 함수, 선언만 있는 가상 멤버 함수
public :
    void run(){
        input();
        cout<<"계산된 값은 " << calc(a, b)<<endl;
    }
};

class Adder : public Calculator{    //Calculator의 파생클래스
public :
    int calc(int a, int b){ return a + b;}  //가상함수 재정의, 덧셈값 리턴
};

class Subtractor : public Calculator{  //Calculator의 파생클래스
public :
    int calc(int a, int b){ return a - b;}  //가상함수 재정의, 뺄셈값 리턴
};


int main(){
    Adder adder;
    Subtractor subtractor;
    adder.run();  //adder의 calc 재정의 함수 실행
    subtractor.run();   //subtractor의 calc 재정의 함수 실행
}
