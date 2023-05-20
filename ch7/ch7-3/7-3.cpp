#include<iostream>
using namespace std;

class Person {
	string name;
public :
	Person() { name = ""; }
	Person(string name) { this->name = name; }
	string getName() { return name;}
	void setName(string name) { this->name = name;}
};

class Family {
	string name;
	Person* p; //Person 배열 포인터
	int size;  //Person 배열의 크기, 가족 구성원 수
public:
	Family(string name, int size);  // size 개수만큼 Person 배열 동적 생성
	void setName(int index, string name);
	void show();  //모든 가족 구성원 출력
	~Family();
};

Family::Family(string name, int size){
	p = new Person[size];  //동적 할당
	this->name = name;
	this->size = size;
}

void Family::setName(int index, string name){
	p[index].setName(name);  //배열에 이름 입력넣음
}

void Family::show() {  //가족 이름 출력 함수
	cout << "Simpson 가족은 다음과 같이 " << size << "명입니다." << endl;
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";  //배열에 저장된 순서대로 출력

}

Family::~Family() {
	delete[] p;  //malloc의 free()역할 , p에 할당된 공간을 취소해준다
}

int main()
{
	Family* simpson = new Family("Simpson", 3);  //3명으로 구성된 가족
	simpson->setName(0, "Mr.Simpson");  //동적으로 변수를 생성했으므로 "->" 사용해서 함수 접근
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}