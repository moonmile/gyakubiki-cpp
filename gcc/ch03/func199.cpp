#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Only can use filelength function in VC"
#endif

int main( void )
{
	FILE *fp;
	int size;
	if ((fp=fopen("func199.cpp","r")) == NULL ) {
		printf("'func199.cpp' がオープンできませんでした\n");
		return 1;
	}
	size = _filelength( fileno(fp));
	printf("ファイル長: %d\n", size );
	fclose(fp);
	return 1;
}
