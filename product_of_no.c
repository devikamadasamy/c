#include <stdio.h>

int main(void) {
	// your code goes here
	int N,ans=1;
	scanf("%d",&N);
	while(N>0){
		int last=N%10;
		ans=ans*last;
		N=N/10;
	}
	printf("%d",ans);
	return 0;
}
