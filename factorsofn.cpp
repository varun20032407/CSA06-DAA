#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: - ");
	scanf("%d",&n);
	printf("FACTORS OF %d\n",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("\n%d\n",i);
		}
	}
}
