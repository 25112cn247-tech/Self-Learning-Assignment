#include<stdio.h>
int main (){
int n,b,rev =0;
printf("enter the no");
scanf("%d",&n);
while(n>0){
    b=n%10;
    rev = rev *10 +b;
    n = n/10;
}
printf("rev of digit =%d",rev);
return 0;
}