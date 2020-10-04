#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x2, x1, a;
	cin >> a;
//第一次循环可以取a，不影响结果，只影响循环次数
	x2 = a;
	do
	{
		x1=x2;
		x2 =(2 * x1 + a / x1 / x1)/3;//为什么1/3*....就不行
	} while (fabs(x2 - x1) >= 1e-6);
	cout << x2;
}
