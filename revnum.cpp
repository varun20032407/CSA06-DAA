#include<stdio.h>
int main(){
	int n;
	int revn=0;
	printf("Enter the number:- ");
	scanf("%d",&n);
	while(n>0){
		int nu=n%10;
		revn=revn*10+nu;
		n/=10;
	}
	printf("%d",revn);
}
