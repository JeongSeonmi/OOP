/******************************************************************/
/*             HW#3 : c4-5                                        */
/*  작성자 : 정선미                    날짜 : 2023년 4월 3일      */
/*                                                                */
/* 문제 정의 : &가 입력될 때까지 여러줄의 영문 문자열을 입력받고  */
/*             찾는 문자열과 대치할 문자열을 입력받아 문자열 완성 */
/******************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자 입니다." << endl;
	getline(cin, s, '&');
	cin.ignore();  //&입력 후 생기는 엔터를 삭제하기 위한 코드

	string fi, re;
	cout << "\n" << "find = ";
	getline(cin, fi, '\n');    //검색할 단어를 입력받음

	cout <<"replace = ";
	getline(cin, re, '\n');    //대치할 단어를 입력받음

	int startindex = 0;

	while (1) {
		int index = s.find(fi, startindex);     //입력받은 단어를 문장에서 찾음
		if (index == -1)						//찾지 못할경우 break;
			break;

		s.replace(index, fi.length(), re);     //index부터 문자열 fi의 길이만큼 re로 변경
		startindex = index + re.length();      
	}

	cout << "\n" << s << endl;    //대치 완료한 여러 줄의 문자열 출력
}