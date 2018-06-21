#include <stdio.h>

void main( void )
{
	char buffer[100];
	int n;
	char ch;
	double d;
	
	/* ‘®•t‚«‚Å“Ç‚İ‚İ */
	printf("•¶š—ñ: ");
	scanf("%s", buffer );
	printf("”’l: ");
	scanf("%d", &n );
	printf("À”: ");
	scanf("%lf", &d ); 

	printf("•¶š—ñ: [%s]\n", buffer );
	printf("”’l:   [%d]\n", n );
	printf("À”:   [%lf]\n", d );
}
