#include <stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	int n;
	gets(str);
	n=strlen(str);

	
	for(int i=0;i<n;i++)
	{if(i==0){
			str[i]=toupper(str[i]);
		}
		if(str[i]==' '){
			str[i+1]=toupper(str[i+1]);
		}
		
	}
	
	printf("%s",str);
	return 0;
}
