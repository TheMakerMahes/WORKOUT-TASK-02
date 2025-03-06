/*
School Result Management 
1.Five Marks input through the Keyboard,
2.Find Total and Average of the given Marks,
3.Find the Result Whether the given Marks must be>=35,
4.Grade as per the following condition
        90 - 100 =A  Grade
        80 - 89  =B  Grade
        70 - 79  =C  Grade
        <70      =D  Grade
        Fail     =No Grade
*/
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,tot;
    float ave;
    printf("\n Enter Your Five Subject Marks : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    tot=m1+m2+m3+m4+m5;
    printf("\n Total mark is %d ",tot);
    ave=tot/5;
    printf("\n Average Mark is %.2f ",ave);
    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        printf("\n Result : Pass ");
        if(ave>=90&&ave<=100)
        {
            printf("\n Grade  : A Grade ");
        }
        else if(ave>=80&&ave<=89)
        {
            printf("\n Grade  : B Grade ");
        }
        else if(ave>=70&&ave<=79)
        {
            printf("\n Grade  : C Grade ");
        }
        else if(ave<69)
        {
            printf("\n Grade  : D Grade ");
        }
    }
    else
    {
        printf("\n Result : Fail");
        printf("\n Grade  : No Grade ");
    }
}
