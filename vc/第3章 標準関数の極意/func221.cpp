#include <stdio.h>
#include <string.h>

void main( void )
{
	char str1[] = "abcdefg";
	char str2[] = "abcd\0efg";	/* �r���� '\0' ������ */
	char str3[] = "";
	
	printf("'abcdefg' �̕������� %d �ł�\n", 
		strlen(str1));
	printf("'abcd\\0efg' �̕������� %d �ł�\n", 
		strlen(str2));
	printf("'' �̕������� %d �ł�\n", 
		strlen(str3));
}
