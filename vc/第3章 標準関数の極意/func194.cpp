#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

int main( void )
{
	char path[_MAX_PATH];
	
	/* カレントディレクトリを取得 */
	printf("カレントディレクトリ: %s\n", _getcwd( path, sizeof path ));
	
	/* ディレクトリを作成 */
	if ( _mkdir("sample") != 0 ) {
		printf("'sample' ディレクトリが作成できません\n");
		return 0;
	}
	/* ディレクトリを移動 */
	if ( _chdir("sample") != 0 ) {
		printf("'sample' ディレクトリに移動できません\n");
		return 0;
	}
	printf("移動先のディレクトリ: %s\n", _getcwd( path, sizeof path ));
	
	/* 元のディレクトリに移動 */
	if ( _chdir("..") != 0 ) {
		printf("'..' ディレクトリに移動できません\n");
		return 0;
	}
	/* ディレクトリを削除 */
	if ( _rmdir("sample") != 0 ) {
		printf("'sample' ディレクトリを削除できません\n");
		return 0;
	}

	printf("移動元のディレクトリ: %s\n", _getcwd( path, sizeof path ));
	
	return 1;
}
