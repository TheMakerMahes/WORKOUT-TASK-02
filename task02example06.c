/*
Write a program for the following output using switch case

     MENU CARD
          1.COFEE
          2.TEA
          3.COLD COFFEE
          4.MILK SHAKE

     Enter your choice  :2

     you have selected Tea
     Enter the quantity :5
     Total Amount :50

*/
#include<stdio.h>
int main()
{
    int cho,qua;
    printf("\n\t MENU CARD ");
    printf("\n\t\t1.COFFEE          Rs:15");
    printf("\n\t\t1.TEA             Rs:10");
    printf("\n\t\t1.cold COFFEE     Rs:25");
    printf("\n\t\t1.MILK SHAKE      Rs:50");
    printf("\n\n Enter Your Choice :");
    scanf("%d",&cho);
    switch(cho)
    {
    case 1:
        printf("\nyou have selected Coffee");
        printf("\n Enter the quantity :");
        scanf("%d",&qua);
        printf("\n Total Amount : %d",(qua*15));
        break;
    case 2:
        printf("\nyou have selected Tea");
        printf("\n Enter the quantity :");
        scanf("%d",&qua);
        printf("\n Total Amount : %d",(qua*10));
        break;
    case 3:
        printf("\nyou have selected Cold Coffee");
        printf("\n Enter the quantity :");
        scanf("%d",&qua);
        printf("\n Total Amount : %d",(qua*25));
        break;
    case 4:
        printf("\nyou have selected Milk shake");
        printf("\n Enter the quantity :");
        scanf("%d",&qua);
        printf("\n Total Amount : %d",(qua*50));
        break;
    default :
        printf("\nInvalid Product selection");

    }
    return 0;
}
