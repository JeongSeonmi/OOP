#include<iostream>
using namespace std;
double biggest(double a[], double k)  //�ִ� ���ϴ� �Լ�
{
	double max = 0;
	int j = 0;

	max = a[0];   //ù��° ���ڸ� �ִ����� ���
	for(int j = 0; j < k;j++)
	{
		if (max < a[j])
		{
			max = a[j];  //max���� � ������ ������ ū���� max�� ����
		}

	}
	return max;

}

int main()
{
	double a[5];
	cout << "5���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];   //�迭�� 0~4���� �Է¹���
	}
	cout << "���� ū �� = " << biggest(a, 5) << endl;

	return 0;
}
