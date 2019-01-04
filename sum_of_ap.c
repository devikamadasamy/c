#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[10],n;
	
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i]);
	
	}
	n=(arr[2]/2)*(2*arr[0]+(arr[2]-1)*arr[1]);
	printf("%d",n);
	return 0;
}
