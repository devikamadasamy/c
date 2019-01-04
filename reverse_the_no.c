#include <stdio.h>

int main(void) {
	// your code goes here
	char N[10];
	int i;
	scanf("%s",N);
	for(i=strlen(N)-1;i>=0;i--){
		printf("%c",N[i]);
	}
	return 0;
}
