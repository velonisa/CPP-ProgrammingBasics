#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cin >> x;
	while (x != 0)
	{
		if (x > 0)
			cout << sqrt(x) << endl;
		else
			cout << "是负数" << endl;
		cin >> x;
	}
	return 0;
}