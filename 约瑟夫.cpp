#include <iostream>
using namespace std;
const int N = 20, M = 5;
int main()
{
    bool in_circle[N];
    int num_of_children_remained, index;
    for (index = 0; index < N; index++)
        in_circle[index] = true;
    index = N - 1;
    num_of_children_remained = N;
    while (num_of_children_remained > 1)
    {
        int count = 0;//每次找到一个，循环回到这里count=0
        while (count < M)
        {
            index = (index + 1) % N;
            if (in_circle[index])
                count++;
        }
        in_circle[index]=false;
        num_of_children_remained--;
    }
    for (index=0;index<N;index++)
    {
        if(in_circle[index])break;
    }
    cout<<index<<endl;
    return 0;
}