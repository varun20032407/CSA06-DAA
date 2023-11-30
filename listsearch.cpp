#include<stdio.h>
int main(){
	int n;
	int arr[100];
	int found=0,ind=1;
	printf("Enter the nuber of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element %d:- ",i+1);
		scanf("%d",&arr[i]);
	}
	int s;
	printf("Enter the element to search:- ");
	scanf("%d",&s);
	for(int i=0;i<n;i++){
		if(arr[i]==s){
			found=1;
			ind=i;
			break;
		}
	}
	if(found){
		printf("Element found at index %d",ind);
	}
	else{
		printf("element not found");
	}
}
