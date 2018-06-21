#include <stdio.h>

int main( void )
{
	FILE *fp;
	int i;
	char buffer[100];
	int  size, count, ret;
	char ch;
	struct BLOCK {
		char a;
		char b;
		char c[4];
	};
	struct BLOCK blocks[3];
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	for ( i=0; i<26; i++ ) fputc( 'a'+i, fp );
	fclose( fp );
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' ��ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}
	
	/* 1�o�C�g�ǂݏo�� */
	if ( (count=fread( &ch, 1, 1, fp)) != 1 ) {
		printf("1�o�C�g�ǂݏo���Ɏ��s���܂���");
	} else {
		printf("1�o�C�g�ǂݏo��: %c\n", ch );
	}
	/* 10�o�C�g�ǂݏo�� */
	if ( (count=fread( buffer, 10, 1, fp)) != 1 ) {
		printf("10�o�C�g�ǂݏo���Ɏ��s���܂���");
	} else {
		buffer[10] = '\0';
		printf("10�o�C�g�ǂݏo��: count: %d [%s]\n", count, buffer );
	}
	/* �c���10�o�C�g���ǂݏo�� */
	while ( (count=fread( buffer, 1, 10, fp )) != 0 ) {
		buffer[count] = '\0';
		printf("�c���ǂݏo��  : count: %d [%s]\n", count, buffer );
	}
	
	fseek( fp, 0, SEEK_SET ); /* �t�@�C���̐擪�Ɉړ� */
	/* �\���̂œǂݏo�� */
 	size = sizeof( struct BLOCK );
 	count = sizeof( blocks ) / size;
	if ( (ret=fread( blocks, size, count, fp )) != count ) {
		printf("�ǂݏo���Ɏ��s���܂��� [%d]\n", ret );
	} else {
		printf("�ǂݏo���ɐ������܂��� [%d]\n", ret );
	}
	
	fclose( fp );

	return 1;
}
