#include<stdio.h>
#define pi 3.14
int main()
{int r;
printf("Enter the Radius:");
scanf("%d",&r);
float Area;
Area=pi*r*r;

printf("Area of The circle is:%f\n",Area);
float Perimeter;
Perimeter=2*pi*r;
printf("Perimeter of The circle is:%f",Perimeter);


return 0;
}
