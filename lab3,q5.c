#include<stdio.h>
#include<string.h>
void main(){
int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int mat2[3][3]={{11,12,13},{14,15,16},{17,18,19}};
int *ptr1=mat1;
int *ptr2=mat2;


for(int i=0;i<=8;i++){
    *(ptr1+i)=*(ptr1+i)+*(ptr2+i);

    }
 for(int j=0; j<=8; j++){
    printf("%d ",*(ptr1+j));
    if(j ==2 || j== 5){
        printf("\n");
    }
 }
}

