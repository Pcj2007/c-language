#include <stdio.h>
int main()
{
	int num1=16;
	int num2;
	int sum=0;
	int sub;
	float div=0;
	int mul;
num2 = 61;
sum = num1 + num2;
sub = num1 - num2;
mul = num1 * num2;
div = (float)num1 / (float)num2;
	
printf("%d + %d = %d\n",num1, num2, sum);
printf("%d - %d = %d\n",num1, num2, sub);
printf("%d * %d = %d\n",num1, num2, mul);
printf("%d / %d = %d\n",num1, num2, div);
	return 0;
}