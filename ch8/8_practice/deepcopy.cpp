#include<iostream>
#include<cstring>
using namespace std;

class Person {
    char *name;
    int id;
public:
    Person(int id, char*name);
    Person(const Person &person);
    ~Person();
    void ChangeName(char *name);
    void show(){cout<<id<<", "<< name << endl;}
};

Person :: Person(int id, char *name)  //father객체가 가는 생성자
{
    this->id = id;
    int len = strlen(name);  //strlen : 문장의 길이 측정
    this->name = new char[len+1];
    strcpy(this->name, name); //strcpy : name에 문자열 복사
}

Person :: Person(const Person &person){  //daughter객체가 가는 생성자
    this->id = person.id;  //person 객체의 맴버변수인 id와 name을 참조
    int len = strlen(person.name);
    this->name = new char[len+1];
    strcpy(this->name, person.name);
}



Person :: ~Person(){
        delete [] name;
}

void Person::ChangeName(char*name){
    if(strlen(name)>strlen(this->name))
        return;
    strcpy(this->name, name);
}

int main(){
    Person father(1, "Katae");
    Person daughter(father);

    cout<<"daughter 객체 생성 후 ----"<<endl;
    father.show();
    daughter.show();

    daughter.ChangeName("Grace");
    cout<<"daughter 이름을 Grace로 변경 후 ---"<<endl;
    father.show();
    daughter.show();

    return 0;
}