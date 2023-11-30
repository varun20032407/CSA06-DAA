#include<stdio.h>
int main(){
	int n,arr[100];
	printf("Enter the number:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element %d:-",i+1);
		scanf("%d",&arr[i]);
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
	printf("MINIMUM VALUE:- %d",arr[0]);
	printf("\nMAXIMUM VALUE:-%d",arr[n-1]);
}
