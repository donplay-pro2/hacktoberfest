#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k=0,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if((a>50)&&(a<60))
		continue;
		  k++;
		}
		printf("%d",k);
    return 0;
  }
