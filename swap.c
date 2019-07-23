#include<stdio.h>
void main(){
    int a = 10,b = 20;
    int temp = a;
    a = b;
    b = temp;
    printf(" now the value is swap %d",a);
    printf(" now the value is swap %d",b);


}