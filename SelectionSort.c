#include <stdio.h>
int i, j,IndxMin,temp;
void SelectionSort(int *A,int n)
{
    for (i = 0; i < (n - 1); i++) {
            IndxMin = i;
        for (j = i + 1; j < n; j++) {
                if (A[IndxMin] > A[j])
                IndxMin= j;
      }
     if (IndxMin!= i) {
         temp = A[i];
         A[i] = A[IndxMin];
         A[IndxMin] = temp;
      }
   }
  for (i = 0; i < n; i++){
      printf("%d ", A[i]);
  }
}
int main() {
   int arr[10]={11,22,44,55,66,33,77,14,51,10};
   int n=10;
    printf("Print the array: ");
    for(i=0; i<n; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    SelectionSort(arr,n);
}
