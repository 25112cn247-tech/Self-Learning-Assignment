#include <stdio.h>
int main(){
    int no,sum=0;
    printf("Enter Number ");
    scanf("%d",&no);
    for(int i=1;i<=no;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}