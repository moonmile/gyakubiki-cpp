#include <stdio.h>

void foo( FILE *fp )
{
	fputs( "test program ( stdin or file )\n", fp );
}

int main( int argc, char *argv[] )
{
	FILE *fp;
	if ( argc == 1 ) {
		/* 引数が無い場合は標準出力 */
		foo( stdout );
		
	} else {
		/* 引数がある場合はファイルへ出力 */
		if ( (fp = fopen( argv[1], "w" )) != NULL ) {
			foo( fp );
			fclose( fp );
		}
	}
	return 1;
}
