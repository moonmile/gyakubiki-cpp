#include <stdio.h>
#include <string.h>

void main( void )
{
	char buf[20];
	
	/* NULL ���������� */
	memset( buf, 0, sizeof buf );
	strcpy( buf, "Hello world.");
	
	printf("�ŏ��̕�����:         [%s]\n", buf );
	/* �擪�̂T������'x'�ŏ��������� */
	printf("�擪�̂T������������: [%s]\n", memset( buf, 'x', 5 ));
	/* �S�̂�'.'�ŏ��������� */
	printf("�S�̂�����������:     [%s]\n", memset( buf, '.',  sizeof(buf)-1));
}
