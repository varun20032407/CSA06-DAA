#include<stdio.h>
#include<math.h>
int main(){
	int n,res=0,rem;
	int count=0;
	printf("Enter the number:- ");
	scanf("%d",&n);
	int temp=n;
	while(temp!=0){
		temp/=10;
		count++;
	}
	temp=n;
	while(temp!=0){
		rem=temp%10;
		res+=pow(rem,count);
		temp/=10;
	}
	if(res==n){
		printf("the number is armstrong");
	}
	else{
		printf("the numbe is not an armstrong");
	}
}
