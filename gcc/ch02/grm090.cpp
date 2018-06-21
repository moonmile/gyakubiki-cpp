#include <stdio.h>

enum COLOR {
	white = 0,
	red, blue, yellow,
	black = 10,
	green,
	pink,
};

int main( void )
{
	enum COLOR x ;
	
	x = red;
	printf( "main x:%d red:%d\n", x, red );
	printf( "main black:%d green:%d\n", black, green );
}
