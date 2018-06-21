#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <sys/stat.h>

int main( void )
{
	char path[PATH_MAX];
	
	/* カレントディレクトリを取得 */
	printf("カレントディレクトリ: %s\n", getcwd( path, sizeof path ));
	
	/* ディレクトリを作成 */
	if ( mkdir("sample", 0) != 0 ) {
		printf("'sample' ディレクトリが作成できません\n");
		return 0;
	}
	/* ディレクトリを移動 */
	if ( chdir("sample") != 0 ) {
		printf("'sample' ディレクトリに移動できません\n");
		return 0;
	}
	printf("移動先のディレクトリ: %s\n", getcwd( path, sizeof path ));
	
	/* 元のディレクトリに移動 */
	if ( chdir("..") != 0 ) {
		printf("'..' ディレクトリに移動できません\n");
		return 0;
	}
	/* ディレクトリを削除 */
	if ( rmdir("sample") != 0 ) {
		printf("'sample' ディレクトリを削除できません\n");
		return 0;
	}

	printf("移動元のディレクトリ: %s\n", getcwd( path, sizeof path ));
	
	return 1;
}
