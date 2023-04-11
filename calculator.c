#include<stdio.h>
#include<math.h>

void sum();
void subtract();
void multiply();
void divide();
void square();
void power();
void cube();
int main()
{
    char n;
    printf("type '+' for addition\n");
    printf("type '-' for subtraction\n");
    printf("type '*' for multiplication\n");
    printf("type '/' for divide\n");
    printf("type 's' for square\n");
    printf("type '^' for power\n");
    printf("type '3' for cube\n");
    scanf("%c",&n);

    if(n=='+')
    {
    sum();
    }
    if(n=='-')
    {
    subtract();
    }
    if(n=='*')
    {
    multiply();
    }
    if(n=='/')
    {
    divide();
    }
    if(n=='s')
    {
    square();
    }
    if(n=='^')
    {
    power();
    }
    if(n=='3');
    {
        cube();
    }
return 0;
}

void sum()
{
    int a,b;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    printf("SUM=%d",a+b);
}
void subtract()
{int a,b;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    printf("SUBTRACT=%d",a-b);
}    

void multiply()
{int a,b;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    printf("MULTIPLY=%d",a*b);
}    

void divide()
{int a,b;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    printf("DIVIDE=%d",a/b);
    }    
void square()
{
    int a;
    printf("enter number you want square");
    scanf("%d",&a);
    printf("square=%d",a*a);
}
void power()
{int a,b;
    printf("enter number you want power\n");
    scanf("%d",&a);
    printf("enter how much power you want\n");
    scanf("%d",&b);
    int power=pow(a,b);
    printf("power=%d",power);
    }    

void cube()
{
int n,cube;
printf("ENTER NUMBER YOU WANT CUBE OF:\n");
scanf("%d",&n);
cube=pow(n,3);
printf("CUBE=%d",cube);
}

    

