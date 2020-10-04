#include<iostream>
#include<cmath>
using namespace std;
int sushu(int n)
{
	int i;
	int flag = 1;
	for (i = 2 ; i <= sqrt(n); i++)
	{
		if (n == 2)
			break;
		if (n % i == 0)
			flag = 0;
	}
	return flag;
}
int main()
{
	int n, i;
	cin >> n;
	for (i = 2; i <= n; i++)
	{
		if (sushu(i) == 1)
			cout << i << endl;
	}
	return 0;
}

