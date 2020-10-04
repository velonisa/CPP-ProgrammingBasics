#include<iostream>
using namespace std;
void hanoi(char x, char y, char z, int n)
{
    if (n==1)
        cout<<"1:"<<x<<"->"<<y<<endl;
    else
    {
        hanoi(x,z,y,n-1);
        cout<<n<<':'<<x<<"->"<<y<<endl;
        hanoi(z,y,x,n-1);
    }
    
}
int main()
{
    char x, y, z;
    int n;
    cin>>x>>y>>z>>n;
    hanoi(x,y,z,n);
    return 0;

}