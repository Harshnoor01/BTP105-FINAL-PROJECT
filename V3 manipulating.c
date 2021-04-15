/* Student Name: Harshnoor Sandhu
     Student ID: 118502202 
     Student Email: hsandhu32@myseneca.ca
     Course: BTP105
     This module is created as a part of whole program to be submitted as Final Project for this course. This module allows us to concatenate two user input
     strings and also does the comparison of two strings.
  
  */
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
