#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int i, ch;
	
	if ( (fp=fopen("sample.txt","wb")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	for ( i=0; i<26; i++ ) fputc('a'+i,fp);
	fclose(fp);
	
	if ( (fp=fopen("sample.txt","rb")) == NULL ) {
		printf("'sample.dat' ��ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}
	
	/* 10 �o�C�g�ڂ��� 5 �����\������ */
	if ( fseek( fp, 10, SEEK_SET ) != 0 ) {
		printf("�t�@�C���|�C���^�̈ړ��Ɏ��s���܂���\n");
	}
	printf("�擪���� 10 �o�C�g��: ");
	for ( i=0; i<5; i++ ) putchar(fgetc( fp ));
	putchar('\n');
	
	/* 5 �o�C�g�擪�����ɖ߂� */
	if ( fseek( fp, -3, SEEK_CUR ) != 0 ) {
		printf("�t�@�C���|�C���^�̈ړ��Ɏ��s���܂���\n");
	}
	printf("�擪������ 3 �o�C�g�߂�: ");
	for ( i=0; i<5; i++ ) putchar(fgetc( fp ));
	putchar('\n');

	/* �t�@�C���̏I�[���� 5 �o�C�g�\������ */
	if ( fseek( fp, -5, SEEK_END ) != 0 ) {
		printf("�t�@�C���|�C���^�̈ړ��Ɏ��s���܂���\n");
	}
	printf("�t�@�C���̏I�[���� 5 �o�C�g: ");
	for ( i=0; i<5; i++ ) putchar(fgetc(fp));
	putchar('\n');
	
	fclose(fp);
	return 1;
}
