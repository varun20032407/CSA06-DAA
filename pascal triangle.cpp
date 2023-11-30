#include<stdio.h>
int main(){
	int row;
	printf("Enter the number of row:- ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=0;j<row-i;j++){
			printf(" ");
		}
		int c=1;
		for(int k=1;k<=i;k++){
			printf("%d ",c);
			c=c*(i-k)/k;
		}
		printf("\n");
	}
}
