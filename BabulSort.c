#include<stdio.h>
int i,j,temp;
void SortArray(int *A,int n)
{
     for(i=0;i<n-1;++i){
         for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
              temp=A[j];
              A[j]=A[j+1];
              A[j+1]=temp;
              }
            }
    }
    printf("\n");
    printf("Print The sort Array: ");
    for(i=0;i<n;++i){
        printf("%d ",A[i]);
    }

}
int main()
{
    int i,n,j,temp;
    int arr[]= {11,22,44,55,66,33,77,14,51,10};
    n=10;
    printf("Print the array: ");
    for(i=0; i<n; ++i)
    {
        printf("%d ",arr[i]);
    }
    SortArray(arr,n);
}

