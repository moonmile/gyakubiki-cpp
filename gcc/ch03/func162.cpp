#include <stdio.h>

int main( void )
{
	int ch, i;

	/* getc 関数の戻り値が 'e' で入力の終端をチェックする */
	i = 0;
	while ( (ch = getc( stdin )) != 'e' ) {
		printf("%d: %c %02X\n", ++i, ch, ch );
	}
}
