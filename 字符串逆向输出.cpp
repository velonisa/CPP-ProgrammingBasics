#include<iostream>
using namespace std;
int main()
{
    const int max_len=100;
    int i,j;
    char str[max_len];
    cin>>str;
    int len=strlen(str);
    for (i=0;i<len/2;i++)
    {
        j=len-i-1;
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;
    return 0;
}