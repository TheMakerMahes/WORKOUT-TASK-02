/*
Any integer is input through the Keyboard.Write a Program to find out Whether it is an ODD Number 
or EVEN Number ?
*/
#include<stdio.h>
int main()
{
    int num;
    printf("\n Enter the Any Integers Number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("\n %d is Even Number  ",num);
    }
    else
    {
        printf("\n %d is Odd Number  ",num);
    }
    return 0;
}
