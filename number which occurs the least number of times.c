#include <stdio.h>

int main(void) {
	// your code goes here
	int n,arr[20],max,no,count;
	scanf("%d",&n);
	max=n;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	no=arr[0];
	for(int i=0;i<n;i++){
		count=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count=count+1;
			}
			
		}
		if(max>count){
			max=count;
			no=arr[i];
		}
		
	}
	printf("%d",no);
	return 0;
}
