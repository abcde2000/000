#include<stdio.h> 
int main(void)
{
    int s;
    printf(" Enter s:\n");
    scanf("%d",&s);
    switch(s){
        case 0:printf("E\n");
               break;
        case 1:printf("D\n");
               break;
        case 2:printf("C\n");
               break;
        case 3:printf("B\n");
               break;
        case 4:printf("A\n");
               break;
        default:printf("Illegal s\n");
               break;
    }
        return 0;
}