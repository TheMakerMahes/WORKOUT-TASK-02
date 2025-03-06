/*
Any Three Digit Integer is input through the Keyboard.write a Program to find the given 
Three Digit number is Armstrong number or Not ?
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\nEnter the Three digit Number : ");
    scanf("%d",&a);//153
    b=a%10;//3
    c=a/10;//15
    d=c%10;//5
    e=c/10;//1
    printf("\n%d %d %d ",e,d,b);
    c=(e*e*e)+(d*d*d)+(b*b*b);
    if(a==c)
    {
        printf("\n %d is a Armstrong Number ",a);
    }
    else
    {
        printf("\n %d is not a Armstorng Number ",a);
    }
    return 0;
}
