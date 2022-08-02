#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b;
    a=1;
    printf("enter a number");
    scanf("%d",&b);
    while(b>a)
  { b=b/10;
   a++;
   }
        printf("%d",a);
    return 0;
}