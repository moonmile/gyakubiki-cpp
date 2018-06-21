#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

int main( void )
{
	char path[_MAX_PATH];
	
	/* �J�����g�f�B���N�g�����擾 */
	printf("�J�����g�f�B���N�g��: %s\n", _getcwd( path, sizeof path ));
	
	/* �f�B���N�g�����쐬 */
	if ( _mkdir("sample") != 0 ) {
		printf("'sample' �f�B���N�g�����쐬�ł��܂���\n");
		return 0;
	}
	/* �f�B���N�g�����ړ� */
	if ( _chdir("sample") != 0 ) {
		printf("'sample' �f�B���N�g���Ɉړ��ł��܂���\n");
		return 0;
	}
	printf("�ړ���̃f�B���N�g��: %s\n", _getcwd( path, sizeof path ));
	
	/* ���̃f�B���N�g���Ɉړ� */
	if ( _chdir("..") != 0 ) {
		printf("'..' �f�B���N�g���Ɉړ��ł��܂���\n");
		return 0;
	}
	/* �f�B���N�g�����폜 */
	if ( _rmdir("sample") != 0 ) {
		printf("'sample' �f�B���N�g�����폜�ł��܂���\n");
		return 0;
	}

	printf("�ړ����̃f�B���N�g��: %s\n", _getcwd( path, sizeof path ));
	
	return 1;
}
