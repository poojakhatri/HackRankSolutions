#include <stdio.h>
int main(){

	int n,sum=0;
	int num;
	scanf("%d", &n);
	while(n>0){
		scanf("%d",&num);
		sum+=num;
		n=n-1;
	}	
	printf("%d",sum);
}