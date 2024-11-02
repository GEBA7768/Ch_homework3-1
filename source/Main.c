#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*宣告區*/

int square(int y);//P.12
double Power(double, int);//P.13
int maximum(int x, int y, int z);//P.15
enum Status {CONTINUE,WON,LOST};//P.23
int rollDice (void);//P.23
long facrorial(long number);//P.27
/*---------------------------------------------------*/

/*主程式區*/

/*
int main(void) //P.12
{
	int x;
	
	for (x = 1; x < 10; x++)
	{
		printf("%d ", square(x));
	}
	printf("\n");
	system("pause");
	return 0;
}
*/

/*
void main(void) //P.13
{
	int k;
	double Ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);	Ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n", k, Ans);
	system("pause");
}
*/

/*
int main(void) //P.15
{
	int number1;
	int number2;
	int number3;
	printf("Enter three integers:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	printf("Maxinum is: %d\n", maximum(number1, number2, number3));
	system("pause");
	return 0;
}
*/

/*
int main(void) //P.16
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		printf("%.2f ", sqrtf(x));
	}
	printf("\n");
	system("pause");
	return 0;
}
*/

/*
void main(void) //P.18
{
	char string1[60] = "Welcome";
	char string2[60];
	
	int len;

	strcpy_s(string2, sizeof(string2), string1);
	printf("string2=%s\n", string2);

	len = strlen(string2);
	printf("字串長度%d\n", len);

	system("pause");
	return 0;
}
*/

/*
int main(void) //P.20
{
	int i;

	for (i = 1; i <= 20; i++)
	{
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

	system("pause");
	return 0;
}
*/

/*
int main(void) //P.21
{
	int i;
	unsigned seed;

	printf("Enter seed:");
	scanf_s("%u",&seed);

	srand(seed);

	for (i = 1; i <= 10; i++)
	{
		printf("%10d",1+(rand()%6));
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
*/

/*
int main(void) //P.23
{
	int sum;
	int myPoint;

	enum Status gameStatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

	default:
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;
	}

	while (gameStatus == CONTINUE)
	{
		sum = rollDice();

		if (sum == myPoint)
		{
			gameStatus = WON;
		}
		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			}
		}
	}

	if (gameStatus == WON)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player loses\n");
	}

	system("pause");
	return 0;
}
*/

int main(void) //P.27
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %1d\n", i, facrorial(i));
	}
	system("pause");
	return 0;
}
/*-----------------------------------------------------*/

/*副程式區*/
int square(int y)//P.12
{
	return y * y;
}

double Power(double X, int n)//P.13
{
	int i; double PowerXn = 1;
	for (i = 1; i <= n; i++)
	{
		PowerXn = PowerXn * X;
	}
	return PowerXn;
}

int maximum(int x, int y, int z) //P.15
{
	int max = x;

	if (y > max)
	{
		max = y;
	}

	if (z > max)
	{
		max = z;
	}
	return max;
}

int rollDice(void) //P.23
{
	int die1;
	int die2;
	int workSum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;

	printf("Player rollde %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}

long facrorial(long number) //P.27
{
	if (number <= 1)
	{
		return 1;
	}
	else
	{
		return (number * facrorial(number - 1));
	}
}
/*------------------------------------------------------*/