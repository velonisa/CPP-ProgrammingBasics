#include<iostream>
using namespace std;
int main()
{
	int year,month,day;
	cin >> year >> month;
	switch(month)//switch不会和其他语句一样只执行第一条，它要到break才结束
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day = 31;
			break;
		case 4: case 6: case 9: case 11:
			day = 30;
			break;
		case 2:
			if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0)
				day = 28;
			else
				day = 29;
	}
	cout << day << endl;
	return 0;
}