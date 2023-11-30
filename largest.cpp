#include<stdio.h>
int main(){
	int n,arr[100];
	printf("enter the number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("enter the number:- ");
		scanf("%d",&arr[i]);
	}
	printf("elements:- ");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nTHE LARGEST ELEMENT:-%d",arr[n-1]);
}
