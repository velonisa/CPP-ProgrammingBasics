#include<iostream>
using namespace std;
int main()
{
	int x, sum;
	cin >> x;
	sum = x;
	while (x != 0)
	{
		cin >> x;
		sum += x;
	}
	cout << sum << endl;
	return 0;
}