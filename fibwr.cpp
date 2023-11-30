#include<stdio.h>
int fib(int n){
	if(n<=0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
int main(){
	int n;
	printf("enter the value[n]:- ");
	scanf("%d",&n);
	printf("Fibnocci Series");
	for(int i=0;i<n;i++){
		printf("\n%d",fib(i));
	}
}
