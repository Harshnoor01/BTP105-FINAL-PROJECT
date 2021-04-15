/* Student Name: Harshnoor Sandhu
     Student ID: 118502202 
     Student Email: hsandhu32@myseneca.ca
     Course: BTP105
     This module is created as a part of whole program to be submitted as Final Project for this course. This module allows us to concatenate two user input
     strings and also does the comparison of two strings.
  
  */


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
