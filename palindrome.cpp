#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	int n,l;
	int p=1;
	printf("Enter the string:- ");
	scanf("%s",&s1);
	l=strlen(s1);
	for(int i=0;i<l;i++){
		if(s1[i]!=s1[l-i-1]){
			p=0;
			break;
		}
	}
	if(p){
		printf("palindrome");
	}
	else{
		printf("not a palindrome");
	}
}
