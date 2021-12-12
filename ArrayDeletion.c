#include<stdio.h>
void Displayarr(int arr[], int size)
//traversal of Array
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void Deleteindex(int arr[], int size, int index)
//Deletion Of Index in a Array
{
    for(int i=index; i<size; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main()
{   
    int arr[100]={16,17,18,5,19,20};
    int size = 6;
    printf("    Deletion From Array \n");
    printf("Array Before Deletion:-");
    Displayarr( arr, size);
    int index=3;
    Deleteindex(arr, size, index);
    size-=1;
    printf("Deleting 3rd Index from this array \n");
    printf("Array After Deletion:-");
    Displayarr(arr, size);

return 0;

}
