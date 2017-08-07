/* 
• Implement functions char *_strtolower(char *s, size_t len)
and char *_strtoupper(char *s, size_t len), which converts
all upper/lower case chars in string to lower/upper case.
*/

#include <stdio.h>

char *_strtolower(char *s, size_t len);
char *_strtoupper(char *s, size_t len);

/* FOR TEST RUN */

#include <stdio.h>
 
 
 
 
char *_strtoupper(char *s, size_t len) {
 
    char *p = s;
	int i = 0;
 
    for (; *p &&  (i != len); ++p) {
		i++;
 		if (('a' <= *p) && (*p <= 'z'))
		{
			*p = *p -32;
		}
    }
 
    return s;
}
 
char *_strtolower(char *s, size_t len) {
 
    char *p = s;
	int i = 0;
 
    for (; *p &&  (i != len); ++p) {
		i++;
 		if (('A' <= *p) && (*p <= 'Z'))
		{
			*p = *p + 32;
		}
    }
 
    return s;
}
 
 
 
 
 
 
int main() {
 
    char text[] = "aAvAdfA";
 
 
 
 
 
    printf("%s\n", _strtoupper(text,3));
    printf("%s\n", _strtolower(text,3));
 
    return 0;
}

