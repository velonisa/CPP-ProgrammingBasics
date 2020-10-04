#include<iostream>
using namespace std;
int main()
{
    const int maxn=40;
    int n,i;
    int fibs[maxn];
    cout<<"please enter n(<"<<maxn<<endl;
    cin>>n;
    if (n>maxn)
    {
        cout<<"n too big"<<endl;
        return -1;
    }
    fibs[0]=fibs[1]=1;
    for (i=2;i<n;i++)
    {
        fibs[i]=fibs[i-1]+fibs[i-2];
    }
    cout<<fibs[i-1]<<endl;
}