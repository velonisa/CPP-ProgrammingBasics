#include<iostream>
using namespace std;
int main()
{
	int h1,h2,m1,m2,s1,s2,flag;//flag用来判断输出
	cout<<"请分别输入两个时间的时分秒";
	cin>>h1>>m1>>s1>>h2>>m2>>s2;
	if (h1>h2)
		flag=1;
	else if (h1<h2)
		flag=-1;
	else
	{
		if (m1>m2)
			flag=1;
		else if (m1<m2)
			flag=-1;
		else
		{
			if (s1>s2)
				flag=1;
			else if (s1<s2)
				flag=-1;
			else
				flag=0;
		}
	}
	if (flag==1)
		cout<<"第二个时刻在前"<<endl;
	else if (flag==-1)
		cout<<"第一个时刻在前"<<endl;
	else
		cout<<"两个时刻相同"<<endl;

}