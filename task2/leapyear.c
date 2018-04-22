#include <stdio.h>

void isLeapYear(int a)
{
if(a%4==0) printf("Yes");
else printf("No");
}

int main()
{
int b;
scanf("%d", &b);
isLeapYear(b);

return 0;
}
