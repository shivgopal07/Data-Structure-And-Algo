#include<stdio.h>
int kthSmallest(int arr[], int l, int r, int k)
{
    int temp;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={7,10,4,20,15,2,55,5,41,66,81,11,73,96,21,120,150,125,187,178};
    int r=sizeof(arr)/sizeof(int);
    int k;
    printf("Enter the number= ");
    scanf("%d",&k);
    int l=0;
    kthSmallest(arr, l, r, k);
     //for(int i=0; i<r; i++)
    
        printf("the element is %d \n",arr[k-1]);
    
return 0;
}
