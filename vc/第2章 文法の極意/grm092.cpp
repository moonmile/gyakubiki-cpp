#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point {
	int x, y, z;
	char name[10];
	struct point *next;
};

void main( void )
{
	point top;
	struct point *p;

	top.x = top.y = 0;
	strcpy( top.name, "top" );
	top.next = NULL;
	p = &top;
	for ( int i=1; i<=5; i++ ) {
		p->next = (struct point*)malloc( sizeof(struct point));
		p = p->next;
		p->x = p->y = i;
		sprintf( p->name, "num%d", i );
		p->next = NULL;
	}
	
	for ( p = &top; p != NULL; p = p->next ) {
		printf( "x:%d y:%d name:%s\n", p->x, p->y, p->name );
	}
	for ( p = top.next; p != NULL; ) {
		struct point *q = p->next;
		free( p );
		p = q;
	}
}

