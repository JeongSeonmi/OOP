#include<iostream>
using namespace std;
double biggest(double a[], double k)  //최댓값 구하는 함수
{
	double max = 0;
	int j = 0;

	max = a[0];   //첫번째 숫자를 최댓값으로 잡고
	for(int j = 0; j < k;j++)
	{
		if (max < a[j])
		{
			max = a[j];  //max값이 어떤 수보다 작으면 큰수를 max로 설정
		}

	}
	return max;

}

int main()
{
	double a[5];
	cout << "5개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];   //배열에 0~4까지 입력받음
	}
	cout << "제일 큰 수 = " << biggest(a, 5) << endl;

	return 0;
}
