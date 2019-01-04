#include <stdio.h>
unsigned long int catlan(unsigned int a){
	if(a<=1){
		return 1;
	}
	
		unsigned long int catno=0;
		for(int i=0;i<a;i++){
			catno+=catlan(i)*catlan(a-i-1);
		}
		return catno;
	
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("%lu ",catlan(i));
	}
	return 0;
}
