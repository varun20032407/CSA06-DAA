#include<stdio.h>
int main(){
	int node[4],edg[5];
	int n1,n2;
	printf("Enter the no of nodes:- ");
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		printf("Enter the node value:-");
		scanf("%d",&node[i]);
	}
	printf("Enter the no of edges:- ");
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
		printf("Enter the edge value:-");
		scanf("%d",&edg[i]);
	}
	printf("\nNODES\n");
	for(int i=0;i<n1;i++){
		printf("%d\n",node[i]);
	}
	printf("\nEDGE VALUES\n");
	for(int i=0;i<n1;i++){
		printf("%d\n",edg[i]);
	}
	int a=edg[0]+edg[1]+edg[2]+edg[3];
	int b=edg[4]+edg[2]+edg[3]+edg[1];
	int c=edg[4]+edg[1]+edg[0]+edg[2];
	int d=edg[0]+edg[3]+edg[2]+edg[1];
	int e=edg[3]+edg[0]+edg[1];
	if(a<b&&a<c&&a<d&&a<e){
		printf("Minimum Value:- %d",a);
	}
	else if(b<a&&b<c&&b<d&&b<e){
		printf("Minimum Value:- %d",b);
	}
	else if(c<a&&c<b&&c<d&&c<e){
		printf("Minimum Value:- %d",c);
	}
	else if(d<a&&d<b&&d<c&&d<e){
		printf("Minimum Value:- %d",d);
	}
	else{
		printf("Minimum Value:- %d",e);
	}
}
