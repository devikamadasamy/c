#include <stdio.h>

int main(void) {
	// your code goes here
	int n,arr[10],min,max,diff,maxindex,minindex;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	minindex=0;
	min=arr[0];
	maxindex=0;
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
			minindex=i;
		}
		
	}

	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
			maxindex=i;
		}
		
	}
	diff=maxindex-minindex;
	printf("%d",diff);
	return 0;
}
