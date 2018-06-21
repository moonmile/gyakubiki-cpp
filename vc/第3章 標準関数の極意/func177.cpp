#include <stdio.h>

int main( void )
{
	FILE *fp;
	int i;
	char buffer[100];
	int  size, count, ret;
	char ch;
	struct BLOCK {
		char a;
		char b;
		char c[4];
	};
	struct BLOCK blocks[3];
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' を書き込みオープンできませんでした\n");
		return 0;
	}
	for ( i=0; i<26; i++ ) fputc( 'a'+i, fp );
	fclose( fp );
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' を読み出しオープンできませんでした\n");
		return 0;
	}
	
	/* 1バイト読み出し */
	if ( (count=fread( &ch, 1, 1, fp)) != 1 ) {
		printf("1バイト読み出しに失敗しました");
	} else {
		printf("1バイト読み出し: %c\n", ch );
	}
	/* 10バイト読み出し */
	if ( (count=fread( buffer, 10, 1, fp)) != 1 ) {
		printf("10バイト読み出しに失敗しました");
	} else {
		buffer[10] = '\0';
		printf("10バイト読み出し: count: %d [%s]\n", count, buffer );
	}
	/* 残りを10バイトずつ読み出す */
	while ( (count=fread( buffer, 1, 10, fp )) != 0 ) {
		buffer[count] = '\0';
		printf("残りを読み出し  : count: %d [%s]\n", count, buffer );
	}
	
	fseek( fp, 0, SEEK_SET ); /* ファイルの先頭に移動 */
	/* 構造体で読み出し */
 	size = sizeof( struct BLOCK );
 	count = sizeof( blocks ) / size;
	if ( (ret=fread( blocks, size, count, fp )) != count ) {
		printf("読み出しに失敗しました [%d]\n", ret );
	} else {
		printf("読み出しに成功しました [%d]\n", ret );
	}
	
	fclose( fp );

	return 1;
}
