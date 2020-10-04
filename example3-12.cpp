#include<iostream>
using namespace std;
int main()
{
	int n,f;
	cin >> n;
	for (f = 1; n >= 1; n--)
		f *= n;
	cout << f; 
}