#include<stdio.h>
#include<conio.h>
main(){
int a;
int b;
int sum;
clrscr();
printf("enteryour value x");
scanf("%d",&a);
printf("enter your value y") ;
scanf("%d",&b);
sum=(a*a)+(b*b)+(2*a*b);
printf("%d",sum);
getch();
}