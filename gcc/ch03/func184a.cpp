#include <stdio.h>

int main( void )
{
	FILE *fp;
	
	if ( (fp = tmpfile()) == NULL ) {
		printf("テンポラリファイルが作成できませんでした");
		return 0;
	}
	fputs( "テンポラリファイルに書き込み\n", fp );
	/* そのまま終了しても削除される */
	return 1;
}
