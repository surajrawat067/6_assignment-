#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,sum;
    printf("enter a number");
    scanf("%d",&b);
    for(a=1;b>=a;a++,c=a*a*a)
     sum=sum+c;
    printf("%d\n",sum);
    return 0;
}