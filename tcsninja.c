#include <stdio.h>
#include<string.h>
int main(void) {
	char str[20];
	char output[20];
	int arr[100];
	scanf("%s",&str);
	int n,m;
	n=strlen(str);
	output[0]=str[0];
	int j=1;
	int count=1;
	for(int i=1;i<n;i++){
		if(str[i]!=str[i-1]){
			printf("%c",str[i-1]);
			printf("%d",count);
			count=1;
			}
		else{
		count=count+1;
		}
	}
	printf("%c",str[n-1]);
	printf("%d",count);
	
	return 0;
}
