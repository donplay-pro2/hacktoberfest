#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	float p=1.0,gm,c,a;
	scanf("%d",&n);
	k=n;
	for(i=1;i<=n;i++)
	{
		scanf("%f",&a);
		  p=p*a;
		c=p;
	}
	gm=pow(c,(1.0/k));
	printf("%f",gm);
    return 0;
  }
