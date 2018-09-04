#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int flag=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
	return 0;
}
