#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int flag=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag!=0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
