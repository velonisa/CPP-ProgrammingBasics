#include <iostream>
using namespace std;
int path(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else if (n == 3)
        return 2;
    else
    {
        if (n % 2==0)
            return path(n-1)+path(n-2)+path(n-3);
        else
            return path(n-1)+path(n-2);
    }
}

int main()
{
    int n;
    cout<<"please enter the number"<<endl;
    cin>>n;
    cout<<path(n)<<endl;
}