#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes 

	char str[20];
	scanf("%s",&str);
	int n=strlen(str);
int i=0;
while(i<n){
	printf("%c",str[i]);
	i=i+2;
	
}
printf(" ");

i=1;
while(i<n){
	printf("%c",str[i]);
	i=i+2;
	
}
	return 0;
}
