#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c;
    printf("enter a number");
    scanf("%d",&b);
    for(a=1,c=0;b>=a;a++)
    
    c=a+c;
    printf("%d\n",c);
 
    return 0;
}