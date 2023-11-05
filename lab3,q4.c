#include<stdio.h>
#include<string.h>
void main(){
char arr[]="aminashahzad";
char *ptr=arr;
char ser;
printf("Enter a character for search:\n");
scanf("%c",&ser);
int len=strlen(arr);
for (int i=0;i<=len;i++){

     if(ser==*(ptr+i)){
     printf("Found %c\nAt address %p\nAt index %d",ser,ptr+i,i);

     break ;}

     if(i== len && ser!=arr[i] ){
     printf("%c Not found",ser);}
     }}
