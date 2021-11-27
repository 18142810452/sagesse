#include<iostream>
using namespace std;

int main()
{
	const int MAX = 2;
	double a[MAX], b[MAX], result = 0;
	int i;
	// 输入向量a
	cout << "请输入向量a的十个分量:";
	for (i = 0; i < MAX; ++i)
		cin >> a[i];

	//输入向量b
	cout << "请输入b的十个分量";
	for (i = 0;i <MAX;++i) 
		cin >> b[i];

	//计算a，b的数量积

	for (i = 0; i < MAX;++i)
		result += a[i] * b[i];

	cout << "a,b的数量积：" << result << endl;

	return 0;

}