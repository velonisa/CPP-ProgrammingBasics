#include<iostream>
using namespace std;
int main()
{
    const int n = 3;
    int a[n][n];
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            cin>>a[i][j];
    }
    for (i=0;i<n;i++)//从第一行第二个开始就要换
    {
        for (j=i+1;j<n;j++)//为什么不能j=1;j<n && j>i;
        {
            int temp;
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}