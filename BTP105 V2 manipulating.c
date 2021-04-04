#define _CRT_SECURE_NO_WARNINGS

#include "manipulating.h"

void manipulating()
{
	int result;

	char string1[80], string2[80], compare1[80], compare2[80];

	printf("*** Start of Concatenating Strings Demo ***\n");

	while (TRUE)
	{
		printf("Type the 1st string (q - to quit):\n");
		scanf("%[^\n]", string1);
		getchar();
		
		if (strcmp(string1, "q") == 0)
		{
			break;
		}
		
		printf("Type the 2nd string:\n");
		scanf("%[^\n]", string2);
		getchar();
		
		strcat(string1, string2);

		printf("Concatenated string is \'%s\'\n", string1);
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");

	printf("*** Start of Comparing Strings Demo ***\n");

	while (TRUE)
	{
		printf("Type the 1st string to compare (q - to quit):\n");
		scanf("%[^\n]", compare1);
		getchar();

		if (strcmp(compare1, "q") == 0)
			break;

		printf("Type the 2nd string to compare:\n");
		scanf("%[^\n]", compare2);
		getchar();

		result = strcmp(compare1, compare2);

		if (result < 0)
			printf("1st string is less than 2nd\n");

		else if (result == 0)
			printf("1st string is equal to 2nd\n");

		else
			printf("1st string is greater than 2nd\n");
	}

	printf("*** End of Comparing Strings Demo ***\n\n");
