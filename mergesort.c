#include <stdio.h>
void mergesort(int* A,int left,int right,int* Aux);
void merge(int* Arr,int l,int r,int middle,int* auxx);
void mergesort(int* A,int left,int right,int* Aux)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergesort(A,left,mid,Aux);
        mergesort(A,mid+1,right,Aux);
        merge(A,left,right,mid+1,Aux);
    }
}
void merge(int* Arr,int l,int r,int middle,int* auxx)
{
    int k=0;
    int i=l;
    int j=middle;
    for(k=l;k<=r;k++)
    {
        if(j>r || i>=middle)
            break;
        else if(Arr[i]<=Arr[j])
        {
            auxx[k]=Arr[i];
            i++;
        }
        else
        {
            auxx[k]=Arr[j];
            j++;
        }
        
    }
        while(j<=r)
        {
            auxx[k++]=Arr[j];
            j++;
        }
        while(i<middle)
        {
            auxx[k++]=Arr[i];
            i++;
        }
    for(k=l;k<=r;k++)
        Arr[k]=auxx[k];
       // printf("%d\n",auxx[k]);
        
    
}
int main()
{
    //printf("Hello World");
    int n;
    scanf("%d",&n);
    int arr[n],i;
    int aux[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
       //aux[i]=0;
    }
    
    mergesort(arr,0,n-1,aux);
     for(i=0;i<n;i++)
     {
         printf("%d\n",aux[i]);
     }
    return 0;
}