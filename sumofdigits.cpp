#include<stdio.h>
int main(){
	int n;
	int sum=0;
	printf("Enter the number:- ");
	scanf("%d",&n);
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	printf("%d",sum);
}
