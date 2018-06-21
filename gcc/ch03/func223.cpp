#include <stdio.h>
#include <string.h>

int main( void )
{
	char str[] = "012345abcdefg";
	char search1[] = "0123456789";
	char search2[] = "0123456789abcdef";
	
	printf("検査対象:  [%s]\n", str );
	printf("文字セット:[%s] 文字数:[%d]\n", 
		search1, strspn( str, search1 ));
	printf("文字セット:[%s] 文字数:[%d]\n", 
		search2, strspn( str, search2 ));
}
