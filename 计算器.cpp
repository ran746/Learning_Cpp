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
		printf("ֻ֧������������:\n��1\n��2\n��3\n��4\nȡģ5\n�˳�����0\n��ֵ��಻�ó���7λ��\n��������:");
		int TypeIn = 0;
		scanf("%d", &TypeIn);
		if (TypeIn == 0) {
			printf("����ر�");
			break;
		} else {
			switch (TypeIn) {
				case 1: {
					printf("��ѡ��ӷ�����\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = add(num1, num2);
					printf("%d + %d = %d", num1, num2, result);
					break;
				}
				case 2 : {
					printf("��ѡ���������\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = minus(num1, num2);
					printf("%d - %d = %d", num1, num2, result);
					break;
				}
				case 3: {
					printf("��ѡ��˷�����\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = multiple(num1, num2);
					printf("%d * %d = %d", num1, num2, result);
					break;
				}
				case 4: {
					printf("��ѡ���������\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = divide(num1, num2);
					printf("%d / %d = %d", num1, num2, result);
					break;
				}
				case 5 : {
					printf("��ѡ��ȡģ����\n");
					long long num1;
					scanf("%d", &num1);
					long long num2;
					scanf("%d", &num2);
					long long result = delivery(num1, num2);
					printf("%d % %d = %d", num1, num2, result);
					break;
				}
				default: {
					printf("������Ч");
					break;
				}
			}
		}
	}
	return 0;
}