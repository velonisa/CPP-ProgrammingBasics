#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cin>>a>>b>>c;
	max=(a>b)?a:b;
	if (c>max)
		max=c;
	cout<<max<<endl;
	system("pause");
	return 0;
}