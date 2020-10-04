#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double x[n][n];
    int i, j, k;
    double max;
    int flag;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        max = x[i][0];
        for (j = 0; j < n; j++)
        {
            if (x[i][j] > max)
            {
                max = x[i][j];
            }
        }
        for (j = 0; j < n; j++)
        {
            if (x[i][j] == max)
            {
                flag = 1;
                for (k = 0; k < n; k++)
                {
                    if (x[i][j] > x[k][j])
                    {
                        flag = 0;
                    }
                }
                if (flag == 1)
                    cout <<"行：" <<i+1 << " 列："<< j+1 << endl;
            }
        }
    }
}