#include<stdio.h>
//print array elements
int array(int arr[],int s,int e){
	for(int i=s;i<e;i++){
		printf("%d\n",arr[i]);
	}
}
//dividing of elements
int divide(int arr[],int s,int e){
	if(e-s<=1){
		return 0;
	}
	int mid=(s+e)/2;
	printf("\nElement from index %d to %d:- \n",s,mid-1);
	array(arr,s,mid);
	printf("\nElement from index %d to %d:- \n",mid,e-1);
	array(arr,mid,e);
	divide(arr,s,mid);
	divide(arr,mid,e);
}
int main(){
	int n,arr[100];
	//input of number of elements in array
	printf("enter number of elements:- ");
	scanf("%d",&n);
	//enter the element
	for(int i=0;i<n;i++){
		printf("Enter the element %d:- ",i+1);
		scanf("%d",&arr[i]);
	}
	//print of given elements
	printf("\nELEMENTS\n");
	array(arr,0,n);
	//print of elements divided
	printf("\nDIVIDED ELEMENTS\n");
	divide(arr,0,n);
	//print of largest and smallest element by sorting
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nSmallest element:- %d\n",arr[0]);
	printf("\nLargest element:- %d\n",arr[n-1]);
}
