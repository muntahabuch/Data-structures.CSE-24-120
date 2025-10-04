// WAP to find the length of string
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    int length=0;
    printf("enter the string : ");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        length ++;
    }
    printf("the length of string : %d ",length);

    return 0;

}
