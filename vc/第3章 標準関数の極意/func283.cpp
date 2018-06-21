#include <stdio.h>

void main( void )
{
	FILE *fp;
	
	if ( (fp = fopen("sample.txt", "r")) == NULL ) {
		perror( "fopen error" );
	} else {
		puts( "opened sample file" );
		fclose( fp );
	}
}
