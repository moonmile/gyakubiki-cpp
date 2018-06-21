#include <stdio.h>

union ipaddr {
	unsigned long ip;
	struct _num {
		unsigned char ip1, ip2, ip3, ip4;
	} n;
};

void main( void )
{
	union ipaddr addr;
	
	addr.n.ip1 = 127;
	addr.n.ip2 = 0;
	addr.n.ip3 = 0;
	addr.n.ip4 = 1;
	
	printf( "ip: %d.%d.%d.%d\n", 
		addr.n.ip1, addr.n.ip2, addr.n.ip3, addr.n.ip4 );
	printf( "ip: %08X\n", 
		addr.ip );
}

