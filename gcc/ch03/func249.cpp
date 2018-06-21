#include <stdio.h>
#include <string.h>

int main( void )
{
	char src[] = "Hello world";
	char dest[100];
	char *p;
	
	memset( dest, 0, sizeof dest );
	/* 先頭から５バイト転送します */
	p = (char*)memmove( dest, src, 5 );
	printf("5 バイト転送: [%s]\n", dest );
	
	memset( dest, 0, sizeof dest );
	/* 先頭から０バイトコピーします */
	p = (char*)memmove( dest, src, 0 );
	printf("0 バイト転送: [%s]\n", dest );
	
	/* 重なり合っている場合 */
	memset( dest, 0, sizeof dest );
	strcpy( dest, src );
	p = (char*)memmove( dest+5, dest, strlen(src));
	printf("重なっている場合: [%s]\n", dest );
}
