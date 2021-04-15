/* Student Name: Harshnoor Sandhu
     Student ID: 118502202 
     Student Email: hsandhu32@myseneca.ca
     Course: BTP105
     This module is created as a part of whole program to be submitted as Final Project for this course. This module allows us to concatenate two user input
     strings and also does the comparison of two strings.
  
  */


#include "manipulating.h"

void manipulating()
{   
	// VERSION #1 CODES
	
	printf("*** Start of Concatenating Strings Demo ***\n");                        //prints the start message
	char string1[80];                                                               //declaration of character array 'string1' 
	char string2[80];                                                               //declaration of character array 'string2' 
	char compare1[80];                                                              //declaration of variable 'compare1'
	char compare2[80];                                                              //declaration of variable 'compare2'
	int result;

	while (TRUE)                                                                    // Entry point to the loop.
	{
		printf("Type the 1st string (q - to quit):\n");                             // prints the message adding a new line with '\n' newline character
		gets(string1);                                                             // Gets user input and assigns it to variable string1.

		if (strcmp(string1, "q") == 0)                                            // used to compare string1 to the value of q, if q==0 then while loop will break. 
			break;

		printf("Type the 2nd string:\n");                                        // prints the message while adding a new line 
		gets(string2);
		strcat(string1, string2);                                              // string2 is concatenated to string1.

		printf("Concatenated string is \'%s\'\n", string1);                     //prints the message for string1
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");                    //prints the end message 
