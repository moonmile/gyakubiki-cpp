#include <stdio.h>
#include <string.h>

int main( void )
{
	char str1[] = "abcdefg";
	char str2[] = "abcd\0efg";	/* 途中に '\0' がある */
	char str3[] = "";
	
	printf("'abcdefg' の文字数は %d です\n", 
		strlen(str1));
	printf("'abcd\\0efg' の文字数は %d です\n", 
		strlen(str2));
	printf("'' の文字数は %d です\n", 
		strlen(str3));
}
