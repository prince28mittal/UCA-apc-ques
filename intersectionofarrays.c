// INTERSECTION of TWO SORTED ARRAYS
#include <stdio.h>

int main()
{
    int n,n1;
    scanf("%d %d",&n,&n1);
    int arr1[n],arr2[n1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int i=0,j=0,k=0;
    int arr3[5];
    while(i<n && j<n1)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
            j++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr3[i]);
    }
    
    
   
    return 0;
}
