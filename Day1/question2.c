#include <stdio.h>
int main(){
    int no,fac=1;
    printf("Enter the Number of table");
    scanf("%d",&no);
    for(int i=1;i<=10;i++){
        printf("%d/n",no*i);
    }
    return 0;
}