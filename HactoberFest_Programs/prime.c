#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,num,flag=1,count=0,start,end;
	printf("\nEnter starting number: ");
	scanf("%d",&start);
	printf("\nEnter ending number: ");
	scanf("%d",&end);
	for(num=start;num<end;num++){
		if (num==0||num==1){
			continue;
		}
		
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			count++;
		}
		else{
			flag=1;
		}
		
	}
	printf("\nTotal number of primes is :%d\n",count);

	return 0;
}
