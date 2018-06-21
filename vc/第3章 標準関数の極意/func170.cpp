#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ret;
	if ( (fp=fopen("sample.txt","w")) != NULL ) {
		fputs("Hello world\n", fp );
		fclose( fp );
	}
	
	ret = fputs( "Hello world\n", stdout );
	printf( "fputs �̖߂�l: %d\n", ret );
	
	if ( (fp=fopen("sample.txt","r")) != NULL ) {
		/* �ǂݍ��݃��[�h�ŃI�[�v�����Ă��邽�߃G���[���������� */
		ret = fputs( "Hello world", fp );
		if ( ret != EOF ) {
			printf( "����I��: %d\n", ret );
		} else {
			printf( "fputs �֐��ňُ킪�������܂���\n" );
		}
		fclose( fp );
	}
	return 1;
}
