/*Create a structure named Student that has name,roll, mark and grade as members.
Assume appropriate types and size of member. Write a program using structure to
read and display the data entered by the user. Find his/her grade using a user defined function.*/

#include<stdio.h>

/*char Find_Grade(float x)
{
    if(x>=90.0) return'A';
    else if(x>=80.0) return'B';
    else if(x>=70.0) return'C';
    else if(x>=60.0) return'D';
    else return'F';

}
typedef struct
{
    char n[50];
    int r;
    float m;
    char g;
}student;

void main()
{
    student s;
    printf("Enter Name:");
    gets(s.n);
    printf("Enter Roll:");
    scanf("%d",&s.r);
    printf("Enter Mark:");
    scanf("%f",&s.m);

    s.g=Find_Grade(s.m);
    printf("Grad %c",s.g);

}*/



typedef struct
{
    char n[50];
    int r;
    float m;
    char g;
}student;
char Find_Grade(student x)
{
    char g;
    if(x.m>=90.0) g='A';
    else if(x.m>=80.0) g='B';
    else if(x.m>=70.0) g='C';
    else if(x.m>=60.0) g='D';
    else g='F';
    return g;

}

void main()
{
    student s;
    printf("Enter Name:");
    gets(s.n);
    printf("Enter Roll:");
    scanf("%d",&s.r);
    printf("Enter Mark:");
    scanf("%f",&s.m);

    s.g=Find_Grade(s);
    printf("Grad %c",s.g);

}


