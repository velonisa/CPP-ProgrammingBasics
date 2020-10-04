#include<iostream>
#include<cstring>
using namespace std;
const int NAME_LEN=20;
const int TABLE_LEN=100;
struct TableItem
{
    char name[NAME_LEN];
    int age;
};


TableItem name_table[TABLE_LEN];
int linear_search(char key[],TableItem t[], int num_of_items)
{
    int index;
    for(index=0;index<num_of_items;index++)
        if (strcmp(key,t[index].name)==0) break;
    if(index<num_of_items)
        return index;
    else
    {
        return -1;
    }
    
}

int main()
{
    int n;//nametable length
    //get information of nametable
    char name[NAME_LEN];
    //get name looked for
    int result = linear_search(name,name_table,n);
    if (result==-1)
    {
        cout<<"Not found";
        return -1;
    }
    //name_table[result]
    return 0;
}