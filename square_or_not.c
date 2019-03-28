#include<stdio.h>
int main(){
	int l[4],b[4],i,count;
	for(i=0;i<4;i++)
		scanf("%d%d",&l[i],&b[i]);
	if((l[0]-b[0]==0)&&(l[2]-b[2]==0)){
		if((b[1]-l[1])==(l[3]-b[3]))
			printf("yes");
		else
			printf("no");
	}
	else
		printf("no");
	return 0;
}

