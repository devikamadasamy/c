#include <stdio.h>

int main(void) {
	// your code goes here
	int min,max,n;
	scanf("%d %d %d",&n,&min,&max);
	if(n>min && n<max){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
	
}
