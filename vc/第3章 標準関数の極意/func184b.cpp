#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	FILE *fp;
	int *p = NULL;
	char buffer[100];
	
	if ( (fp = tmpfile()) == NULL ) {
		printf("�e���|�����t�@�C�����쐬�ł��܂���ł���");
		return 0;
	}
	fputs( "�e���|�����t�@�C���ɏ�������", fp );
	rewind(fp);
	fgets( buffer, sizeof buffer, fp );
	printf("[%s]\n", buffer );

	abort();	/* �ُ�I�������� */
	return 1;
}
