#include <stdio.h>

void foo( FILE *fp )
{
	fputs( "test program ( stdin or file )\n", fp );
}

int main( int argc, char *argv[] )
{
	FILE *fp;
	if ( argc == 1 ) {
		/* �����������ꍇ�͕W���o�� */
		foo( stdout );
		
	} else {
		/* ����������ꍇ�̓t�@�C���֏o�� */
		if ( (fp = fopen( argv[1], "w" )) != NULL ) {
			foo( fp );
			fclose( fp );
		}
	}
	return 1;
}
