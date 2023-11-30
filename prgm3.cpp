#include<stdio.h>
int main(){
	int n;
	int itm[3],wt[3],val[3];
	int kwt;
	printf("Enter the no.of items:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the item value %d:- ",i+1);
		scanf("%d",&itm[i]);
	}
	for(int i=0;i<n;i++){
		printf("Enter the weight value %d:- ",i+1);
		scanf("%d",&wt[i]);
	}
	for(int i=0;i<n;i++){
		printf("Enter the value %d:- ",i+1);
		scanf("%d",&val[i]);
	}
	printf("\nITEMS\n");
	for(int i=0;i<n;i++){
		printf("%d\n",itm[i]);
	}
	printf("\nWEIGHT\n");
	for(int i=0;i<n;i++){
		printf("%d\n",wt[i]);
	}
	printf("\nVALUE\n");
	for(int i=0;i<n;i++){
		printf("%d\n",val[i]);
	}
	printf("\nEnter the knapsack weight:- ");
	scanf("%d",&kwt);
	int a=wt[0];
	int b=wt[1];
	int c=wt[2];
	int d=wt[0]+wt[1];
	int e=wt[0]+wt[2];
	int f=wt[1]+wt[2];
	int g=wt[0]+wt[1]+wt[2];
	if(a>kwt&&b>kwt&&c>kwt&&f>kwt){
		printf("Value:-%d",val[0]);
		printf("\nValue:-%d",val[1]);
		printf("\nValue:-%d",val[2]);
		printf("\nValue:-%d",val[1]+val[2]);
	}
	int v1=val[0];
	int v2=val[1];
	int v3=val[2];
	int v4=val[1]+val[2];
	if(v1>v2&&v1>v3&&v1>v4){
		printf("\nMaximum value:- %d",v1);
	}
	else if(v2>v1&&v2>v3&&v2>v4){
		printf("\nMaximum value:- %d",v2);
	}
	else if(v3>v1&&v3>v2&&v3>v4){
		printf("\nMaximum value:- %d",v3);
	}
	else{
		printf("\nMaximum value:- %d",v4);
	}
}
