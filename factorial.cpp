#include<stdio.h>
int main(){
	int n,f=1;
	printf("Enter the value[n]:- ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		f*=i;
	}
	printf("Factorial:-%d",f);
}
