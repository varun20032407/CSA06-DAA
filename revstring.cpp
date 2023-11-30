#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	int s2=strlen(s1)-1;
	printf("Enter the string:- ");
	scanf("%s",&s1);
	int l=strlen(s1);
	for(int i=0;i<l/2;i++){
		char temp=s1[i];
		s1[i]=s1[l-i-1];
		s1[l-i-1]=temp;
	}
	printf("%s",s1);
}
