#include <stdio.h>

void main( void )
{
	char buffer[100];
	int n;
	char ch;
	double d;
	
	/* �����t���œǂݍ��� */
	printf("������: ");
	scanf("%s", buffer );
	printf("���l: ");
	scanf("%d", &n );
	printf("����: ");
	scanf("%lf", &d ); 

	printf("������: [%s]\n", buffer );
	printf("���l:   [%d]\n", n );
	printf("����:   [%lf]\n", d );
}
