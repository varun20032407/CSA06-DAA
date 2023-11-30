#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	char s2[100];
	char res[200];
	int ind=0;
	printf("Enter s1:- ");
	scanf("%s",&s1);
	printf("Enter s2:- ");
	scanf("%s",&s2);
	printf("SENTENCE1:- %s",s1);
	printf("\nSENTENCE2:- %s",s2);
	for(int i=0;s1[i]!='\0';i++){
		res[ind]=s1[i];
		ind++;
	}
	for(int i=0;s2[i]!='\0';i++){
		res[ind]=s2[i];
		ind++;
	}
	res[ind]='\0';
	printf("\nCOPY SENTENCE:-%s",res);
}
