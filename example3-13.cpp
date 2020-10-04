#include<iostream>
using namespace std;
int main()
{
	int count, x, sum;
	cout << "请输入数字个数" << endl;
	cin >> count;
	cout << "请输入" << count << "个整数";
	for (sum = 0; count > 0; count--)
	{
		cin >> x;
		sum += x; 
	}
	cout << sum;
}