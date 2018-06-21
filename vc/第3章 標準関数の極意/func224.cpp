#include <stdio.h>
#include <string.h>
#include <errno.h>

void main( void )
{
	printf("errno[%d] [%s]\n", ENOENT, strerror(ENOENT));
	printf("errno[%d] [%s]\n", ENOMEM, strerror(ENOMEM));
	printf("errno[%d] [%s]\n", EEXIST, strerror(EEXIST));
}
	
