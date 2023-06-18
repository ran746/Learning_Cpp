#include <stdio.h>

int add(long long a, long long b)
{
	long long result = a + b;
	return result;
}

int minus(long long a, long long b)
{
	long long result = a - b;
	return result;
}

int multiple(long long a, long long b)
{
	long long result = a * b;
	return result;
}

int divide(long long a, long long b)
{
	long long result = a / b;
	return result;
}

int delivery(long long a, long long b)
{
	long long result = a % b;
	return result;
}

int main()
{
	for (;;) {
		printf("只支持两个数运算:\n加1\n减2\n乘3\n除4\n取模5\n退出程序0\n数值最多不得超过7位数\n输入命令:");
		int TypeIn = 0;
		scanf("%d", &TypeIn);
		if (TypeIn == 0) {
			printf("程序关闭");
			break;
		} else {
			switch (TypeIn) {
				case 1: {
					printf("已选择加法运算\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = add(num1, num2);
					printf("%d + %d = %d", num1, num2, result);
					break;
				}
				case 2 : {
					printf("已选择减法运算\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = minus(num1, num2);
					printf("%d - %d = %d", num1, num2, result);
					break;
				}
				case 3: {
					printf("已选择乘法运算\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = multiple(num1, num2);
					printf("%d * %d = %d", num1, num2, result);
					break;
				}
				case 4: {
					printf("已选择除法运算\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = divide(num1, num2);
					printf("%d / %d = %d", num1, num2, result);
					break;
				}
				case 5 : {
					printf("已选择取模运算\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = delivery(num1, num2);
					printf("%d % %d = %d", num1, num2, result);
					break;
				}
				default: {
					printf("命令无效");
					break;
				}
			}
		}
	}
	return 0;
}