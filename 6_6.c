#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b;
    printf("enter a number");
    scanf("%d",&b);
    for(a=b;b>1;b--,a=a*b)
    printf("%d\n",b);
     printf("\nThe factorial is %d",a);
    return 0;
}