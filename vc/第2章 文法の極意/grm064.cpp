#include <stdio.h>
#include <ctype.h>

int main( void )
{
	FILE *fp;
	int ch;
	
	if ( (fp = fopen("sample.txt","r")) == NULL ) {
		printf( "�t�@�C�����J���܂���\n" );
		return 0;
	}
	while ( (ch = fgetc(fp)) != EOF ) {
		printf( "[%c]", ch );
	}
	fclose( fp );
	return 1;
}
