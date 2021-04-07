/* Name :- Harshnoor Sandhu
Student ID :- 118502202
Course Name :- BTP105NAA
*/

#define _CRT_SECURE_NO_WARNINGS

#include "manipulating.h"  //includes header file 

void manipulating() //start of the function 'manipulating'
{
	char string1[80], string2[80]; //declaration of character array 'string1' and 'string2'

	printf("*** Start of Concatenating Strings Demo ***\n"); //prints the start message

	while (TRUE)                                             // Starting of an infinite loop 
	{
		printf("Type the 1st string (q - to quit):\n");  // prints the message adding a new line with '\n' newline character
		scanf("%[^\n]", string1);                        // accepts input from user and gives output of 'string1' 
		getchar();                                       //reads the single line of input and each read returns to the next character until end of the buffer is reached.

		if (strcmp(string1, "q") == 0)                  // used to compare string1 to the value of q, if q==0 then while loop will break. 
		{
			break;                                  
		}

		printf("Type the 2nd string:\n");             // prints the message while adding a new line 
		scanf("%[^\n]", string2);                     // accepts input from user and gives output of 'string1' 
		getchar();                                   //reads the single line of input and each read returns to the next character until end of the buffer is reached.

		strcat(string1, string2);                   //used to concatenate string1 to string2 

		printf("Concatenated string is \'%s\'\n", string1);   //prints the message for string1 
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");      //prints the end message 
}
