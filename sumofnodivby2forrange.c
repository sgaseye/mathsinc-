#include<stdio.h>
main(){
    int num,i,sum=0;
    printf("Enter a no. upto which all no. are displayed which are divsible by 2 \n");
    scanf("%d", &num);
    for(i=0;i<=num;i++){
        if(i%2==0){
            sum=sum+i;

        }

    }
    printf("%d",sum);
}
