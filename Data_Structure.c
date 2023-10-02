#include<stdio.h>

typedef struct
{
    int month;
    int day;
    int year;
}ADate;

typedef struct
{
    int M;
    int D;
    int Y;
}Adate;


int main()
{
    ADate d;
    Adate d1;

    d.month=1;
    d.day=18;
    d.year=2018;

    printf("%d/",d.month);
    printf("%d/",d.day);
    printf("%d",d.year);

    scanf("%d",&d1.M);
    scanf("%d",&d1.D);
    scanf("%d",&d1.Y);

    printf("%d/%d/%d",d1.M,d1.D,d1.Y);

    return 0;

}


