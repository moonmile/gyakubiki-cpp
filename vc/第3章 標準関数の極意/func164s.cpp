#include <stdio.h>

void main( void )
{
	char buffer[10];
	
	printf("�W�����́istdin�j����ǂݍ���:");
	gets_s( buffer, 10 );
	printf("[%s]\n", buffer );
}
