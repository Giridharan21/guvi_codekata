#include<stdio.h>
int main(){
    int input,i;
    scanf("%d",&input);
    for(i=input-1;i>0;i--){
        input=input*i;
    }
    printf("%d",input);
    return 0;
}
