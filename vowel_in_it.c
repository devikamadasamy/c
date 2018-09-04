#include <stdio.h>
 #include<string.h>
int main()
{
  char ch;
  int i=0;
 char str[20];
  scanf("%s", &str);
  int n=strlen(str);
  int flag=0;
 while(i<5){
 ch=str[i];
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
      flag=1;
      
  }
    i=i+1;
}
if(flag==1){
		printf("Yes");
	}
	else{
		printf("No");
	}

  return 0;
}
