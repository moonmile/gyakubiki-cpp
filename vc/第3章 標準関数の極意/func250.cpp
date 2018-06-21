#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "Hello world.";
	char *p;
	
	printf("検索対象の文字列: [%s]\n", str );
	
	/* １０バイトまでの間 */
	if ((p=(char*)memchr(str, 'w', 10 )) == NULL ) {
		printf("'w' は見つからなかった\n");
	} else {
		printf("'w' は %d 番目です\n", p - str + 1 );
	}
	/* ５バイトまでの間 */
	if ((p=(char*)memchr(str, 'w', 5 )) == NULL ) {
		printf("'w' は見つからなかった\n");
	} else {
		printf("'w' は %d 番目です\n", p - str + 1 );
	}
	/* 文字数を０にしたとき */
	if ((p=(char*)memchr(str, 'w', 0 )) == NULL ) {
		printf("'w' は見つからなかった\n");
	} else {
		printf("'w' は %d 番目です\n", p - str + 1 );
	}
}
