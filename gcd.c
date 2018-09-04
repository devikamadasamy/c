#include <stdio.h>

int main(void) {
	int n,m,temp;
	scanf("%d %d",&n,&m);
	int gcd=1;
	if(m<n){
		temp=m;
		m=n;
		n=temp;
	}
	for(int i=2;i<=n;i++){
		if(n%i==0 && m%i==0){
			gcd=i;
		}
	}
	printf("%d",gcd);
	return 0;
}
