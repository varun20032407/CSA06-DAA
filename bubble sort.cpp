#include<stdio.h>
int main(){
	int n,arr[100];
	printf("enter the number of elements:-");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("enter the number:- ");
		scanf("%d",&arr[i]);
	}
	printf("\nTHE ELEMENTS");
	for(int i=0;i<n;i++){
		printf("\n%d",arr[i]);
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
	printf("\nTHE BUBBLE SORTED LIST");
	for(int i=0;i<n;i++){
		printf("\n%d",arr[i]);
	}
}
