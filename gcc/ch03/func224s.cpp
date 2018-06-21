#include <stdio.h>
#include <string.h>
#include <errno.h>

int main( void )
{
	char buf[256];

	strerror_s( buf, sizeof(buf), ENOENT );
	printf("errno[%d] [%s]\n", ENOENT, buf );
	strerror_s( buf, sizeof(buf), ENOMEM );
	printf("errno[%d] [%s]\n", ENOMEM, buf );
	strerror_s( buf, sizeof(buf), EEXIST );
	printf("errno[%d] [%s]\n", EEXIST, buf );
}
	
