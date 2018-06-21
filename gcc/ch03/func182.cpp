#include <stdio.h>

int main( void )
{
	int ch;
	/* 標準出力から読み出そうとするとエラーが発生 */
	ch = fgetc( stdout );
	if ( ferror( stdout ) ) {
		printf("標準出力から読み出そうとしてエラーが発生\n");
	}
	/* クリアせずに標準入力へ出力 */
	puts("クリアせずに標準出力へ出力");
	if ( ferror( stdout ) ) {
		printf("前回のエラーが残っている\n");
	}
	/* エラーをクリアする */
	clearerr(stdout);
	
	if ( ferror( stdout ) ) {
		printf("前回のエラーが残っている\n");
	} else {
		printf("エラーはクリアされました\n");
	}
	return 1;
}
