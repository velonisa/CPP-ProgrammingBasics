#include <iostream>
using namespace std;
bool is_prime(int n)
{
    int a;
    for (a = 2; a < n; a++)
    {
        if (n % a == 0)
            return false;
    }
    return true;
}

void print_prime(int n,int count)//yao xie hao int count,buran hui count meidingyi
{
    cout << n << ' ';
    if (count % 6==0)//bunengxie count==6
    {
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n;
    cout << '2' << ' ';
    int count = 1 ;
    for (m = 3; m <= n; m++)
    {
        if (is_prime(m))
        {
            count++;
            print_prime(m,count);
        }
    }
}