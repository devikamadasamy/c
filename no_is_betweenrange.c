#include <stdio.h>

int main(void) {
	// your code goes here
	int min,max,n;
	scanf("%d %d %d",&n,&min,&max);
	if(n>min && n<max){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
	
}
