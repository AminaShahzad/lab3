#include<stdio.h>
#include<string.h>

void reverse( char *ptr,int size){
   for (int i =size;i>=0;i--){
    printf("%c",*(ptr+i));
}}
/*void reverse(char *ptr , int size);*/
void main(){

char arr[100];
printf("Enter a word:\n");
scanf("%s",arr);
int max= strlen(arr);
reverse(arr,max);
}


