//Write a C program to input 5 integers from the user, store them in an array, and calculate the sum of all the elements.
#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    int arr[5];
    printf("enter the numbers : ");


    for(i=0;i<5;i++)
    {

     scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {



        sum+=arr[i];
    }
    printf("sum=%d\n",sum);
    return 0;
}
