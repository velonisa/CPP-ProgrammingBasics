#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,j,m,n;
    for (i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for (n=10;n>0;n--)
    {
        m=0;//m=max
        for(i=0;i<n;i++)
        {
            if (a[i]>a[m]) m=i;
        }
        int temp=a[n-1];//最后一个是1
        a[n-1]=a[m];
        a[m]=temp;
        
    }
    for (i=0;i<10;i++)
    {
        cout<<a[i];
    }
}

void choicesort(int array[], int len)
{
    for (int i=0;i<len;i++)
    {
        int minindex=i;
        for (int j=minindex+1;j<len;j++)
        {
            if (array[j]<array[minindex])
                minindex=j;
        }
        int temp=array[i];
        array[i]=array[minindex];
        array[minindex]=temp;
    }
}

void maopaosort(int array[],int len)
{
    for(int i=0;i<len;i++)
    {
        for (int j = 0;j<len-1-i;j++)
        {
            if (array[j]>array[j+1])
            {
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
}

void insertsort(int arr[], int len)
{
    for (int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}