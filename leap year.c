#include<stdio.h>
int main()
{
int t,nrr[2500],i;
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&nrr[i]);
for(i=0;i<t;i++)
{
if((nrr[i]%4==0 && nrr[i]%100!=0) || nrr[i]%400==0)
printf("Yes ");
else
printf("No");
}
return 0;
}
