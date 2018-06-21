#include <stdio.h>
#include <memory.h>

void main( void )
{
	int xyz[3][3][3];
	
	memset( xyz, 0, 3*3*3 * sizeof(int) );
	printf("memset\n");
	for ( int x=0; x<3; x++ ) {
		for ( int y=0; y<3; y++ ) {
			for ( int z=0; z<3; z++ ) {
				printf("xyz[%d][%d][%d]: %d\n", x, y, z, xyz[x][y][z] );
			}
		}
	}
	
	int *p = (int*)xyz;
	for ( int i=0; i<3*3*3; i++ ) {
		*p = i;
		p++;
	}
	printf("‘½ŽŸŒ³”z—ñ\n");		
	for ( int x=0; x<3; x++ ) {
		for ( int y=0; y<3; y++ ) {
			for ( int z=0; z<3; z++ ) {
				printf("xyz[%d][%d][%d]: %d\n", x, y, z, xyz[x][y][z] );
			}
		}
	}
}
