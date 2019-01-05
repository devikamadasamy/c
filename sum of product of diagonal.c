#include <stdio.h>

int main(void) {
	// your code goes here
	int dia1=1,dia2=1,sum=0,arr[20][20],n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int k=0;k<n;k++){
		dia1*=arr[k][k];
		dia2*=arr[k][n-k-1];
	}
	sum=dia1+dia2;
	printf("%d",sum);
	return 0;
	
}
