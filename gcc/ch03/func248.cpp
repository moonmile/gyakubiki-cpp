#include <stdio.h>
#include <string.h>

int main( void )
{
	printf("'cat' と 'dog'  を３バイト分比較: [%d]\n",
		memcmp( "cat", "dog", 3 ));
	printf("'dog' と 'cat'  を３バイト分比較: [%d]\n",
		memcmp( "dog", "cat", 3 ));

	printf("'cat' と 'cats' を３バイト分比較: [%d]\n",
		memcmp( "cat", "cats", 3 ));
	printf("'cat' と 'cats' を４バイト分比較: [%d]\n",
		memcmp( "cat", "cats", 4 ));

	printf("'dog' と 'cat'  を０バイト分比較: [%d]\n",
		memcmp( "dog", "cat", 0 ));
}

