#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[100];
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	fputs("Hello world\n", fp );
	fputs("Hello world, too\n", fp );
	fclose( fp );
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' ��ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}
	
	/* �P�s�ǂݍ��� */
	fgets( buffer, sizeof buffer, fp );
	printf("%s", buffer );
	printf("���݈ʒu��: %d\n", ftell(fp));
	fgets( buffer, sizeof buffer, fp );
	printf("%s", buffer );
	printf("���݈ʒu��: %d\n", ftell(fp));
	fseek( fp, 0, SEEK_SET );
	printf("���݈ʒu��: %d\n", ftell(fp));

	fclose( fp );
	return 1;
}
