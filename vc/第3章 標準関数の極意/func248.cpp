#include <stdio.h>
#include <string.h>

void main( void )
{
	printf("'cat' �� 'dog'  ���R�o�C�g����r: [%d]\n",
		memcmp( "cat", "dog", 3 ));
	printf("'dog' �� 'cat'  ���R�o�C�g����r: [%d]\n",
		memcmp( "dog", "cat", 3 ));

	printf("'cat' �� 'cats' ���R�o�C�g����r: [%d]\n",
		memcmp( "cat", "cats", 3 ));
	printf("'cat' �� 'cats' ���S�o�C�g����r: [%d]\n",
		memcmp( "cat", "cats", 4 ));

	printf("'dog' �� 'cat'  ���O�o�C�g����r: [%d]\n",
		memcmp( "dog", "cat", 0 ));
}

