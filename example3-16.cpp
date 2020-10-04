#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, n, flag;
	cin >> x;
	double sqr;
	sqr = sqrt(x);
	flag = 1;
	if (x % 2 == 0 && x != 2)
		flag = -1;
	//else if (x = 2)
	//	flag = 1;
	for (n = 3; n <= sqr; n++)
	{
		if (x % n == 0)
		{
			flag = -1;
			break;
		}
	}
	switch(flag)
	{
	case 1: cout << "是素数" << endl; break;
	case -1: cout << "不是素数" << endl; break;
	}// switch记得写大括号
	return 0;

}