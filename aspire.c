#include<stdio.h>
int main(){
	int row,column;
	scanf("%d",&row);
	scanf("%d",&column);
	int arr[][50]={};
		for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
		}
		
		for(int i=0;i<1;i++){
		for(int j=0;j<column;j++){
			printf("%d ",arr[i][j]);
		}}
		printf("\n");
		for(int i=1;i<row-1;i++){
			for(int j=0;j<column;j++)
			{
			if(j==0 || j==column-1){
				printf("%d ",arr[i][j]);
			}
			else
			printf("  ");
			}
			printf("\n");
		}
		for(int i=row-1;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d ",arr[i][j]);
		}}
		
		
		
		
	
	return 0;
}
