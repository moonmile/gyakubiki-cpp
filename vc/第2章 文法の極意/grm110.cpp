#include <stdio.h>
#define PRINT(_max)					\
{									\
	int i;							\
	for ( i=0; i<_max; i++ ) {		\
		printf("[%d]", i );			\
	}								\
}

template <class T> void PR( T max ) 
{
	int i;
	for ( i=0; i<max; i++ ) {
		printf("[%d]", i );
	}
}

void main( void )
{
	PRINT(10);
	PR(10);
}
