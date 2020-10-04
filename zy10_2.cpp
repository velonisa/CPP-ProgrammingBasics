#include<iostream>
using namespace std;
int cow(int y)
{
    if (y == 1 || y == 2 || y == 3)
        return 1;
    else
        return cow(y-1)+cow(y-3);
}
int main()
{
    int y;
    cout<<"please enter the number"<<endl;
    cin>>y;
    cout<<cow(y)<<endl;
}