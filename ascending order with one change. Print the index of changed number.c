#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[10];
	int N,index;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<N;i++){
		if(arr[i-1]>arr[i]){
			index=i-1;
			break;
		}
		
	}
	printf("%d",index);
	
   
	return 0;
}
