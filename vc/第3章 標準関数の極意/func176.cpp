#include <stdio.h>

int main( void )
{
	FILE *fp;
	
	char buffer[] = {'H','e','l','l','o',' ','w','o','r','l','d','\n'};
	int  size = sizeof buffer;
	int  ret, count;
	struct BLOCK {
		int x;
		int y;
		int z;
	};
	struct BLOCK blocks[] = {{1,2,3},{4,5,6},{7,8,9}};

	if ( (fp=fopen("sample.dat","wb")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	
	/* �f�[�^�����P�ɂ��ď������� */
	if ( (ret=fwrite( buffer, size, 1, fp )) != 1 ) {
		printf("fwrite �֐��ł̏������݂Ɏ��s���܂��� [%d]\n", ret );
	} else {
		printf("�T�C�Y�� %d, ���ڐ� %d �̃f�[�^���������݂܂���\n", size, 1 );
	}
	/* ���ڐ����P�ɂ��ď������� */
	if ( (ret=fwrite( buffer, 1, size, fp )) != size ) {
		printf("fwrite �֐��ł̏������݂Ɏ��s���܂��� [%d]\n", ret );
	} else {
		printf("�T�C�Y�� %d, ���ڐ� %d �̃f�[�^���������݂܂���\n", 1, size );
	}
	
	/* �\���̂ŏ������� */
	size  = sizeof( struct BLOCK );
	count = sizeof( blocks ) / size;
	if ( (ret=fwrite( blocks, size, count, fp )) != count ) {
		printf("fwrite �֐��ł̏������݂Ɏ��s���܂��� [%d]\n", ret );
	} else {
		printf("�T�C�Y�� %d, ���ڐ� %d �̃f�[�^���������݂܂���\n", size, count );
	}
	
	fclose( fp );	
}
