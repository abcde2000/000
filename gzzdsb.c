#include<stdio.h>
int main(void)
{
float y,x;
printf("Enter x（x>=0）:\n");
scanf("%f",&x);
if (x<=50){
	y=0.53*x;
}
else {
	y=1.11*x-29;
}
printf("y=f(%f)=%.2f\n",y);
return 0;
}