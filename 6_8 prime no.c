#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b;
    printf("enter a number");
    scanf("%d",&b);
    if(b==2 | b==3) 
    printf("a prime number");
    else if(b%2==0 | b%3==0 | b%5==0)
        printf("not a prime number");
    else
        printf("a prime number");
    return 0;
}