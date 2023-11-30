#include<stdio.h>
int main(){
	int n;
	int sum=0;
	printf("Enter the number:- ");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
		sum+=i;
		}
	}
	if(sum==n){
		printf("perfect");
	}
	else{
		printf("not perfect");
	}
}
