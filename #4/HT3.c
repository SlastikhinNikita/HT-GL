/* 
   • Implement following functions, similar to corresponding C
   standard library functions:
   size_t _strlen(const char *s);
   size_t _strnlen(const char *s, size_t maxlen);
   char *_strchr(const char *s, int c);
   char *_strrchr(const char *s, int c)
   First two takes pointer to ‘\0’ terminated string in s and
   return number of symbols in string excluding ‘\0’,
   _strnlen() also scans no more than maxlen bytes in s.
   Last two search given symbol c in string s and return
   pointer to it and NULL when no c is found in entire s,
   _strrchr() starts search from right.
 */

#include <stdio.h>




size_t _strlen(const char *s);
size_t _strnlen(const char *s, size_t maxlen);
char *_strchr(char *s, char c);
char *_strrchr(char *s, char c);



int main()
{
	char TempString[] = "Hello World!";




	printf("\n%lu\n", _strlen(TempString));
	printf("\n%lu\n", _strnlen(TempString, 2));
	printf("\n%p\n", _strchr(TempString, 'o'));
	printf("\n%p\n", _strrchr(TempString, 'o'));



	return 0;
}

size_t _strlen(const char *s)
{
	int i = 0;
	do{i++;}while (s[i] != '\0');
	return i;
}


size_t _strnlen(const char *s, size_t maxlen)
{
	int i = 0;
	do{i++;}while ((s[i] != '\0') && (i != maxlen) );
	return i;
}


char *_strchr(char *s, char c)
{
	int i = 0;
	do{i++;}while((s[i] != '\0') && (s[i] != c) );
	return(&s[i]);
}



char *_strrchr(char *s, char c)
{
	int i = 0;
	do{i++;}while(s[i] != '\0');
	do{i--;}while((i != 0) && (s[i] != c));


	return(&s[i]);
}



