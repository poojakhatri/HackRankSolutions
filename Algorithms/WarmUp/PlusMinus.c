#include<stdio.h>
int main(){
	
	float n,num;
	int i;
	
	scanf("%f",&n);
	float plus=0,minus=0,zero=0;
	for(i=0 ; i <n ; i++){
		scanf("%f",&num);
		if(num>0)
		{
			plus=plus+1;
		}
		if(num<0)
		{
			minus=minus+1;
		}
		if(num==0){
			zero=zero+1;
		}
	}
	plus=plus/n;
	minus=minus/n;
	zero=zero/n;
	printf("%f\n",plus);
	printf("%f\n",minus);
	printf("%f",zero);

//	
	return 0;
}