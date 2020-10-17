#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k=0,a,p;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if((a>50)&&(a<60))
		continue;
		  k++;
		  p=k;
		}
		printf("%d",p);
    return 0;
  }
