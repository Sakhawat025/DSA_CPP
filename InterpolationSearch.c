#include<stdio.h>
int main()
{
    int A[]={2,5,8,11,11,12,17,50,66,77};
    int n=10;
    int i,Target=-1,Position,low=0,High=n-1,key;

    printf("Enter search key: ");
    scanf("%d",&key);
    for(i=0;i<n;++i){
        Position=low+(High-low)*(key-A[low])/(A[High]-A[low]);
        if(key==A[Position]){
            Target=Position;
            break;
        }
        if(key>A[Position]){
            low=Position+1;
        }
        else {
            High=Position-1;
        }
    }
    if(Target==-1){
        printf("The target Index is Not Found!");
    }else {
        printf("The target Index is %d",Target);
    }
    return;
}

