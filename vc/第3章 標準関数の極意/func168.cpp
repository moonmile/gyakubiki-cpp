#include <stdio.h>

int main(void)
{
	FILE *fp;
	
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		puts("�t�@�C�� 'sample.txt' ���J���܂���ł���");
		return 0;
	}
	/* �P�s�������� */
	fputs( "writes one line.\n", fp );
	/* �t�@�C���N���[�Y */
	puts("* test fclose");
	if ( fclose( fp ) == 0 ) {
		puts("�t�@�C���X�g���[��������ɕ����܂���");
	} else {
		puts("fclose �֐����G���[��Ԃ��܂���");
	}
	
	return 1;
}
