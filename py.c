#include <stdio.h>

int main()
{
int a,b,c,d,e,f;
printf("The number if calculation: ");
scanf("%d %d",&a,&b);
c = a+b;
d = a-b;
e = a*b;
f = a/b;
printf("\nAdd: %d",c);
printf("\nSub: %d",d);
printf("\nMulti: %d",e);
printf("\nDivision: %d",f);
return 0;
}