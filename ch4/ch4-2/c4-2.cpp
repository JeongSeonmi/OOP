/****************************************************************/
/*             HW#3 : c4-2                                      */
/*  작성자 : 정선미                    날짜 : 2023년 4월 3일    */
/*                                                              */
/* 문제 정의 : string타입의 vector를 이용하여 문자열을 저장하는 */
/*     백터를 만들고 5개의 이름을 입력받아 사전에서 가장 뒤에   */
/*     오는 이름 출력하는 프로그램                              */
/****************************************************************/

#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<string> st;   //문자열만 삽입 가능한 벡터 생성
	string name;     //name을 string 객체로 선언
	cout << "이름 5개를 입력하라\n";
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		getline(cin, name);				//이름 5개 입력받기
		st.push_back(name);				//벡터에 name문자열 삽입
	}
	name = st.at(0);     //일단 0번째 인텍스에 위치한 문자로 설정
	for (int j = 0; j < st.size(); j++) {
		if(name < st[j])
		{
			name = st[j];  //name을 st[j]의 문자열로 변경
		}
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << "\n";

}