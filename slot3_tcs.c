#include <stdio.h>
#include<string.h>
int main(void) {
	char str[20];
	char output[20];
	scanf("%s",&str);
	int n,m;
	n=strlen(str);
	output[0]=str[0];
	int j=1;
	for(int i=1;i<n;i++){
		if(str[i]!=str[i-1]){
			output[j]=str[i];
			j=j+1;
			}
	}
	m=strlen(output);
	for(int k=m-1;k>=0;k--){
		printf("%c",output[k]);
	}
	
	return 0;
}
