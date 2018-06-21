#include <stdio.h>
#include <string.h>

void main( void )
{
	char str1[] = "abcdefg";
	char str2[] = "abcd\0efg";	/* “r’†‚É '\0' ‚ª‚ ‚é */
	char str3[] = "";
	
	printf("'abcdefg' ‚Ì•¶š”‚Í %d ‚Å‚·\n", 
		strlen(str1));
	printf("'abcd\\0efg' ‚Ì•¶š”‚Í %d ‚Å‚·\n", 
		strlen(str2));
	printf("'' ‚Ì•¶š”‚Í %d ‚Å‚·\n", 
		strlen(str3));
}
