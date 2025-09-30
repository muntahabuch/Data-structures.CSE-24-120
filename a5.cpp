//wap to display the string in reverse order
#include<stdio.h>
int main()
{ int i,length =0;
  char str[100];
  printf("enter a string : ");
  scanf("%s",&str);
  for(i=0;str[i]!='\0';i++)
  { length ++;
  }
  printf("%c",str[i]);
  
  printf("reversed string is : ");
  for(i=length-1;i>=0;i--)
  {
  
   printf("%c",str[i]);
}
  
  return 0;
}
