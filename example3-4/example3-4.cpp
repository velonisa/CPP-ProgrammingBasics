#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,x1,x2,delta;
	cout<<"请输入a,b,c"<<endl;
	cin>>a>>b>>c;
	if (a==0)
	{	
			cout<<"不是一元二次方程"<<endl;
			return -1;//这里返回值错误？？？？？是跳过后面了吗？？
	}
	
	delta=b*b-4*a*c;
	
	if (delta<0)
		cout<<"无解"<<endl;
	else if (delta==0)
	{
		x1=-b/(2*a);
		cout<<"x1=x2="<<x1;
	}
	else
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		cout<<"x1="<<x1<<" x2="<<x2<<endl;
	}
	return 0;
}