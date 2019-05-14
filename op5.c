#include <stdio.h>
int main()
{
int num1, num2, ans = 0;
printf("\nEnter any two integers : ");
scanf("%d %d ", &num1, &num2);
while(num2 != 0)
{
ans = ans + num1;
num2--;
}
printf("Result = %d ", ans);
return 0;
}
