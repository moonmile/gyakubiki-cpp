#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello world";
	char dest[100];
	char *p;
	
	memset( dest, 0, sizeof dest );
	/* �擪����T�o�C�g�]�����܂� */
	p = (char*)memmove( dest, src, 5 );
	printf("5 �o�C�g�]��: [%s]\n", dest );
	
	memset( dest, 0, sizeof dest );
	/* �擪����O�o�C�g�R�s�[���܂� */
	p = (char*)memmove( dest, src, 0 );
	printf("0 �o�C�g�]��: [%s]\n", dest );
	
	/* �d�Ȃ荇���Ă���ꍇ */
	memset( dest, 0, sizeof dest );
	strcpy( dest, src );
	p = (char*)memmove( dest+5, dest, strlen(src));
	printf("�d�Ȃ��Ă���ꍇ: [%s]\n", dest );
}
