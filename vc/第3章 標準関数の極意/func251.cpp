#include <stdio.h>
#include <string.h>

void main( void )
{
	char buf[20];
	
	/* NULL ‰Šú‰»‚·‚é */
	memset( buf, 0, sizeof buf );
	strcpy( buf, "Hello world.");
	
	printf("Å‰‚Ì•¶š—ñ:         [%s]\n", buf );
	/* æ“ª‚Ì‚T•¶š‚ğ'x'‚Å‰Šú‰»‚·‚é */
	printf("æ“ª‚Ì‚T•¶š‚ğ‰Šú‰»: [%s]\n", memset( buf, 'x', 5 ));
	/* ‘S‘Ì‚ğ'.'‚Å‰Šú‰»‚·‚é */
	printf("‘S‘Ì‚ğ‰Šú‰»‚·‚é:     [%s]\n", memset( buf, '.',  sizeof(buf)-1));
}
