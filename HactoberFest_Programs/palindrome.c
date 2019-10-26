#include<stdio.h>
int main(){
	char str[100];
	int i=0,j,len;
	printf("\nEnter the string: ");
	gets(str);
	while(str[i]!='\0'){
		i++;
	}
	len=i;
	i=0;
	j=len-1;
	while(i<=len/2){
		if(str[i]==str[j]){
			i++;
			j--;
		}
	}
	if(i>j){
		printf("\nPalindrome");
	}else{
		printf("\nNot Palindrome");
	}
	return 0;
}
