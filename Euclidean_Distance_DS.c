#include<stdio.h>
#include<math.h>

typedef struct
{
    int x;
    int y;
}Point;


typedef struct
{
    int x1;
    int y1;
}Point1;
int main()
{
    double d,dx,dy;
    Point p,q;

    p.x=2;
    p.y=5;
    q.x=4;
    q.y=9;

    dx=p.x-q.x;
    dy=p.y-q.y;
    d=dx*dx+dy*dy;
    d=sqrt(d);

    printf("Euclidean Distance %lf",d);

    double D,Dx,Dy;
    Point1 P,Q;

    scanf("%d%d%d%d",&P.x1,&P.y1,&Q.x1,&Q.y1);

    Dx=P.x1-Q.x1;
    Dy=P.y1-Q.y1;
    D=Dx*Dx+Dy*Dy;
    D=sqrt(D);

    printf("Euclidean Distance %lf",D);

    getch();
}
