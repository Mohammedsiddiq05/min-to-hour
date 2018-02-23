#include<stdio.h>
int main()
{
int result1,result2;
int min;
printf("\nenter the minutes");
scanf("%d",&min);
result1=min/60;
result2=min%60;
printf("\nhour is:%d %d",result1,result2);
return 0;
}
