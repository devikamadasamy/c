#include <stdio.h>

int main(void) {
	// your code goes here
	char str[20];
	int n,k;
	int arr[100];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			k=k-1;
		}
		if(k==0){
		printf("%d ",arr[i]);
		break;}
	}
	return 0;
}
