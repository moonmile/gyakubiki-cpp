#include <stdio.h>

int main( void )
{
	int ch, i;

	/* getchar 関数の戻り値が 'e' で入力の終端をチェックする */
	i = 0;
	while ( (ch = getchar()) != 'e' ) {
		printf("%d: %c %02X\n", ++i, ch, ch );
	}
}
