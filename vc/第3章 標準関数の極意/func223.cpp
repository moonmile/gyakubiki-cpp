#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "012345abcdefg";
	char search1[] = "0123456789";
	char search2[] = "0123456789abcdef";
	
	printf("�����Ώ�:  [%s]\n", str );
	printf("�����Z�b�g:[%s] ������:[%d]\n", 
		search1, strspn( str, search1 ));
	printf("�����Z�b�g:[%s] ������:[%d]\n", 
		search2, strspn( str, search2 ));
}
