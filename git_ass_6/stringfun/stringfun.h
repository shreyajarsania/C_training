#include<stdio.h>
#include<string.h>
#include<stdlib.h>

size_t my_strlen(const char* str);

char* my_strcpy(char *dest, const char *src);

char* my_strcat(char *dest, const char *src);

int my_strcmp(const char *str1, const char *str2);

int my_stricmp(const char *str1, const char *str2);

char * my_strrev(char *str);

char* my_strchr (const char *str, int ch);

char* strstr(const char *str, const char *substr);

int my_atoi(const char* str);

char* my_itoa(int value, char *str, int base);

int my_roman_dec(char *str);

char my_dec_roman(int num, char *str);

void dec_words(int num, char* str);

void str_ch_rm(char *str, int check, char *result);

void str_allch_rm(char *str1, char *str2, char *result);
