#include<stdio.h>
int max(int a,int b){
	//function to find max value
	return(a>b)?a:b;
}
//function solve knapsnack 0/1
	int knapsnack(int w,int wt[],int val[],int n){
		int i,w1;
		int k[n+1][w+1];
		//bulid opf k[][] matrix
	for(i=0;i<=n;i++){
		for(w1=0;w1<=w;w1++){
			if(i==0||w1==0){
				k[i][w1]=0;
			}
			else if(wt[i-1]<=w1){
				k[i][w1]=max(val[i-1]+k[i-1][w1-wt[i-1]],k[i-1][w]);
			}
			else{
				k[i][w1]=k[i-1][w1];
			}
		}
	}
	return k[n][w];//return of max value
}
int main(){
	int val[]={60,100,120};//value of items
	int wt[]={10,20,30};//weight of items
	int w=50;//knapsnak weight
	int n=sizeof(val)/sizeof(val[0]);//no.of items
	int mv=knapsnack(w,wt,val,n);
	printf("KNAPSNACK MAX VALUE:- %d\n",mv);
}
