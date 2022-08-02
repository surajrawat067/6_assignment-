#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,e;
    
    printf("enter a number");
    scanf("%d",&a);
    while(a!=0)
    {
    c=a%10;
    a=a/10;
    e = e*10+c;
    }
      printf("%d",e);  
    return 0;
}