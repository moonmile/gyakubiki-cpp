#include <stdio.h>

void main( void )
{
	char buffer[100];
	int n1, n2=0;
	
	/* ‘®•t‚«‚Å“Ç‚İ‚İ */
	printf("•¶š—ñ: ");
	scanf_s("%s",buffer, 99 );
	printf("2‚Â‚Ì”’l: ");
	scanf_s("%d %d", &n1, &n2);

	printf("•¶š—ñ: [%s]\n", buffer );
	printf("”’l:   [%d][%d]\n", n1, n2 );
}
