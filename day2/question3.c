#include<stdio.h>
int main (){
    int n , b, prod =1;
    printf("enter the no ");
    scanf("%d",&n);
    while(n>0){
        b = n%10;
        prod =prod*b;
        n =n/10;
    }
    printf("product of the digit =%d",prod);
    return 0;
}