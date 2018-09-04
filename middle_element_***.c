#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[20];
	scanf("%s",&str);
	int n;
	n=strlen(str);
	if(n%2!=0){
		
		str[n/2]='*';
		
	}
	else{
	str[n/2]='*';
	str[(n/2)-1]='*';
	}
	printf("%s",str);
	
	return 0;
}
