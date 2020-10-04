#include<iostream>
using namespace std;
int main()
{
	char a;//这里别写成int，会没结果
	//cin >> a;// 这一行别写
	do
	{
		cin >> a;
	} while (a != 'y' && a != 'Y' && a != 'n' && a != 'N');//这里循环不结束就不会走到后面的输出
	if (a == 'y' || a == 'Y')
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
	return 0;
}