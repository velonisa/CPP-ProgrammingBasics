#include<iostream>
using namespace std;
int main()
{
	int n,f;
	cin >> n;
	f = 1;
	while (n >= 1)
	{
		f *= n;
		n -= 1;
	}
	cout << f << endl;

}