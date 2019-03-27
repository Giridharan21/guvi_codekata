#include<string.h>
#include<stdio.h>
int main(){
    int n,i,j,len;
    scanf("%d",&n);
    getchar();
    char a[n][10000],out[10000];
    for(i=0;i<n;i++){
        gets(a[i]);
        if(i==0)
            len=strlen(a[i]);
        else if (len>strlen(a[i])){
            len=strlen(a[i]);
        }
    }
    for(i=0;i<len;i++){
        for(j=1;j<n;j++){
            if(a[0][i]!=a[j][i])
                break;
        }
        if(j==n)
            out[i]=a[0][i];
        else
            break;
    }
    puts(out);
    return 0;
}
