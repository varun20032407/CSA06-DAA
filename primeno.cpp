#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of prime number:- ");
	scanf("%d",&n);
	int n1[n+1];
	for(int i=0;i<=n;i++){
		n1[i]=1;
	}
	n1[0]=n1[1]=0;
	for(int j=2;j*j<=n;j++){
		if(n1[j]==1){
			for(int i=j*j;i<=n;i++){
				n1[i]=0;
			}
		}
	}
	printf("\nPRIME NUMBERS ARE\n");
	for(int j=2;j<=n;j++){
		if(n1[j]==1){
			printf("%d\n",j);
		}
	}
	printf("\n");
}
