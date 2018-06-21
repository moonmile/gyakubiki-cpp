#include <stdio.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Cannot use findfirst and findnext function in gcc"
#endif
#include <unistd.h>

int makefile( char *filename )
{
	FILE *fp;
	if ( (fp = fopen( filename, "w" )) == NULL ) {
		return 0;
	}
	fputs("sample data\n",fp);
	fclose(fp);
	return 1;
}

int main( void )
{
	long handle;
	struct _finddata_t finddata;
	FILE *fp;
	
	if (!(makefile("sample1.dat") &&
	      makefile("sample2.dat") &&
	      makefile("sample3.dat"))) {
		printf("sample data ファイルの作成に失敗しました\n");
		return 0;
	}
	
	printf("'sample*.dat' を検索する\n");
	handle = _findfirst("sample*.dat", &finddata );
	if ( handle != -1 ) {
		printf("[%s]\n", finddata.name );
		while ( _findnext( handle, &finddata ) != -1 ) {
			printf("[%s]\n", finddata.name );
		}
		_findclose( handle );
	}
	
	printf("'sample.non.*' を検索する\n");
	handle = _findfirst("sample.non.*", &finddata );
	if ( handle == -1 ) {
		printf("'sample.non.*' がマッチしませんでした [%d]\n", errno );
	} else {
		printf("'sample.non.*' がマッチしました\n", errno );
		_findclose( handle );
	}
	
	return 1;
}
