#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes 

	char str[20];
	scanf("%s",&str);
	int n=strlen(str);
int i=0,flag=0;
for(i;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(str[i]==str[j]){
			flag=1;
		}
	
	}
	}

if(flag==0){
	printf("Yes");
}
else{
	printf("No");
}

	


	return 0;
}
