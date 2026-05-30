#include<stdio.h>
int main(){
    int n,  count=0 , digit;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        digit =n%10;
        count++;
        n=n/10;
    }
    printf(" no. of digit =%d",count);
    return 0;
}