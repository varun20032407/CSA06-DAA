#include<stdio.h>
int main(){
	int n;
	int p=0;
	printf("Enter the number:- ");
	scanf("%d",&n);
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			p=1;
			break;
		}
	}
	if(p==0){
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
}
