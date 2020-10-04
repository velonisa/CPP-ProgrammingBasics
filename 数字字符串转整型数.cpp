#include<iostream>
using namespace std;
int str_to_int(char str[])
{
    if (str[0]=='\0') return 0;
    int n = str[0]-'0';//转int
    for (int i=1;str[i]!='\0';i++)
    {
        n = n*10 + (str[i]-'0');
    }
    return n;
}
int main()
{
    char str[100];
    int i;
    cin>>str;
    cout<< str_to_int(str);
    return 0;    
}