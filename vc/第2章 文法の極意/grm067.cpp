#include <stdio.h>

int main( void )
{
	FILE *fp;
	int i, ch;
	
	if ( (fp=fopen("grm067.cpp","r")) == NULL ) {
		printf( "�t�@�C�����J���Ȃ�\n" );
		return 0;
	}
	
	// 10 �����ɂȂ�܂ŏo��
	for ( i=0; i < 10 && (ch=fgetc(fp)) != EOF; i++ ) {
		printf( "%d:[%c],", i, ch );
	}
	fclose( fp );
	return 1;
}
