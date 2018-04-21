#include <math.h>
#include <stdio.h>

int countHypotenuse(int a, int b)
{
int c;
c = sqrt(pow(a,2) + pow(b,2));
return c;
}

int readNumber()
{
int a;
scanf("%d", &a);
return a;
}

int main()
{
int a, b, c;
a=readNumber();
b=readNumber();
c=countHypotenuse(a,b);
printf("%d", c);

return 0;
}
