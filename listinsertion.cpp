#include<stdio.h>
int main(){
	int n,arr[100];
	int in;
	printf("Enter the nuber of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element %d:- ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nelements\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("Enter the element to insert:- ");
	scanf("%d",&in);
	int p;
	printf("Enter the position to insert:- ");
	scanf("%d",&p);
	for(int i=n;i>p;i--){
		arr[i]=arr[i-1];
	}
	arr[p]=in;
	n++;
	printf("\narray after insertion\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
