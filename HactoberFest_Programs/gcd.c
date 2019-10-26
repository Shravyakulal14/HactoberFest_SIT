#include<stdio.h>
int gcd(int a,int b){
	if(a==0)
		return b;
	else if(b==0)
		return a;
	else
		return gcd(b,a%b);
	//Write code here
}
int main(){
	int num1,num2,res=0;
	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);
	if (num2 > num1) {
		int temp=num2;
		num2=num1;
		num1=temp;
	}
	res=gcd(num1,num2);
	printf("\nGCD of %d and %d is : %d\n",num1,num2,res);
	return 0;
}
