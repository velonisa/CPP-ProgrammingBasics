int binary_search(char key[],TableItem t[], int num_of_items)
{
    int index, first, last;
    first = 0;
    last = num_of_items-1;
    while(first<=last)
    {
        index=(first+last)/2;
        int r=strcmp(key,t[index].name)
        if (r==0)
            return index;
        else if (r>0)//key>name
            first=index+1;
        else
        {
            last=index-1;
        }
        
    }
    return -1;
}