#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int N;
	char arr[10][20],temp[20][20];
	int num[10];
	scanf("%d",&N);
	for(int j=0;j<N;j++){
		scanf("%s",arr[j]);
		puts(arr[j]);
		num[j]=0;
		for(int i=0;i<strlen(arr[j]);i++){
			
		if(arr[j][i]=='a' ||arr[j][i]=='e' ||arr[j][i]=='i' ||arr[j][i]=='o' ||arr[j][i]=='u'||arr[j][i]=='A'||arr[j][i]=='E'||arr[j][i]=='O'||arr[j][i]=='U'||arr[j][i]=='I' ){
			num[j]=num[j]+1;
				
		}
	}
		
	}
	for(int k=0;k<N;k++){
		printf("%d \n",num[k]);
	}
	for(int i=0;i<N-1;i++){
		
		for(int j=i+1;j<N;j++){
			if(num[i]<num[j]){
				 temp[20][20]=arr[j][20];
				arr[j][20]=arr[i][20];
				arr[i][20]=temp[20][20];
				
			}
		
			
		}
		puts(arr[i]);
	}
		
	for(int k=0;k<N;k++){
		printf("%s",arr[k]);
	}
	
	return 0;
}
