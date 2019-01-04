#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[10],sum=0,N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
		
	}
	for(int j=0;j<N;j++){
		sum=sum+arr[j];
	}
	printf("%d",sum);
	return 0;
}
