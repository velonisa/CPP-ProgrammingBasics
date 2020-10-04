#include<iostream>
using namespace std;
int main()
{
	int fib1, fib2, fib3, n, count;
	cin >> n;
	fib1 = 1;
	fib2 = 1;
	for (count = 2; count < n; count++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	if (n == 1 || n == 2)
		cout << '1' << endl;
	else
		cout << fib3 << endl;

}