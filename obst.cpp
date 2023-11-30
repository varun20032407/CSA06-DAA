#include<stdio.h>
int main(){
	int arr[4]={4,3,2,1};
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<4;i++){
		printf("%d",arr[i]);
	}
	int a=arr[0];
	int b=arr[1];
	int c=arr[2];
	int d=arr[3];
	printf("\nSTEP 1\n\n");
	printf(" %d",a);
	printf("\nSTEP 2\n\n");
	printf(" %d\n\t%d",a,b);
	printf("\nSTEP 3\n\n");
	printf("%d\n\t%d\n\t\t%d",a,b,c);
	printf("\nSTEP 4\n\n");
	printf("\t%d\n%d\t\t%d",b,a,c);
	printf("\nSTEP 5\n\n");
	printf("\t%d\n%d\t\t%d\n\t\t\t%d",b,a,c,d);
	int mv=(1*2)+((2*1)+(2*3))+(3*4);
	printf("\n\nTHE MINIMUM VALUE:-%d",mv);
}
