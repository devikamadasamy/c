#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[100],n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++){
		if(arr[j]<0){
			sum=sum+arr[j];
		}
	}
	printf("%d",sum);
	return 0;
}
