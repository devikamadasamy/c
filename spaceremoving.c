#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[20];
	gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]==' '){
		
		}
		else{
			printf("%c",str[i]);
		}
	}
	
	return 0;
}
