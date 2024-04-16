#include<stdio.h>
#include<conio.h>

main(){
int a;
int b;
int sum;
clrscr();
printf("enter your value x");
scanf("%d",&a);
printf("enter your value y");
scanf("%d",&b);
sum=(a*a*a)+(b*b*b)+(3*a*b);
printf("%d",sum);
getch();
}