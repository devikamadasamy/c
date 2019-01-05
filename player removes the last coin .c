#include <stdio.h>

int main(void) {
	// your code goes here
	int coin,player,ans;
	scanf("%d %d",&coin,&player);
	ans=coin%player;
	if(ans==0){
		printf("%d",player);
	
	}
	else{
		printf("%d",ans);
	}
	return 0;
}
