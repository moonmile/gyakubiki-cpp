#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int i, ch;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	for ( i=0; i<26; i++ ) fputc('a'+i,fp);
	fclose(fp);
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' ��ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}

	/* �T�����ǂݏo�� */
	for ( i=0; i<5; i++ ) {
		ch = getc( fp );
		printf("%d ������: [%c]\n", i+1, ch );
	}
	/* �擪�Ɉړ����āA�ĂтT�����ǂݏo�� */
	rewind( fp );
	for ( i=0; i<5; i++ ) {
		ch = getc( fp );
		printf("%d ������: [%c]\n", i+1, ch );
	}

	fclose(fp);
	return 1;
}
