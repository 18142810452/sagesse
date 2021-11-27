#include<iostream>
#include<cmath>
using namespace std;

bool istriangle(double a,double b, double c)
{
	return a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a;
}
double triangle_area(double a, double b, double c)
{
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (istriangle(a, b, c))
		cout << "面积为" << triangle_area(a, b, c);
	else 
		cout << "不是三角形" << endl;
	system("pause");
	return 0;

}