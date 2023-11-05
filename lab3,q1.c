#include<stdio.h>
#include<string.h>
void main(){
int a,b,c=0;
printf("Enter a number:\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
int *ptr1= &a;
int *ptr2= &b;
c=*ptr1;
a=*ptr2;
b=c;

printf("Swaped values for first digit is %d\nand for second digit is %d",a,b);

}

