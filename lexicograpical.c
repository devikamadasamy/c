#include<stdio.h>
#include<string.h>
int main(void) {
	char str[200];
	scanf("%s",&str);
	int n=strlen(str);
	for(int i=0;i<n;i++){
		char min=str[i];
		for(int j=i;j<n;j++){
		
			if(min>str[j]){
				char temp;
				temp=min;
				min=str[j];
				str[j]=temp;
			}
		}
		char free;
		free=min;
		min=str[i];
		str[i]=free;
		
		
	}
	printf("%s",str);
	
	return 0;
}
