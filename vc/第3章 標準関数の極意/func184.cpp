#include <stdio.h>

int main( void )
{
	FILE *fp;
	
	if ( (fp = tmpfile()) == NULL ) {
		printf("�e���|�����t�@�C�����쐬�ł��܂���ł���");
		return 0;
	}
	fputs( "�e���|�����t�@�C���ɏ�������\n", fp );
	/* �e���|�����t�@�C�����N���[�Y����ƍ폜����� */
	fclose( fp );
	return 1;
}
