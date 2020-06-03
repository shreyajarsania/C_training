/*
 *  Write a program which takes multiple arguments from user, from which two arguments are mandetory thst is username and password. If program doesn't get valid arguments then print "Invalid arguments", and print the help which shows different options and it's usage (for reference, cp --help). There will be one switch for encryption and, one for help.

*Options:
*-u --username -> for username
*-p --password -> for password
*-h --help -> for help
*-e --encrypt -> for encryption

*Samples:

*./server -u perfectvips --password 123

*output:
*App name: ./server
*username: perfectvips
*password: 123
*encryption: No

*./server -e -u perfectvips --password 123

*output:
*App name: ./server
*username: perfectvips
*password: 123
*encryption: Yes

*./server -u perfectvips

*output:
*Invalid arguments
*<Should be dump help menu here like ls --help>

*./server -h
*<Should be dump help menu here like ls --help>
*/
#include "2.h"
int main(int argc, char * argv[], const char *str)
{
	int opt, is_encrypt = 0 ;
	char username[50] = "";
	char password[50]= "";
	int long_index = 0;

	static struct option long_options[] = 
	{
        {"username",	 required_argument,	 0, 	'u' },
        {"password",	 required_argument,	 0,	'p' },
        {"help", 	 no_argument,		 0,	'h' },
        {"encrypt", 	 no_argument,		 0,	'e' },
        {0,		 0,			 0,  	0   }
    	};
	
	
	while((opt = getopt_long(argc, argv, "ehu:p:", long_options, &long_index)) != -1)
	{
		switch(opt)
		{
			case 'u': strcpy(username, optarg);
				break;
			case 'p': strcpy(password, optarg);
				 break;
			case 'e':is_encrypt = 1;
				break;
			case 'h':
				printf("Options:\n");
				printf("-u --username -> for username\n");
				printf("-p --password -> for password\n");
				printf("-h --help \t-> for help\n");
				printf("-e --encrypt\t -> for encryption\n");
				return 0;
			case '?':
				printf("invalid argument\n");
		}
	}

	printf("App name: \t%s\n", argv[0]);

        if(username[0] == NULL)
        {
                printf("Username is nessary\n");
        }
	else
	{
		printf("username: \t%s\n", username);
	}

	if(password[0] == NULL)
        {
                printf("Password is nessary\n");
        }
	else
	{
		printf("password: \t%s\n", password);
	}
	
	if(is_encrypt == 0)
        {
                printf("encryption: \tNo\n");
        }
	else
	{
		printf("encryption: \tYes\n");
	}
	return 0;
}
