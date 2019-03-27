#include<stdio.h>
#include<string.h>
int main(){
int len,i,j,temp;
char input[100001];
gets(input);
len=strlen(input);
for(i=0,j=len-1;i<len/2;i++,j--){
temp=input[i];
input[i]=input[j];
input[j]=temp;
}
puts(input);
return 0;}
