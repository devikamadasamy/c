#include <stdio.h>

int main(void) {
	// your code goes here
	int array1[20],array2[20],n,flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&array1[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&array2[i]);
	}
	for(int i=0;i<n;i++){
		if(array1[i]!=array2[n-1-i]){
		flag=1;
		break;
	}}
	if(flag==0){
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
