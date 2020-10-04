#include<iostream>
using namespace std;
int main()
{
	int n,f;
	cin>>n;
	f=1;
	do 
	{
		f *= n;
		n -= 1;
	} while (n>=1); //do while的while在最后,do while最后要加分号
	cout << f << endl;
}