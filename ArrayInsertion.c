#include<stdio.h>
    void myarray(int arr[] , int size)
    //traversalofArray
            {
                for(int i =0; i<size; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
    int Insertionmyarray(int arr[], int size, int capacity, int index, int element)
    //InsertioninArray
        {
            if(capacity<=size)
                {
                    return -1;
                }
            for(int i=size-1; i>=index; i-- )
                {
                    arr[i+1] = arr[i];
                }
            arr[index] = element;
            return 1;
        }
int main()
{
    int arr[100] = {2,4,56,76,78,9};
    int size = 6;
    int index=3,element=45;
    printf("Before Insertion:- ");
    myarray(arr, size);
    Insertionmyarray(arr,size, 100, index, element);
    size+=1;
    printf("After Insertion:-");
    myarray(arr,size);

    return 0;

}
