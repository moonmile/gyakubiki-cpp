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
		printf("'sample.dat' が書き込みオープンできませんでした\n");
		return 0;
	}
	
	/* データ数を１にして書き込む */
	if ( (ret=fwrite( buffer, size, 1, fp )) != 1 ) {
		printf("fwrite 関数での書き込みに失敗しました [%d]\n", ret );
	} else {
		printf("サイズ長 %d, 項目数 %d のデータを書き込みました\n", size, 1 );
	}
	/* 項目数を１にして書き込む */
	if ( (ret=fwrite( buffer, 1, size, fp )) != size ) {
		printf("fwrite 関数での書き込みに失敗しました [%d]\n", ret );
	} else {
		printf("サイズ長 %d, 項目数 %d のデータを書き込みました\n", 1, size );
	}
	
	/* 構造体で書き込む */
	size  = sizeof( struct BLOCK );
	count = sizeof( blocks ) / size;
	if ( (ret=fwrite( blocks, size, count, fp )) != count ) {
		printf("fwrite 関数での書き込みに失敗しました [%d]\n", ret );
	} else {
		printf("サイズ長 %d, 項目数 %d のデータを書き込みました\n", size, count );
	}
	
	fclose( fp );	
}
