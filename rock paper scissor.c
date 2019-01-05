#include <stdio.h>

int main(void) {
	// your code goes here
	char a,b;
	scanf("%c %c",&a,&b);
	if((a=='S'&&b=='R')||(a=='R'&&b=='S') ){
		printf("R");
	}
	else if((a=='P'&&b=='R')||(a=='R'&&b=='P') ){
		printf("P");
	}
	else if((a=='P'&&b=='S')||(a=='R'&&b=='S') ){
		printf("S");
	}
	else{
		printf("D");
	}
	return 0;
}
