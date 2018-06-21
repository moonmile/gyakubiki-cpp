#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello world";
	char dest[100];
	errno_t err;
	
	memset( dest, 0, sizeof dest );
	/* 先頭から５バイト転送します */
	err = memmove_s( dest, sizeof(dest), src, 5 );
	printf("5 バイト転送: [%s]\n", dest );
	
	memset( dest, 0, sizeof dest );
	/* 先頭から０バイトコピーします */
	err = memmove_s( dest, sizeof(dest), src, 0 );
	printf("0 バイト転送: [%s]\n", dest );
	
	/* 重なり合っている場合 */
	memset( dest, 0, sizeof dest );
	strcpy( dest, src );
	err = memmove_s( dest+5, sizeof(dest)-5, dest, strlen(src));
	printf("重なっている場合: [%s]\n", dest );
}
