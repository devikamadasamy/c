#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	char name[20];
	int flag=1;
	gets(name);
	for(int i=0;i<strlen(name);i++){
			if(name[i]>=48 &&name[i]<=57 || name[i]>=65 && name[i]<=69){
			flag=flag+1;}
	else{
		flag=0;
		break;
	}}
	if(flag==0){
		printf("no");}
		else{
			printf("yes");
		
	}
	return 0;
}
