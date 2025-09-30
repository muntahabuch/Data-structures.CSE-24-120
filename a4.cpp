// wap to show the length of a string
#include<stdio.h>
int main()
{ int length=0,i;
 char str[100];
 printf("enter a string : ");
 scanf("%s",&str);
 for(i=0;str[i]!='\0';i++)
 { 
 length ++;
}
printf("lenth of the sring is : ");
printf("%d",length);
return 0;
}
