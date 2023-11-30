#include<stdio.h>
int main(){
	int n,arr[100];
	int found=0,ind=-1;
	printf("enter number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr[i]);
	}
	printf("\nELEMENTS\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
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
	printf("\nSORTED ELEMENTS\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	int s;
	printf("Enter element to search:- ");
	scanf("%d",&s);
	for(int i=0;i<n;i++){
		if(arr[i]==s){
			found=1;
			ind=i;
			break;
		}
	}
	if(found){
		printf("Element found at position %d",ind);
	}
	else{
		printf("Element not found");
	}
}
