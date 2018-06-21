#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ch;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	fputs("Hello world", fp );
	fclose( fp );
	
	fp = fopen("sample.dat","w");
	/* �������݃��[�h�ŃI�[�v������Ă���t�@�C����
	 * �ǂݏo�����Ƃ���ƃG���[�ɂȂ�
	 */
	ch = getc( fp );
	if ( ferror(fp) ) {
		printf("�������݃��[�h�ŃI�[�v�����Ă���t�@�C������ǂݏo�����Ƃ���\n");
		clearerr(fp);
	} else {
		printf("����\n");
	}
	fclose(fp);

	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' ��ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}

	/* �I�[�Ɉړ�������ŁA�ǂݏo�����Ƃ���ƃG���[�ɂȂ� */
	fseek( fp, 0, SEEK_END ); 
	ch = getc( fp );
	if ( ferror(fp) ) {
		printf("�I�[�Ɉړ�������ŁA�ǂݏo�����Ƃ���ƃG���[\n");
		clearerr(fp);
	} else {
		printf("����\n");
	}
	fclose( fp );

	return 1;
}
