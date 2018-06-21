#include <stdio.h>
void func2( void ) 
{
	extern int y;
//	extern int x;	// ƒGƒ‰[‚É‚È‚èQÆ‚Å‚«‚È‚¢
	y = 10;
	printf( "func2 y:%d\n", y );
}
