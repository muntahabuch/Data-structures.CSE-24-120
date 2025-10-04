//WAP to traverse an array
#include<stdio.h>
int main()
{
    int array[100], n,i;
    printf("enter the size of an array : ");
    scanf("%d",&n);
    printf("print the elements of the array : \n");
    for(i=0;i<n-1;i++)

       {

       scanf("%d",&array[i]);
       }
       printf("the elements of the array are : ");
        for(i=0;i<n-1;i++)
           {

           printf("%d",array[i]);
           }
        return 0;

}
