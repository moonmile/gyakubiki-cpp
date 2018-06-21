#include <stdio.h>
#include <string.h>

int main( void )
{
	char buf[20];
	
	/* NULL 初期化する */
	memset( buf, 0, sizeof buf );
	strcpy( buf, "Hello world.");
	
	printf("最初の文字列:         [%s]\n", buf );
	/* 先頭の５文字を'x'で初期化する */
	printf("先頭の５文字を初期化: [%s]\n", memset( buf, 'x', 5 ));
	/* 全体を'.'で初期化する */
	printf("全体を初期化する:     [%s]\n", memset( buf, '.',  sizeof(buf)-1));
}
