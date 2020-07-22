#include <stdio.h>

int main()
{
    
    int l[3]={2,1,3};
    int r[3]={5,3,9};
    int max=0;
    for(int i=0;i<3;i++)
    {
        if(r[i]>max)
        {
            max=r[i];
        }
    }
    int arr[max+2];
    for(int i=0;i<max+2;i++)
    {
        arr[i]=0;
    }
    printf("%d",max);
    for(int i=0;i<3;i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    
    int maximum=0,prev=0;
    for(int i=0;i<max+1;i++)
    {
        if((arr[i]+prev)>maximum)
        {
            maximum=arr[i]+prev;
        }
        prev=maximum;
    }
    printf("%d",maximum);

    return 0;
}
