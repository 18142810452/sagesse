#include<iostream>
using namespace std;

int main()
{
	const int MAX = 2;
	double a[MAX], b[MAX], result = 0;
	int i;
	// ��������a
	cout << "����������a��ʮ������:";
	for (i = 0; i < MAX; ++i)
		cin >> a[i];

	//��������b
	cout << "������b��ʮ������";
	for (i = 0;i <MAX;++i) 
		cin >> b[i];

	//����a��b��������

	for (i = 0; i < MAX;++i)
		result += a[i] * b[i];

	cout << "a,b����������" << result << endl;

	return 0;

}