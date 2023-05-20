/**************************************************************************/
/*             HW#3 : c4-1			                                      */
/*  작성자 : 정선미                    날짜 : 2023년 4월 3일              */
/*                                                                        */
/* 문제 정의 : 5개의 string배열을 선언하고 getline을 이용하여             */
/*             문자열을 입력받아 사전 순으로 가장 뒤에 나오는 문자열 출력 */
/**************************************************************************/
#include<iostream>
#include <string>
using namespace std;


int main() {
	string name[5];     //string name배열 선언
	for (int i = 0; i < 5; i++) {		
		cout << "이름 : ";
		getline(cin, name[i], '\n');	//배열마다 이름(문자열) 입력받기
	}

	string latter = name[0];    //우선 맨 첫번째 배열을 latter로 설정
	for (int j = 1; j < 5; j++) { // 사전 순으로 latter 문자열이 앞에 온다면 latter 문자열 변경 
									
		if (latter < name[j]) {
			latter = name[j];
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;    //사전 순으로 가장 뒤에 오는 문자열 출력

}