#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	char name[20];
	gets(name);
	for(int i=0;i<strlen(name);i++){
			if(name[i]>=65 &&name[i]<=90){
			name[i]=name[i]+32;
		}
		else{
			name[i]=name[i]-32;
		}
	
	}
	puts(name);
	return 0;
}
