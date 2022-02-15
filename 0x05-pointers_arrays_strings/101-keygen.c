#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * password_generator - generates a random password of 10 characters
 * Return: void
 */

/**
 * main - calls the function password_generator to display a random password
 * Return: 0
 */
void password_generator(void)
{
	unsigned int random;
	int i;
	int j;
	
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "]'(!@)[#\"$\\/^&*?-_";
	char password[17];
	
	srand(time(NULL));
	random = rand() % 4;
	
	for (i = 0; i < 16; i++)
	{
		if (random == 1 )
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			
		}
		else if (random == 2 )
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			
		}
		else if (random == 3)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 4;
		}
		else
		{
			password[i] = symbols[rand() % 18];
			random = rand() % 4;
			
		}
	}
	
	for (j = 0; j < 16; j++)
	{
		printf("%c",password[j]);
	}
}

int main()
{
	password_generator();

	return (0);
}
