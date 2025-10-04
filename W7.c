//WAP to reverse a string
#include<stdio.h>
int main()
{
    char str[100];
    int i,length =0;
    printf("enter the string : ");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        length ++;
    }
    printf("the reversed string :");
    for(length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;


}
