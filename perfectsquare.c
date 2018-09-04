#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int n,m,prod,p;
	float sq;
	scanf("%d %d",&n,&m);
	prod=m*n;
	sq=sqrt((double)prod);
	p=sq;
	if(sq==p){
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
