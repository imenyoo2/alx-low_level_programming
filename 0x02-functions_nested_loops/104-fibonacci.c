#include <stdio.h>


int getRightHalf(unsigned long int n);
int getLeftHalf(unsigned long int n);

/**
 * main - Entry point
 * Return: always 0;
 */
int main(void)
{
	unsigned long int n1;
	unsigned long int n2;
	unsigned long int buffer;
	unsigned long int max;
	int i;
	unsigned long int f11, f12, f21, f22, b1, b2;

	printf("1, 2");
	max = 999999999999999999;
	n1 = 1;
	n2 = 2;
	f11 = 0;
	for (i = 0; i < 96; i++)
	{
		if (n1 > max)
		{
			if (f11)
			{
				b1 = f11 + f21;
				b2 = f12 + f22;
	if (b2 >= 1000000000)
	{
		b1 += b2 / 1000000000;
		b2 = b2 - ((b2 / 1000000000) * 1000000000);
	}
				printf(", %lu%lu", b1, b2);
				f11 = f21;
				f12 = f22;
				f21 = b1;
				f22 = b2;
			}
			else
			{
				f11 = getRightHalf(n1);
				f12 = getLeftHalf(n1);
				f21 = getRightHalf(n2);
				f22 = getLeftHalf(n2);
				b1 = f11 + f21;
				b2 = f12 + f22;
				printf(", %lu%lu", b1, b2);
				f11 = f21;
				f12 = f22;
				f21 = b1;
				f22 = b2;
			}
		}
		else
		{
			buffer = n1 + n2;
			printf(", %lu", buffer);
			n1 = n2;
			n2 = buffer;
		}
	}
	printf("\n");
	return (0);
}

/**
 * getRightHalf - return the right half of the decimal num n
 * @n: unsigned long int
 * Return: int
 */
int getRightHalf(unsigned long int n)
{
	return (n / 1000000000);
}


/**
 * getLeftHalf - return the left half of the decimal num n
 * @n: unsigned long int
 * Return: int
 */
int getLeftHalf(unsigned long int n)
{
	return (n - getRightHalf(n) * 1000000000);
}

