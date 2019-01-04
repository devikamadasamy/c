#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char arr[10];
	gets(arr);
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='O'||arr[i]=='U'||arr[i]=='I' ){
			printf("%c",arr[i]);
		}
	}
for(int i=0;i<strlen(arr);i++){
		if(arr[i]!='a' && arr[i]!='e' &&arr[i]!='i' &&arr[i]!='o' &&arr[i]!='u' &&arr[i]!='A'&&arr[i]!='E' &&arr[i]!='O'&&arr[i]!='U' &&arr[i]!='I' ){
			printf("%c",arr[i]);
		}
	}
	return 0;
}
