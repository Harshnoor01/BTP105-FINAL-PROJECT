            

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


	// VERSION #2 CODES

	printf("*** Start of Comparing Strings Demo ***\n");                          // Starting message of string comparison module.

	while (TRUE)                                                                   // Entry point to the loop.
	{
		printf("Type the 1st string to compare (q - to quit):\n");
		gets(compare1);

		if (strcmp(compare1, "q") == 0)                                       // compares the value stored in variable compare1 with "q".
			break;                                                        // If the condition is true, program execution exits the loop.

		printf("Type the 2nd string to compare:\n");
		gets(compare2);

		result = strcmp(compare1, compare2);                                  // Compares the variable string2 with string1 on the basis of ASCII Value.
		if (result < 0)
			printf("1st srting is less than 2nd\n");

		else if (result == 0)
			printf("1st string is equal to 2nd\n");

		else
			printf("1st string is greater than 2nd\n");
	}
	printf("*** End of Comparing Strings Demo ***\n\n");                         // Ending message of string comparison module.

}

        
//	VERSION #3 CODES

	printf("*** Start of Searching Strings Demo ***\n");                        //starting message of searching module

	while (TRUE)                                                                // entry point to loop
	{
		printf("Type the big string (q - to quit):\n");
		gets(big_string);

		if (strcmp(big_string, "q") == 0)
			break;

		printf("Type the substring:\n");                                //prints the message "Type the substring"
		gets(sub_string);                                              // Gets user input and assigns it to variable string1.

		address = strstr(big_string, sub_string);

		if (address != NULL)                                             // If the condition is set to be true then it will exit the loop
			printf("Found at %ld position\n", (long)address - (long)big_string);
		else
			printf("Not found\n");
	}
	printf("*** End of Searching Strings Demo ***\n\n");                  //Ending message of searching string           
}
