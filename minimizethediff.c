// Minimize the difference between maximum and minimum in 3 arrays
#include <stdio.h>
int max(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
}
int min(int a,int b,int c)
{
    if(a<b && a<c)
    return a;
    else if(b<a && b<c)
    return b;
    else
    return c;
}
int main()
{
    int n,n1,n2;
    scanf("%d %d %d",&n,&n1,&n2);
    int arr1[n],arr2[n1],arr3[n2];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr2[i]);
    }
     for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr3[i]);
    }
    int i=0,j=0,k=0,l=0;
    while(i<n && j<n1 && k<n2)
    {
      int Max= max(arr[i],arr2[j],arr3[k]);
      int Min= min(arr[i],arr2[j],arr3[k]);
      int Diff[l]=Max-Min;
       i++;
       j++;
       k++;
       l++;
    }
    
    
    
   
    return 0;
}