#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "Hello world.";
	char *p;
	
	printf("�����Ώۂ̕�����: [%s]\n", str );
	
	/* �P�O�o�C�g�܂ł̊� */
	if ((p=(char*)memchr(str, 'w', 10 )) == NULL ) {
		printf("'w' �͌�����Ȃ�����\n");
	} else {
		printf("'w' �� %d �Ԗڂł�\n", p - str + 1 );
	}
	/* �T�o�C�g�܂ł̊� */
	if ((p=(char*)memchr(str, 'w', 5 )) == NULL ) {
		printf("'w' �͌�����Ȃ�����\n");
	} else {
		printf("'w' �� %d �Ԗڂł�\n", p - str + 1 );
	}
	/* ���������O�ɂ����Ƃ� */
	if ((p=(char*)memchr(str, 'w', 0 )) == NULL ) {
		printf("'w' �͌�����Ȃ�����\n");
	} else {
		printf("'w' �� %d �Ԗڂł�\n", p - str + 1 );
	}
}
