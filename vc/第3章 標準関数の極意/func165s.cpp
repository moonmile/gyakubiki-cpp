#include <stdio.h>

void main( void )
{
	char buffer[100];
	int n1, n2=0;
	
	/* �����t���œǂݍ��� */
	printf("������: ");
	scanf_s("%s",buffer, 99 );
	printf("2�̐��l: ");
	scanf_s("%d %d", &n1, &n2);

	printf("������: [%s]\n", buffer );
	printf("���l:   [%d][%d]\n", n1, n2 );
}
