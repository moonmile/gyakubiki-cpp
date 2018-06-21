#include <stdio.h>
#include <errno.h>
#ifdef _MSC_VER
#include <direct.h>
#else
#include <unistd.h>
#include <sys/stat.h>
#define mkdir(path)	mkdir(path,0)
#endif

int main( void )
{
	if ( mkdir("sample") != 0 ) {
		printf("'sample' ディレクトリが作成できませんでした [%d]\n", errno );
	} else {
		printf("'sample' ディレクトリを作成しました\n");
	}
	
	/* 既に存在するディレクトリを指定する */
	if ( mkdir("sample") != 0 ) {
		printf("'sample' ディレクトリが作成できませんでした [%d]\n", errno );
	} else {
		printf("'sample' ディレクトリを作成しました\n");
	}
	
	/* 作成できないディレクトリを指定する */
	if ( mkdir("/err/path/sample") != 0 ) {
		printf("'/err/path/sample' ディレクトリが作成できませんでした [%d]\n", errno );
	} else {
		printf("'/err/path/sample' ディレクトリを作成しました\n");
	}
	
	rmdir("sample");
	return 1;
}
