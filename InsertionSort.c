#include<stdio.h>
int i,j,i,key;
void InsertionSort(int *A,int n)
{
        for(i=1; i<n; i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]> key){
            A[j+1]=A[j];
            j--;

        }
        A[j+1]=key;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int n;
    int arr[]= {11,22,44,55,66,33,77,14,51,10};
    n=10;
    printf("Print the array: ");
    for(i=0; i<n; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    InsertionSort(arr,n);
}
