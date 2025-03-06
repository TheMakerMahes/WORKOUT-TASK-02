/*
A Library Charges a fine for every book returned late for First 5 Days fine is 50 paise,for 6 - 10 days
fine is 1 rupees and above 10 days fine is 5 rupees.if you return the book after 30 days your membership will 
be cancelled.write a Program to accept the number of days the member is late to return the book and display 
the fine or the appropriate message ?
*/
#include<stdio.h>
int main()
{
    int days;
    printf("Enter the Days : ");
    scanf("%d",&days);
    if(days>=1 && days<=5)
    {
        printf("\n Your Fine Ammount is 0.5 paise ");
    }
    else if(days>=6 && days<=10)
    {
        printf("\n Your Fine Ammount is 1 Rupee ");
    }
    else if(days>10 && days<=29)
    {
        printf("\n Your Fine Ammount is 5 Rupee ");
    }
    else
    {
        printf("\n Your Mempership Will be Cancelled ");
    }
    return 0;
}
