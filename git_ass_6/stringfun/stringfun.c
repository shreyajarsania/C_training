#include <stdio.h>
#include <string.h>

/* for strlen */
size_t my_strlen(const char* str)
{
	int count = 0;
	while(str[count] != '\0')
	{
		++count;
	}
	return count;
}

/* for strcpy */
char* my_strcpy(char *dest, const char *src)
{
	int count = 0;
	while(src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	return dest;
}

/* for strcat */
char* my_strcat(char *dest, const char *src)
{
	int length, count = 0;
	length = my_strlen(dest);

	while(src[count] != '\0')
	{
		dest[length + count] = src[count];
		count++;
	}
	return dest;
}

/*for strcmp */
int my_strcmp(const char *str1, const char *str2)
{
	int difference = 0, count = 0;
	while(str1[count] != '\0' || str2[count] !='\0')
	{
		if(str1[count] == str2[count])
		{}
		else
		{
			difference = str1[count] - str2[count];
		}
		count++;
	}
	return difference;
}


/*for stricmp */
int my_stricmp(const char *str1, const char *str2)
{
	int difference = 0, count = 0, str1int, str2int;
	
	while(str1[count] != '\0' || str2[count] !='\0')
        {
		if(str1[count] == str2[count])
                {}
                else
                {
                	difference = str1int - str2int;
		}
                count++;
        }
	if(difference == 32 || difference == (-32))
	{
		difference = 0;
	}
        return difference;
}


/*for strrev */
char * my_strrev(char *str)
{
	int count, length;
	char rev;

	length = my_strlen(str);
	for(count = 0; count <= (length/2); count++)
	{
		rev = str[count];
		str[count] = str[(length - 1) - count];
		str[(length - 1) - count] = rev;
	}
	return str;
}


/* for strchr*/
char* my_strchr (const char *str, int ch)
{
	int count = 0;
	while(str[count] != '\0')
	{
		if(str[count] == ch)
		{
			return (str + count);
		}
		count++;
	}
}

/* for strstr */

char* my_strstr(const char *str, const char *substr)
{
	int count1 = 0, is_found = 0, count2;
                       
	while (str[count1] != '\0')
	{
		count2 = count1;                  
		while (substr[is_found]!='\0')
		{
			if(str[count2]!=substr[is_found])               
			break;
			count2++;                 
			is_found++;
		}
		if(substr[is_found]=='\0')    
		return (char *) str + count1;
		else
		{
			count1++; 
			is_found = 0;                 
		}
	}
}




/* for atoi*/
int my_atoi(const char* str)
{
	int loop, result = 0;
	for(loop = 0; str[loop] != '\0'; loop++)
	{
		result = result * 10 + str[loop] -'0';
	}
	return result;
}

/*for itoa*/
char* my_itoa(int value, char *str, int base)
{
	int loop = 0, mod, rev, length;
	length = my_strlen(str);
	length -= 1;
	while(value > 0)
	{
		mod = value % base;
		value = value/ base;
		
		if(mod > 9 && mod < 16)
		{
			str[loop] = mod - 10 + 'A';
		}
		else
		{
			str[loop] = mod + '0';
		}
		loop++;
	}
	str[loop] = '\0';
	
	length = my_strlen(str);
        length -= 1;

	for(loop = 0; loop < length; loop++, length--)
	{
		rev = str[loop];
		str[loop] = str[length];
		str[length] = rev;
	}
}




/* for roman to integer value */

	/* to convert roman to digit */
int roman_digit(char roman)
{
	switch(roman)
	{
		case 'I' : return 1;
		case 'V' : return 5;
		case 'X' : return 10;
		case 'L' : return 50;
		case 'C' : return 100;
		case 'D' : return 500;
		case 'M' : return 1000;
		case '\0' : return 0;

	}
}


	/* using digits get the decimal value */
int my_roman_dec(char *str)
{
	int loop, decimal = 0, value1, value2;

	while(str[loop] != '\0')
	{
		value1 = roman_digit(str[loop]);
		value2 = roman_digit(str[loop + 1]);
	
		if(value1 >= value2)
		{
			decimal += value1; 
		}
		else
		{
			decimal += (value2 - value1);
			break;
		}
		loop++;
	}
	return decimal;
}




/* for integer to roman*/
char my_dec_roman(int num, char *str)
{
	int next_char;
	while(num != 0)
    	{

    	    if (num >= 1000)       // 1000 - m
	        {
	           str[next_char++] = 'M';
	           num -= 1000;
	        }
	
	        else if (num >= 900)   // 900 -  cm
	        {
		   str[next_char++] = 'C';
		   str[next_char++] = 'M';
	           num -= 900;
	        }

	        else if (num >= 500)   // 500 - d
	        {
			str[next_char++] = 'D';
	        	num -= 500;
	        }

	        else if (num >= 400)   // 400 -  cd
	        {
			str[next_char++] = 'C';
			str[next_char++] = 'D';
	           num -= 400;
	        }

	        else if (num >= 100)   // 100 - c
	        {
			str[next_char++] = 'C';
	           num -= 100;
	        }

	        else if (num >= 90)    // 90 - xc
	        {
			 str[next_char++] = 'X';
			 str[next_char++] = 'C';
                   num -= 90;
       		 }

	        else if (num >= 50)    // 50 - l
	        {
			str[next_char++] = 'L';
	           num -= 50;
	        }

	        else if (num >= 40)    // 40 - xl
       		{
			str[next_char++] = 'X';
			str[next_char++] = 'L';
	           num -= 40;
	        }

	        else if (num >= 10)    // 10 - x
	        {
			str[next_char++] = 'X';
	       	    num -= 10;
	        }
	
	        else if (num >= 9)     // 9 - ix
	        {
			str[next_char++] = 'I';
			str[next_char++] = 'X';
	           num -= 9;
	        }

	        else if (num >= 5)     // 5 - v
	        {
			str[next_char++] = 'V';
	           num -= 5;
	        }

        	else if (num >= 4)     // 4 - iv
	        {
			str[next_char++] = 'I';
			 str[next_char++] = 'V';
	           num -= 4;
	        }

	        else if (num >= 1)     // 1 - i
	        {
			str[next_char++] = 'I';
	           num -= 1;
	        }

	    }
	str[next_char] = '\0';
}


/* for digits to words */

void dec_words(int num, char* str)
{
        int  digit = 0;
        int number[50];

        /* get digits */
        while(num != 0)
        {
                number[digit] = num % 10;
                num /= 10;
                digit++;
        }
        /* concate the string accordingly */
        while(number[digit] != 0)
        {
                switch(number[--digit])
                {
                        case 1: strcat(str, "one ");
                                break;
                        case 2: strcat(str, "two ");
                                break;
                        case 3: strcat(str, "three ");
                                break;
                        case 4: strcat(str, "four ");
                                break;
                        case 5: strcat(str, "five ");
                                break;
                        case 6: strcat(str, "six ");
                                break;
                        case 7: strcat(str, "seven ");
                                break;
                        case 8: strcat(str, "eight ");
                                break;
                        case 9: strcat(str, "nine ");
                                break;
                }
        }
}

/* to remove perticular char form the given string */
void str_ch_rm(char *str, int check, char *result)
{
        int count = 0, new_str = 0;
        while(str[count] != 0)
        {
                /* checks if same, if it is same the it ignores it orelse stores it new string */
                if(check != str[count])
                {
                        result[new_str] = str[count];
                        new_str++;
                        count++;
                }
                else
                {
                        count++;
                }
        }
}


/* to remove all the char of a string form another */

void str_allch_rm(char *str1, char *str2, char *result)
{
        int next_char = 0, check_char, new_str = 0, is_there;

        while(str2[next_char] != '\0')
        {
                check_char = 0;
                is_there = 0;
                while(str1[check_char] != '\0')
                {
                        if(str2[next_char] == str1[check_char])
                        {
                                is_there = 1;
                        }
                        check_char++;
                }
                if(is_there == 0)
                {
                        result[new_str] = str2[next_char];
                        new_str++;
                }
                next_char++;
        }
}
