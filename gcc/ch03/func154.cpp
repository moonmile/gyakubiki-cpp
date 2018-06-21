#include <stdio.h>

void foo( FILE *fp )
{
	char buf[256];
	fgets( buf, sizeof buf, fp );
	printf( buf );
}


int main( int argc, char *argv[] )
{
	FILE *fp;
	char buf[256];
	
	if ( argc == 1 ) {
		/* 引数が無い場合は標準入力 */
		foo( stdin );
	} else {
		/* 引数がある場合はファイルから入力 */
		if ( (fp = fopen( argv[1], "r" )) != NULL ) {
			foo( fp );
			fclose( fp );
		}
	}
	return 1;
}
