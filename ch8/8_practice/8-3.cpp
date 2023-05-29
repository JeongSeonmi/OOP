/*참조 리턴의 이해*/
#include<iostream>
using namespace std;

class Accumulator{
    int value;
public :
    Accumulator(int value){this->value = value;}    //매개변수 value로 맴버 value를 초기화한다.
    Accumulator &add(int n){  // value에 n을 더해 값을 누적한다.
        value += n; // value에 n을 더해 값을 누적한다.
	    return *this;
    }    
    int get(){return value;} //누적된 값 value를 리턴한다.
};
/*
Accumulator& Accumulator :: add(int n){  //이게 뭐죠
    value += n; // value에 n을 더해 값을 누적한다.
	return *this;
}
*/
int main(){
    Accumulator acc(10);
    acc.add(5).add(6).add(7); //acc의 value 맴버가 28이 된다.
    cout<<acc.get()<<endl; //28출력
}

/*
Accumulator& Accumulator::add(int n)는 Accumulator 클래스의 멤버 함수인 add의 정의 부분입니다. 
이 함수는 매개변수 n을 받아서 값을 누적하는 역할을 합니다.

Accumulator&는 반환 타입으로 Accumulator 클래스에 대한 참조를 나타냅니다. 
이는 함수가 현재 객체를 가리키는 참조를 반환한다는 의미입니다.

Accumulator::add(int n)는 Accumulator 클래스의 add 함수를 구현하는 부분입니다.

value += n;은 value에 n을 더하여 값을 누적하는 코드입니다. 
즉, 현재 객체의 value에 n을 더해 값을 업데이트합니다.

return *this;는 현재 객체에 대한 참조를 반환합니다. 
this는 현재 객체를 가리키는 포인터이고, 
*this는 해당 포인터가 가리키는 객체를 나타냅니다. 

따라서 *this는 현재 객체를 가리키는 참조를 의미하며, 
이를 반환함으로써 메소드 체이닝을 가능하게 합니다.

즉, Accumulator& Accumulator::add(int n) 함수는 값을 누적하기 위해 
현재 객체의 value에 n을 더하고, 현재 객체에 대한 참조를 반환합니다. 

이렇게 반환된 참조를 통해 연속적으로 add 함수를 호출할 수 있습니다.
*/