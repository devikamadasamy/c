#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[10];
	int ans;
	
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	ans=(arr[0]*arr[1])%arr[2];
	printf("%d",ans);
	
   
	return 0;
}
