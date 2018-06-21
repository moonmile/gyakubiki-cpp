#include <stdio.h>

void main( void )
{
	int n;
	char ch;
	
	printf("”’l‚Æ1•¶š: ");
	scanf("%d %c", &n, &ch );
	printf( "[%d][%c]\n", n, ch );

	int &m = n;	// QÆ‚ğg‚¤
	m = 0;
	printf( "n:[%d] m:[%d]\n", n, m );
}
