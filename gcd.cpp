#include<stdio.h>
int main(){
	int n1,n2;
	printf("enter the number[1]:- ");
	scanf("%d",&n1);
	printf("enter the number[2]:- ");
	scanf("%d",&n2);
	int temp;
	while(n2!=0){
		temp=n2;
		n2=n2%n1;
		n1=temp;
	}
	printf("%d",temp);
}
