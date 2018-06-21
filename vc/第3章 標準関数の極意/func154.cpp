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
		/* �����������ꍇ�͕W������ */
		foo( stdin );
	} else {
		/* ����������ꍇ�̓t�@�C��������� */
		if ( (fp = fopen( argv[1], "r" )) != NULL ) {
			foo( fp );
			fclose( fp );
		}
	}
	return 1;
}
