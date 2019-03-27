#include<stdio.h>
int main(){
    int input,i;
    scanf("%d",&input);
    for(i=input-1;i>0;i--){
        input=input*i;
    }
    if(input==0)
        printf("1");
    else
        printf("%d",input);
    return 0;
}
