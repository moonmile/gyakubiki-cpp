#include <stdio.h>

void main( void )
{
	int ch, i;

	/* getchar �֐��̖߂�l�� 'e' �œ��͂̏I�[���`�F�b�N���� */
	i = 0;
	while ( (ch = getchar()) != 'e' ) {
		printf("%d: %c %02X\n", ++i, ch, ch );
	}
}
