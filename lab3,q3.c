#include<stdio.h>
#include<string.h>


void main(){
   char arr[100];
   printf("Enter a word\n");
   scanf("%s",arr);
   char *ptr=arr;
   for(int i =0; i<=strlen(arr);i++){
     printf("%c",*(ptr+i));
   }

}
