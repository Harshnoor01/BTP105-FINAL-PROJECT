#define _CRT_SECURE_NO_WARNINGS

#include "manipulating.h"

void manipulating()
{
	char string1[80], string2[80];

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
}
