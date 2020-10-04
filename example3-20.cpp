#include<iostream>
using namespace std;
int main()
{
	double x, sum, xn;
	int n, i;
	sum = 0;
	cin >> x >> n;
	for (i = 1, xn = 1; i <= n; i++)
	{
		sum += xn;
		xn = xn * x / i;
	}
	cout << sum;
	return 0;
}