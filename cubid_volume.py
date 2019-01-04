#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[10];
	int surface_area,volume;
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
    surface_area=2*(arr[0]*arr[1]+arr[1]*arr[2]+arr[2]*arr[0]);
	volume=arr[0]*arr[1]*arr[2];
	printf("%d ",surface_area);
	printf("%d",volume);
	return 0;
}
