#include <stdio.h>

int main( int argc, char *argv[] )
{

	// リダイレクトした場合、次の文字列はコンソールに表示されない
	printf( "標準出力をします\n" );
	
	// リダイレクトした場合でも、次の文字列はコンソールに表示される
	fprintf( stderr, "標準エラー出力をします\n" ); 
	return 1;
}
