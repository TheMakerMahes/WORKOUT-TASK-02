/*
Write a Program to Find the given Charactor is vowels(a,e,i,o,u) or not using switch case ?
*/
#include<stdio.h>
int main()
{
    char l;
    printf("\n Enter the Letter : ");
    scanf("%c",&l);
    switch (l)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n %c is vowel Letter ",l);
        break;
    default :
        printf("\n %c is not a vowel Letter ",l);
    }
    return 0;
}
